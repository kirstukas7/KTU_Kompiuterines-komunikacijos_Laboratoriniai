#ifndef INC_LIS2DUXS12_DRIVER_H_
#define INC_LIS2DUXS12_DRIVER_H_

#include "main.h"
#include <stdbool.h>

extern I2C_HandleTypeDef hi2c1;

bool lis2duxs12_driver_check(void);
bool lis2duxs12_driver_init(void);
bool lis2duxs12_driver_get_acc(int16_t *accX, int16_t *accY, int16_t *accZ);

#endif /* INC_LIS2DUXS12_DRIVER_H_ */
