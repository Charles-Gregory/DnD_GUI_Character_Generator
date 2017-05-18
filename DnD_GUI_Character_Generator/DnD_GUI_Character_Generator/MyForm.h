#pragma once

namespace DnD_GUI_Character_Generator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Heading;
	private: System::Windows::Forms::Label^  additionalOptionsLabel;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::CheckBox^  raceCheckBox;
	private: System::Windows::Forms::ComboBox^  raceComboBox;



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
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->additionalOptionsLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->raceCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->raceComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Heading->Location = System::Drawing::Point(33, 9);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(490, 29);
			this->Heading->TabIndex = 0;
			this->Heading->Text = L"Dungeons and Dragons Character Generator";
			this->Heading->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// additionalOptionsLabel
			// 
			this->additionalOptionsLabel->AutoSize = true;
			this->additionalOptionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->additionalOptionsLabel->Location = System::Drawing::Point(35, 65);
			this->additionalOptionsLabel->Name = L"additionalOptionsLabel";
			this->additionalOptionsLabel->Size = System::Drawing::Size(124, 17);
			this->additionalOptionsLabel->TabIndex = 2;
			this->additionalOptionsLabel->Text = L"Additional options:";
			this->additionalOptionsLabel->Click += gcnew System::EventHandler(this, &MyForm::ComboBoxLabel1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(558, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// raceCheckBox
			// 
			this->raceCheckBox->AutoSize = true;
			this->raceCheckBox->Location = System::Drawing::Point(38, 90);
			this->raceCheckBox->Name = L"raceCheckBox";
			this->raceCheckBox->Size = System::Drawing::Size(123, 17);
			this->raceCheckBox->TabIndex = 4;
			this->raceCheckBox->Text = L"Manually select race";
			this->raceCheckBox->UseVisualStyleBackColor = true;
			this->raceCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::raceCheckBox_OnCheckedChanged);
			// 
			// raceComboBox
			// 
			this->raceComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->raceComboBox->Enabled = false;
			this->raceComboBox->FormattingEnabled = true;
			this->raceComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"Deva", L"Human", L"Dragonborn", L"Drow", L"Dwarf",
					L"Eladrin", L"Elf", L"Gnome", L"Half-elf", L"Half-orc", L"Halfling", L"Tiefling", L"Githzerai", L"Goliath", L"Minotaur", L"Shardmind",
					L"Shifter", L"Wilden"
			});
			this->raceComboBox->Location = System::Drawing::Point(230, 88);
			this->raceComboBox->Name = L"raceComboBox";
			this->raceComboBox->Size = System::Drawing::Size(125, 21);
			this->raceComboBox->TabIndex = 5;
			this->raceComboBox->SelectedIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 456);
			this->Controls->Add(this->raceComboBox);
			this->Controls->Add(this->raceCheckBox);
			this->Controls->Add(this->additionalOptionsLabel);
			this->Controls->Add(this->Heading);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Dungeons and Dragons Character Generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ComboBoxLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void raceCheckBox_OnCheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->raceCheckBox->Checked == true) {
			this->raceComboBox->Enabled = true;
		}
		else {
			this->raceComboBox->Enabled = false;
		}
	}
};
}