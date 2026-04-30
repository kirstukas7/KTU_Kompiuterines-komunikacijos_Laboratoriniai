#pragma once
#include <Windows.h>
#include <string>
#include "AppData.h"
#include "map_popup.h"
#include "db_popup.h"

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for terminal
	/// </summary>
	public ref class terminal : public System::Windows::Forms::Form
	{
	public:
		terminal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~terminal()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ buttonTerminalClear;
	private: System::Windows::Forms::ComboBox^ comboBaudRate;
	private: System::Windows::Forms::ComboBox^ comboPort;
	private: System::Windows::Forms::Button^ buttonOpenCOM;
	private: System::Windows::Forms::RichTextBox^ textBoxTerminal;
	private: System::Windows::Forms::Label^ labelCOMControl;
	private: System::Windows::Forms::Label^ labelCOMSelect;
	private: System::Windows::Forms::Label^ labelCOMBaudRate;
	private: System::Windows::Forms::Label^ labelGPS;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Label^ labelSat;
	private: System::Windows::Forms::Label^ dataGPS;
	private: System::Windows::Forms::Label^ dataTime;
	private: System::Windows::Forms::Label^ dataSat;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartAcc;
	private: System::Windows::Forms::Button^ buttonCopyGPS;
	private: System::Windows::Forms::Button^ buttonMap;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ dbMenuItem;

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->comboBaudRate = (gcnew System::Windows::Forms::ComboBox());
			this->comboPort = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxTerminal = (gcnew System::Windows::Forms::RichTextBox());
			this->labelCOMControl = (gcnew System::Windows::Forms::Label());
			this->labelCOMSelect = (gcnew System::Windows::Forms::Label());
			this->labelCOMBaudRate = (gcnew System::Windows::Forms::Label());
			this->labelGPS = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->dataGPS = (gcnew System::Windows::Forms::Label());
			this->dataTime = (gcnew System::Windows::Forms::Label());
			this->chartAcc = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->buttonTerminalClear = (gcnew System::Windows::Forms::Button());
			this->buttonCopyGPS = (gcnew System::Windows::Forms::Button());
			this->buttonMap = (gcnew System::Windows::Forms::Button());
			this->labelSat = (gcnew System::Windows::Forms::Label());
			this->dataSat = (gcnew System::Windows::Forms::Label());
			this->buttonOpenCOM = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dbMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartAcc))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->comboBaudRate, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->comboPort, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxTerminal, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelCOMControl, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelCOMSelect, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelCOMBaudRate, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelGPS, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelTime, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataGPS, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->dataTime, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->chartAcc, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->buttonTerminalClear, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->buttonCopyGPS, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->buttonMap, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelSat, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->dataSat, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->buttonOpenCOM, 0, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 26);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.862745F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5.882353F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5.882353F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5.882353F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 68.62745F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.862745F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(884, 473);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// comboBaudRate
			// 
			this->comboBaudRate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBaudRate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBaudRate->FormattingEnabled = true;
			this->comboBaudRate->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"9600", L"19200", L"38400", L"57600", L"115200",
					L"230400", L"460800", L"921600"
			});
			this->comboBaudRate->Location = System::Drawing::Point(271, 62);
			this->comboBaudRate->Name = L"comboBaudRate";
			this->comboBaudRate->Size = System::Drawing::Size(121, 21);
			this->comboBaudRate->TabIndex = 4;
			// 
			// comboPort
			// 
			this->comboPort->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboPort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboPort->FormattingEnabled = true;
			this->comboPort->Location = System::Drawing::Point(271, 35);
			this->comboPort->Name = L"comboPort";
			this->comboPort->Size = System::Drawing::Size(121, 21);
			this->comboPort->TabIndex = 2;
			// 
			// textBoxTerminal
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->textBoxTerminal, 2);
			this->textBoxTerminal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxTerminal->Location = System::Drawing::Point(3, 116);
			this->textBoxTerminal->Name = L"textBoxTerminal";
			this->textBoxTerminal->ReadOnly = true;
			this->textBoxTerminal->Size = System::Drawing::Size(436, 318);
			this->textBoxTerminal->TabIndex = 6;
			this->textBoxTerminal->TabStop = false;
			this->textBoxTerminal->Text = L"";
			// 
			// labelCOMControl
			// 
			this->labelCOMControl->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelCOMControl->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->labelCOMControl, 2);
			this->labelCOMControl->Location = System::Drawing::Point(165, 9);
			this->labelCOMControl->Name = L"labelCOMControl";
			this->labelCOMControl->Size = System::Drawing::Size(111, 13);
			this->labelCOMControl->TabIndex = 0;
			this->labelCOMControl->Text = L"COM PORT valdymas";
			// 
			// labelCOMSelect
			// 
			this->labelCOMSelect->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelCOMSelect->AutoSize = true;
			this->labelCOMSelect->Location = System::Drawing::Point(62, 39);
			this->labelCOMSelect->Name = L"labelCOMSelect";
			this->labelCOMSelect->Size = System::Drawing::Size(97, 13);
			this->labelCOMSelect->TabIndex = 1;
			this->labelCOMSelect->Text = L"PORT pasirinkimas";
			// 
			// labelCOMBaudRate
			// 
			this->labelCOMBaudRate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelCOMBaudRate->AutoSize = true;
			this->labelCOMBaudRate->Location = System::Drawing::Point(51, 66);
			this->labelCOMBaudRate->Name = L"labelCOMBaudRate";
			this->labelCOMBaudRate->Size = System::Drawing::Size(118, 13);
			this->labelCOMBaudRate->TabIndex = 3;
			this->labelCOMBaudRate->Text = L"Baud Rate pasirinkimas";
			// 
			// labelGPS
			// 
			this->labelGPS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelGPS->AutoSize = true;
			this->labelGPS->Location = System::Drawing::Point(507, 9);
			this->labelGPS->Name = L"labelGPS";
			this->labelGPS->Size = System::Drawing::Size(91, 13);
			this->labelGPS->TabIndex = 8;
			this->labelGPS->Text = L"GPS Koordinatės:";
			// 
			// labelTime
			// 
			this->labelTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelTime->AutoSize = true;
			this->labelTime->Location = System::Drawing::Point(741, 9);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(65, 13);
			this->labelTime->TabIndex = 12;
			this->labelTime->Text = L"EET Laikas:";
			// 
			// dataGPS
			// 
			this->dataGPS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGPS->AutoSize = true;
			this->dataGPS->Location = System::Drawing::Point(544, 39);
			this->dataGPS->Name = L"dataGPS";
			this->dataGPS->Size = System::Drawing::Size(16, 13);
			this->dataGPS->TabIndex = 9;
			this->dataGPS->Text = L"---";
			// 
			// dataTime
			// 
			this->dataTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataTime->AutoSize = true;
			this->dataTime->Location = System::Drawing::Point(765, 39);
			this->dataTime->Name = L"dataTime";
			this->dataTime->Size = System::Drawing::Size(16, 13);
			this->dataTime->TabIndex = 13;
			this->dataTime->Text = L"---";
			// 
			// chartAcc
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartAcc->ChartAreas->Add(chartArea1);
			this->tableLayoutPanel1->SetColumnSpan(this->chartAcc, 2);
			this->chartAcc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chartAcc->ImeMode = System::Windows::Forms::ImeMode::Off;
			legend1->Alignment = System::Drawing::StringAlignment::Center;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Name = L"Legend1";
			this->chartAcc->Legends->Add(legend1);
			this->chartAcc->Location = System::Drawing::Point(445, 116);
			this->chartAcc->Name = L"chartAcc";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"AccX";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"AccY";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"AccZ";
			this->chartAcc->Series->Add(series1);
			this->chartAcc->Series->Add(series2);
			this->chartAcc->Series->Add(series3);
			this->chartAcc->Size = System::Drawing::Size(436, 318);
			this->chartAcc->TabIndex = 16;
			this->chartAcc->TabStop = false;
			this->chartAcc->Text = L"chart1";
			// 
			// buttonTerminalClear
			// 
			this->buttonTerminalClear->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->SetColumnSpan(this->buttonTerminalClear, 2);
			this->buttonTerminalClear->Location = System::Drawing::Point(183, 443);
			this->buttonTerminalClear->Name = L"buttonTerminalClear";
			this->buttonTerminalClear->Size = System::Drawing::Size(75, 23);
			this->buttonTerminalClear->TabIndex = 7;
			this->buttonTerminalClear->Text = L"Išvalyti duomenis";
			this->buttonTerminalClear->UseVisualStyleBackColor = true;
			this->buttonTerminalClear->Click += gcnew System::EventHandler(this, &terminal::buttonTerminalClear_Click);
			// 
			// buttonCopyGPS
			// 
			this->buttonCopyGPS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonCopyGPS->Location = System::Drawing::Point(515, 62);
			this->buttonCopyGPS->Name = L"buttonCopyGPS";
			this->buttonCopyGPS->Size = System::Drawing::Size(75, 21);
			this->buttonCopyGPS->TabIndex = 10;
			this->buttonCopyGPS->Text = L"Kopijuoti";
			this->buttonCopyGPS->UseVisualStyleBackColor = true;
			this->buttonCopyGPS->Click += gcnew System::EventHandler(this, &terminal::buttonCopyGPS_Click);
			// 
			// buttonMap
			// 
			this->buttonMap->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonMap->Location = System::Drawing::Point(515, 89);
			this->buttonMap->Name = L"buttonMap";
			this->buttonMap->Size = System::Drawing::Size(75, 21);
			this->buttonMap->TabIndex = 11;
			this->buttonMap->Text = L"Žemėlapis";
			this->buttonMap->UseVisualStyleBackColor = true;
			this->buttonMap->Click += gcnew System::EventHandler(this, &terminal::buttonMap_Click);
			// 
			// labelSat
			// 
			this->labelSat->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelSat->AutoSize = true;
			this->labelSat->Location = System::Drawing::Point(726, 66);
			this->labelSat->Name = L"labelSat";
			this->labelSat->Size = System::Drawing::Size(95, 13);
			this->labelSat->TabIndex = 14;
			this->labelSat->Text = L"Palydovų skaičius:";
			// 
			// dataSat
			// 
			this->dataSat->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataSat->AutoSize = true;
			this->dataSat->Location = System::Drawing::Point(765, 93);
			this->dataSat->Name = L"dataSat";
			this->dataSat->Size = System::Drawing::Size(16, 13);
			this->dataSat->TabIndex = 15;
			this->dataSat->Text = L"---";
			// 
			// buttonOpenCOM
			// 
			this->buttonOpenCOM->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonOpenCOM->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->buttonOpenCOM, 2);
			this->buttonOpenCOM->Location = System::Drawing::Point(164, 89);
			this->buttonOpenCOM->Name = L"buttonOpenCOM";
			this->buttonOpenCOM->Size = System::Drawing::Size(114, 21);
			this->buttonOpenCOM->TabIndex = 5;
			this->buttonOpenCOM->Text = L"Atidaryti COM PORT";
			this->buttonOpenCOM->UseVisualStyleBackColor = true;
			this->buttonOpenCOM->Click += gcnew System::EventHandler(this, &terminal::buttonOpenCOM_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(18, 18);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->dbMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(884, 26);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip";
			// 
			// dbMenuItem
			// 
			this->dbMenuItem->Name = L"dbMenuItem";
			this->dbMenuItem->Size = System::Drawing::Size(108, 22);
			this->dbMenuItem->Text = L"Duomenų bazė";
			this->dbMenuItem->Click += gcnew System::EventHandler(this, &terminal::dbMenuItem_Click);
			// 
			// terminal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 499);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(900, 540);
			this->Name = L"terminal";
			this->Text = L"Kompiuterinės komunikacijos 2 lab.";
			this->Load += gcnew System::EventHandler(this, &terminal::terminal_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartAcc))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static SerialPort^ serialPort;
		static String^ serialData;
		AppData^ splitData = gcnew AppData();
		static array<String^>^ prevData = nullptr;
		static String^ coords;
		static map_popup^ mapWindow;
		static db_popup^ dbWindow;
		static int data_i = 0;
		static bool updateReady = false;
		static bool comOpen = false;

		event SimpleHandler^ OnDataUpdated;

		// Nunulinami/atstatomi rodomi duomenys
		void ResetData() {
			this->textBoxTerminal->Text = L"";
			this->dataGPS->Text = L"---";
			this->dataTime->Text = L"---";
			this->dataSat->Text = L"---";
			this->chartAcc->Series["AccX"]->Points->Clear();
			this->chartAcc->Series["AccY"]->Points->Clear();
			this->chartAcc->Series["AccZ"]->Points->Clear();
			splitData->d = nullptr;
		}

		// Pridedami visi pasiekiami COM prievadai
		void AddCOMPorts() {
			this->comboPort->Items->Clear();
			for each (String^ port in serialPort->GetPortNames())
				this->comboPort->Items->Add(port);
		}

		// Atnaujinami duomenys
		public: void UpdateData() {
			int accX, accY, accZ;

			if (updateReady == false) {
				data_i++;
			}
			if (data_i == 8) {
				data_i = 0;
				updateReady = true;
			}

			if (comOpen == true) {
				// Atnaujinamas terminalas
				this->textBoxTerminal->AppendText(serialData);
				this->textBoxTerminal->ScrollToCaret();
				// Išskaidomi duomenys
				prevData = splitData->d;
				splitData->d = serialData->Split(',');
			}

			// Nustatomi duomenys
			this->dataTime->Text = splitData->d[1];
			coords = splitData->d[2] + ", " + splitData->d[3];
			this->dataGPS->Text = coords;
			this->dataSat->Text = splitData->d[4];

			// Konvertuojama į Int
			Int32::TryParse(splitData->d[5], accX);
			Int32::TryParse(splitData->d[6], accY);
			Int32::TryParse(splitData->d[7], accZ);

			// Duomenys pridedami į grafiką
			this->chartAcc->Series["AccX"]->Points->Add(accX);
			this->chartAcc->Series["AccY"]->Points->Add(accY);
			this->chartAcc->Series["AccZ"]->Points->Add(accZ);

			if (prevData == nullptr || splitData->d == nullptr) return;
			// Pasikeitė koordinatės
			if ((prevData[2] != splitData->d[2] || prevData[3] != splitData->d[3]) && updateReady == true) {
				OnDataUpdated();
				updateReady = false;
			}
		}

		// Funkcija iškviečiama kai atsiranda nauji duomenys
		void DataReceivedHandler(System::Object^ sender, SerialDataReceivedEventArgs^ e) {
			serialData = serialPort->ReadExisting();
			this->Invoke(gcnew MethodInvoker(this, &terminal::UpdateData));
		}

		// Išimamas handler, kai uždaromas langas
		void MapClosed(Object^ sender, FormClosedEventArgs^ e) {
			if (mapWindow != nullptr) {
				OnDataUpdated -= gcnew SimpleHandler(mapWindow, &map_popup::UpdateWeb);
				mapWindow = nullptr;
			}
		}

		private: System::Void terminal_Load(System::Object^ sender, System::EventArgs^ e) {
			serialPort = gcnew SerialPort();
			AddCOMPorts();
			ResetData();

			// Sukuriamas Event Handler - funkcija DataReceiveHandler iškviečiama gavus duomenis (DataReceived)
			serialPort->DataReceived += gcnew SerialDataReceivedEventHandler(this, &terminal::DataReceivedHandler);

			this->chartAcc->ChartAreas[0]->AxisY->Minimum = -1200;
			this->chartAcc->ChartAreas[0]->AxisY->Maximum = 1200;
		}

		// Atidaryti prievadą
		private: System::Void buttonOpenCOM_Click(System::Object^ sender, System::EventArgs^ e) {
			if (comOpen == false) { // Prievadas neatidarytas
				if (this->comboPort->SelectedItem == nullptr) {
					MessageBox::Show("Nepasirinktas COM prievadas");
					return;
				}
				if (this->comboBaudRate->SelectedItem == nullptr) {
					MessageBox::Show("Nepasirinktas prievado Baud Rate");
					return;
				}

				// Nustatomas prievadas
				serialPort->PortName = this->comboPort->SelectedItem->ToString();
				serialPort->BaudRate = Convert::ToUInt32(this->comboBaudRate->SelectedItem->ToString());
				serialPort->Open(); // Atidaromas

				comOpen = true;
				this->buttonOpenCOM->Text = L"Uždaryti COM PORT";
			}
			else { // Prievadas atidarytas
				serialPort->Close(); // Uždaromas
				comOpen = false;
				this->buttonOpenCOM->Text = L"Atidaryti COM PORT";
			}
		}

		// Išvalyti terminalą ir kitus duomenis grafinėje sąsajoje
		private: System::Void buttonTerminalClear_Click(System::Object^ sender, System::EventArgs^ e) {
			ResetData();
		}

		// Nukopijuoti GPS koordinates į iškarpinę
		private: System::Void buttonCopyGPS_Click(System::Object^ sender, System::EventArgs^ e) {
			Clipboard::SetText(coords);
		}

		// Atidaryti kitą langą su žemėlapiu
		private: System::Void buttonMap_Click(System::Object^ sender, System::EventArgs^ e) {
			if (splitData->d == nullptr) {
				MessageBox::Show("Nėra duomenų");
				return;
			}
			mapWindow = gcnew map_popup(splitData);

			// Pririšamas atnaujinimo event
			OnDataUpdated += gcnew SimpleHandler(mapWindow, &map_popup::UpdateWeb);
			mapWindow->FormClosed += gcnew FormClosedEventHandler(this, &terminal::MapClosed);

			mapWindow->Show();
		}

		// Atidaryti duomenų bazės langą
		private: System::Void dbMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (splitData->d == nullptr) splitData->d = gcnew array<String^>(8);
			dbWindow = gcnew db_popup(splitData, gcnew SimpleHandler(this, &terminal::UpdateData));
			
			dbWindow->Show();
		}
};
}
