#pragma once

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
		db_popup(void)
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
		~db_popup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::RichTextBox^ textBoxData;
	private: System::Windows::Forms::Label^ labelEnterText;
	private: System::Windows::Forms::TextBox^ textBoxEnterText;
	private: System::Windows::Forms::Button^ buttonAddToDB;
	private: System::Windows::Forms::Button^ buttonFetchFromDB;

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
			this->textBoxData = (gcnew System::Windows::Forms::RichTextBox());
			this->labelEnterText = (gcnew System::Windows::Forms::Label());
			this->textBoxEnterText = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddToDB = (gcnew System::Windows::Forms::Button());
			this->buttonFetchFromDB = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->textBoxData, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelEnterText, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxEnterText, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->buttonAddToDB, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->buttonFetchFromDB, 0, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(584, 459);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// textBoxData
			// 
			this->textBoxData->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxData->Location = System::Drawing::Point(3, 183);
			this->textBoxData->Name = L"textBoxData";
			this->textBoxData->ReadOnly = true;
			this->textBoxData->Size = System::Drawing::Size(578, 273);
			this->textBoxData->TabIndex = 0;
			this->textBoxData->Text = L"";
			// 
			// labelEnterText
			// 
			this->labelEnterText->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelEnterText->AutoSize = true;
			this->labelEnterText->Location = System::Drawing::Point(257, 16);
			this->labelEnterText->Name = L"labelEnterText";
			this->labelEnterText->Size = System::Drawing::Size(69, 13);
			this->labelEnterText->TabIndex = 1;
			this->labelEnterText->Text = L"Įrašyti tekstą:";
			// 
			// textBoxEnterText
			// 
			this->textBoxEnterText->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxEnterText->Location = System::Drawing::Point(114, 57);
			this->textBoxEnterText->Name = L"textBoxEnterText";
			this->textBoxEnterText->Size = System::Drawing::Size(355, 20);
			this->textBoxEnterText->TabIndex = 2;
			// 
			// buttonAddToDB
			// 
			this->buttonAddToDB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAddToDB->AutoSize = true;
			this->buttonAddToDB->Location = System::Drawing::Point(231, 101);
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
			this->buttonFetchFromDB->Location = System::Drawing::Point(222, 146);
			this->buttonFetchFromDB->Name = L"buttonFetchFromDB";
			this->buttonFetchFromDB->Size = System::Drawing::Size(139, 23);
			this->buttonFetchFromDB->TabIndex = 4;
			this->buttonFetchFromDB->Text = L"Skaityti iš duomenų bazės";
			this->buttonFetchFromDB->UseVisualStyleBackColor = true;
			this->buttonFetchFromDB->Click += gcnew System::EventHandler(this, &db_popup::buttonFetchFromDB_Click);
			// 
			// db_popup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 459);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MinimumSize = System::Drawing::Size(600, 500);
			this->Name = L"db_popup";
			this->Text = L"Duomenų bazė";
			this->Load += gcnew System::EventHandler(this, &db_popup::db_popup_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		MySqlConnection^ conn;

		void WriteToDB(String^ table, String^ text) {
			String^ sql = "INSERT INTO "+table+" (DATA) VALUES ('"+text+"')";
			MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
			cmd->ExecuteNonQuery();
		}

		void ReadFromDB(String^ table) {
			String^ sql = "SELECT (DATA) FROM "+table;
			MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
			MySqlDataReader^ rdr = cmd->ExecuteReader();
			while (rdr->Read())
				this->textBoxData->AppendText(rdr[0]->ToString() + "\n");
			rdr->Close();
		}

		private: System::Void db_popup_Load(System::Object^ sender, System::EventArgs^ e) {
			String^ param = "Server=; database=testavimas; uID=root; pwd=;";
			conn = gcnew MySqlConnection(param);
			try {
				conn->Open();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Nepavyko prisijungti prie duomenų bazės");
				this->Close();
			}
		
		}

		private: System::Void buttonAddToDB_Click(System::Object^ sender, System::EventArgs^ e) {
			WriteToDB("test_lentele", this->textBoxEnterText->Text);
		}

		private: System::Void buttonFetchFromDB_Click(System::Object^ sender, System::EventArgs^ e) {
			ReadFromDB("test_lentele");
		}

};
}
