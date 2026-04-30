#pragma once
#include "AppData.h"

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for map_popup
	/// </summary>
	public ref class map_popup : public System::Windows::Forms::Form
	{
	public:
		map_popup(AppData^ data)
		{
			InitializeComponent();
			appData = data;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~map_popup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Microsoft::Web::WebView2::WinForms::WebView2^ webView;
	protected:

	protected:

	protected:

	protected:


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
			this->webView = (gcnew Microsoft::Web::WebView2::WinForms::WebView2());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->webView))->BeginInit();
			this->SuspendLayout();
			// 
			// webView
			// 
			this->webView->AllowExternalDrop = false;
			this->webView->CreationProperties = nullptr;
			this->webView->DefaultBackgroundColor = System::Drawing::Color::White;
			this->webView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webView->Location = System::Drawing::Point(0, 0);
			this->webView->Name = L"webView";
			this->webView->Size = System::Drawing::Size(784, 459);
			this->webView->Source = (gcnew System::Uri(L"https://www.openstreetmap.org/#map=18/54.930858/23.903112&layers=N", System::UriKind::Absolute));
			this->webView->TabIndex = 0;
			this->webView->TabStop = false;
			this->webView->ZoomFactor = 0.75;
			// 
			// map_popup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 459);
			this->Controls->Add(this->webView);
			this->MinimumSize = System::Drawing::Size(800, 500);
			this->Name = L"map_popup";
			this->Text = L"Žemėlapis";
			this->Load += gcnew System::EventHandler(this, &map_popup::map_popup_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->webView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		AppData^ appData = nullptr;
		public: void UpdateWeb() {
			this->webView->Source = gcnew Uri(L"https://www.openstreetmap.org/?mlat=" + appData->d[2] + "&mlon=" + appData->d[3] + "&zoom=18", System::UriKind::Absolute);
		}

		private: System::Void map_popup_Load(System::Object^ sender, System::EventArgs^ e) {
			UpdateWeb();
		}
	};
}
