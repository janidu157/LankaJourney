#pragma once

namespace LankaJourneyUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ PanelSlidebar;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ btnAccommodatiion;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnPlanning;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnDashboard;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PanelSlidebar = (gcnew System::Windows::Forms::Panel());
			this->btnPlanning = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnAccommodatiion = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnDashboard = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->PanelSlidebar->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1262, 673);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(2)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(562, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(396, 77);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Plan My Journey";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// PanelSlidebar
			// 
			this->PanelSlidebar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelSlidebar.BackgroundImage")));
			this->PanelSlidebar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PanelSlidebar->Controls->Add(this->button2);
			this->PanelSlidebar->Controls->Add(this->button9);
			this->PanelSlidebar->Controls->Add(this->button8);
			this->PanelSlidebar->Controls->Add(this->button7);
			this->PanelSlidebar->Controls->Add(this->button6);
			this->PanelSlidebar->Controls->Add(this->btnAccommodatiion);
			this->PanelSlidebar->Controls->Add(this->button4);
			this->PanelSlidebar->Controls->Add(this->btnPlanning);
			this->PanelSlidebar->Controls->Add(this->btnDashboard);
			this->PanelSlidebar->Location = System::Drawing::Point(21, 86);
			this->PanelSlidebar->Name = L"PanelSlidebar";
			this->PanelSlidebar->Padding = System::Windows::Forms::Padding(0, 0, 0, 50);
			this->PanelSlidebar->Size = System::Drawing::Size(225, 575);
			this->PanelSlidebar->TabIndex = 4;
			// 
			// btnPlanning
			// 
			this->btnPlanning->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlanning.BackgroundImage")));
			this->btnPlanning->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlanning->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPlanning->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlanning->Location = System::Drawing::Point(0, 50);
			this->btnPlanning->Name = L"btnPlanning";
			this->btnPlanning->Size = System::Drawing::Size(225, 50);
			this->btnPlanning->TabIndex = 6;
			this->btnPlanning->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(0, 100);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(225, 59);
			this->button4->TabIndex = 7;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnAccommodatiion
			// 
			this->btnAccommodatiion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAccommodatiion.BackgroundImage")));
			this->btnAccommodatiion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAccommodatiion->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAccommodatiion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAccommodatiion->Location = System::Drawing::Point(0, 159);
			this->btnAccommodatiion->Name = L"btnAccommodatiion";
			this->btnAccommodatiion->Size = System::Drawing::Size(225, 59);
			this->btnAccommodatiion->TabIndex = 8;
			this->btnAccommodatiion->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->Location = System::Drawing::Point(0, 218);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(225, 59);
			this->button6->TabIndex = 9;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->Location = System::Drawing::Point(0, 277);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(225, 59);
			this->button7->TabIndex = 10;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Top;
			this->button8->Location = System::Drawing::Point(0, 336);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(225, 59);
			this->button8->TabIndex = 11;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button9->Location = System::Drawing::Point(0, 466);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(225, 59);
			this->button9->TabIndex = 12;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(0, 395);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(225, 50);
			this->button2->TabIndex = 13;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btnDashboard
			// 
			this->btnDashboard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDashboard.BackgroundImage")));
			this->btnDashboard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDashboard->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDashboard->Location = System::Drawing::Point(0, 0);
			this->btnDashboard->Name = L"btnDashboard";
			this->btnDashboard->Padding = System::Windows::Forms::Padding(15, 5, 5, 5);
			this->btnDashboard->Size = System::Drawing::Size(225, 50);
			this->btnDashboard->TabIndex = 5;
			this->btnDashboard->UseVisualStyleBackColor = true;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->PanelSlidebar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LankaJourney";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->PanelSlidebar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
