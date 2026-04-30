#pragma once
#include "AppData.h"

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for db_popup
	/// </summary>
	public ref class db_popup : public System::Windows::Forms::Form
	{
	public:
		db_popup(AppData^ data, SimpleHandler^ callback)
		{
			InitializeComponent();
			appData = data;
			OnImport = callback;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~db_popup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;



	private: System::Windows::Forms::Button^ buttonAddToDB;
	private: System::Windows::Forms::Button^ buttonFetchFromDB;
	private: System::Windows::Forms::Label^ labelServer;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelPwd;
	private: System::Windows::Forms::TextBox^ textBoxServer;
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::TextBox^ textBoxPwd;
	private: System::Windows::Forms::Label^ labelTable;
	private: System::Windows::Forms::TextBox^ textBoxTable;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelServer = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->labelPwd = (gcnew System::Windows::Forms::Label());
			this->textBoxServer = (gcnew System::Windows::Forms::TextBox());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPwd = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddToDB = (gcnew System::Windows::Forms::Button());
			this->buttonFetchFromDB = (gcnew System::Windows::Forms::Button());
			this->labelTable = (gcnew System::Windows::Forms::Label());
			this->textBoxTable = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->labelServer, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelID, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelPwd, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxServer, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxID, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxPwd, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->buttonFetchFromDB, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->buttonAddToDB, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelTable, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBoxTable, 1, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(484, 259);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// labelServer
			// 
			this->labelServer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelServer->AutoSize = true;
			this->labelServer->Location = System::Drawing::Point(76, 15);
			this->labelServer->Name = L"labelServer";
			this->labelServer->Size = System::Drawing::Size(89, 13);
			this->labelServer->TabIndex = 5;
			this->labelServer->Text = L"Serverio adresas:";
			// 
			// labelID
			// 
			this->labelID->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelID->AutoSize = true;
			this->labelID->Location = System::Drawing::Point(77, 58);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(87, 13);
			this->labelID->TabIndex = 6;
			this->labelID->Text = L"Vartotojo vardas:";
			// 
			// labelPwd
			// 
			this->labelPwd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelPwd->AutoSize = true;
			this->labelPwd->Location = System::Drawing::Point(89, 101);
			this->labelPwd->Name = L"labelPwd";
			this->labelPwd->Size = System::Drawing::Size(64, 13);
			this->labelPwd->TabIndex = 7;
			this->labelPwd->Text = L"Slaptažodis:";
			// 
			// textBoxServer
			// 
			this->textBoxServer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxServer->Location = System::Drawing::Point(288, 11);
			this->textBoxServer->Name = L"textBoxServer";
			this->textBoxServer->Size = System::Drawing::Size(150, 20);
			this->textBoxServer->TabIndex = 8;
			// 
			// textBoxID
			// 
			this->textBoxID->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxID->Location = System::Drawing::Point(288, 54);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(150, 20);
			this->textBoxID->TabIndex = 9;
			// 
			// textBoxPwd
			// 
			this->textBoxPwd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxPwd->Location = System::Drawing::Point(288, 97);
			this->textBoxPwd->Name = L"textBoxPwd";
			this->textBoxPwd->Size = System::Drawing::Size(150, 20);
			this->textBoxPwd->TabIndex = 10;
			// 
			// buttonAddToDB
			// 
			this->buttonAddToDB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAddToDB->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->buttonAddToDB, 2);
			this->buttonAddToDB->Location = System::Drawing::Point(181, 182);
			this->buttonAddToDB->Name = L"buttonAddToDB";
			this->buttonAddToDB->Size = System::Drawing::Size(122, 23);
			this->buttonAddToDB->TabIndex = 3;
			this->buttonAddToDB->Text = L"Įrašyti į duomenų bazę";
			this->buttonAddToDB->UseVisualStyleBackColor = true;
			this->buttonAddToDB->Click += gcnew System::EventHandler(this, &db_popup::buttonAddToDB_Click);
			// 
			// buttonFetchFromDB
			// 
			this->buttonFetchFromDB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonFetchFromDB->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->buttonFetchFromDB, 2);
			this->buttonFetchFromDB->Location = System::Drawing::Point(166, 225);
			this->buttonFetchFromDB->Name = L"buttonFetchFromDB";
			this->buttonFetchFromDB->Size = System::Drawing::Size(151, 23);
			this->buttonFetchFromDB->TabIndex = 4;
			this->buttonFetchFromDB->Text = L"Nuskaityti iš duomenų bazės";
			this->buttonFetchFromDB->UseVisualStyleBackColor = true;
			this->buttonFetchFromDB->Click += gcnew System::EventHandler(this, &db_popup::buttonFetchFromDB_Click);
			// 
			// labelTable
			// 
			this->labelTable->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelTable->AutoSize = true;
			this->labelTable->Location = System::Drawing::Point(42, 144);
			this->labelTable->Name = L"labelTable";
			this->labelTable->Size = System::Drawing::Size(157, 13);
			this->labelTable->TabIndex = 11;
			this->labelTable->Text = L"Duomenų lentelės pavadinimas:";
			// 
			// textBoxTable
			// 
			this->textBoxTable->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxTable->Location = System::Drawing::Point(288, 140);
			this->textBoxTable->Name = L"textBoxTable";
			this->textBoxTable->Size = System::Drawing::Size(150, 20);
			this->textBoxTable->TabIndex = 12;
			// 
			// db_popup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 259);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MinimumSize = System::Drawing::Size(500, 300);
			this->Name = L"db_popup";
			this->Text = L"Duomenų bazė";
			this->Load += gcnew System::EventHandler(this, &db_popup::db_popup_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		MySqlConnection^ conn;
		AppData^ appData = gcnew AppData();
		SimpleHandler^ OnImport;

		int ConnectToDB() {
			String^ param = "Server="+this->textBoxServer->Text+"; database=database; uID="+this->textBoxID->Text+"; pwd="+this->textBoxPwd->Text+";";
			conn = gcnew MySqlConnection(param);
			try {
				conn->Open();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Nepavyko prisijungti prie duomenų bazės");
				conn->Close();
				return 1;
			}
			return 0;
		}

		void WriteToDB() {
			try {
				String^ sql = "INSERT INTO `"+this->textBoxTable->Text+"` (LAIKAS,PLATUMA,ILGUMA,PALYDOVAI,ACCX,ACCY,ACCZ) VALUES (@laikas,@platuma,@ilguma,@palydovai,@accx,@accy,@accz)";
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
				cmd->Parameters->AddWithValue("@laikas", appData->d[1]);
				cmd->Parameters->AddWithValue("@platuma", appData->d[2]);
				cmd->Parameters->AddWithValue("@ilguma", appData->d[3]);
				cmd->Parameters->AddWithValue("@palydovai", appData->d[4]);
				cmd->Parameters->AddWithValue("@accx", appData->d[5]);
				cmd->Parameters->AddWithValue("@accy", appData->d[6]);
				cmd->Parameters->AddWithValue("@accz", appData->d[7]);
				cmd->ExecuteNonQuery();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Nepavyko įkelti duomenų");
				conn->Close();
				return;
			}
			
			MessageBox::Show("Duomenys įkelti");
			conn->Close();
		}

		void ReadFromDB() {
			try {
				if (appData->d == nullptr) appData->d = gcnew array<String^>(8);
				String^ sql = "SELECT LAIKAS, PLATUMA, ILGUMA, PALYDOVAI, ACCX, ACCY, ACCZ FROM "+this->textBoxTable->Text+" ORDER BY ID DESC LIMIT 1";
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
				MySqlDataReader^ rdr = cmd->ExecuteReader();
				rdr->Read();
				for (int i = 0; i < 7; i++) {
					appData->d[i+1] = rdr[i]->ToString();
				}
				rdr->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Nepavyko nuskaityti duomenų bazės");
				conn->Close();
				return;
			}
			
			OnImport();
			MessageBox::Show("Duomenys importuoti");
			conn->Close();
		}

		private: System::Void db_popup_Load(System::Object^ sender, System::EventArgs^ e) {
			this->textBoxPwd->PasswordChar = '*';
		}

		private: System::Void buttonAddToDB_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!ConnectToDB() && appData->d != nullptr)
				WriteToDB();
		}

		private: System::Void buttonFetchFromDB_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!ConnectToDB())
				ReadFromDB();
		}
	};
}
