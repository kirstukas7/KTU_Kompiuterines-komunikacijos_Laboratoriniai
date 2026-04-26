#include "lis2duxs12_driver.h"

#define I2C_ADDRESS 0x32
#define CTRL_REG_1	0x10 // control register for incrementing
#define CTRL_REG_5	0x14 // control register for acc modes
#define DATA_REG	0x28 // first register of reading

#define ARRAY_LENGTH(x) (sizeof(x) / sizeof((x)[0]))

static uint8_t increment_command = 0x10; // register increment
static uint8_t modes_command = 0x81; // low/normal modes for acc and gyr
static uint8_t raw_data[6] = {0};

/* Device has no WHO_AM_I register, check if address is correct */
bool lis2duxs12_driver_check(void){
	HAL_StatusTypeDef  status = HAL_I2C_IsDeviceReady(&hi2c1, I2C_ADDRESS, 3, 10);
	return status == HAL_OK;
}

/* No configuration needed */
bool lis2duxs12_driver_init(void){
	HAL_I2C_Mem_Write(&hi2c1, I2C_ADDRESS, CTRL_REG_1, 1, &increment_command, 1, 10);
	HAL_I2C_Mem_Write(&hi2c1, I2C_ADDRESS, CTRL_REG_5, 1, &modes_command, 1, 10);
	return true;
}

bool lis2duxs12_driver_get_acc(int16_t *accX, int16_t *accY, int16_t *accZ){
	if((accX == NULL) || (accY == NULL) || (accZ == NULL)){
		return false;
	}

	HAL_I2C_Mem_Read(&hi2c1, I2C_ADDRESS, DATA_REG, 1, raw_data, 6, 10);

	*accX = (int16_t)((raw_data[1] << 8) + (raw_data[0] & 0b11111110)) * 0.122;
	*accY = (int16_t)((raw_data[3] << 8) + (raw_data[2] & 0b11111110)) * 0.122;
	*accZ = (int16_t)((raw_data[5] << 8) + (raw_data[4] & 0b11111110)) * 0.122;
	return true;
}
