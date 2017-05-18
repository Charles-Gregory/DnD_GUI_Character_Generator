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
	private: System::Windows::Forms::CheckBox^  firstNameCheckBox;
	private: System::Windows::Forms::TextBox^  firstNameTextBox;
	private: System::Windows::Forms::CheckBox^  lastNameCheckBox;
	private: System::Windows::Forms::TextBox^  lastNameTextBox;
	private: System::Windows::Forms::CheckBox^  hairColourCheckBox;
	private: System::Windows::Forms::ComboBox^  hairColourComboBox;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->additionalOptionsLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->raceCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->raceComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->firstNameCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->firstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lastNameCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->lastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->hairColourCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->hairColourComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Heading
			// 
			resources->ApplyResources(this->Heading, L"Heading");
			this->Heading->Name = L"Heading";
			this->Heading->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// additionalOptionsLabel
			// 
			resources->ApplyResources(this->additionalOptionsLabel, L"additionalOptionsLabel");
			this->additionalOptionsLabel->Name = L"additionalOptionsLabel";
			this->additionalOptionsLabel->Click += gcnew System::EventHandler(this, &MyForm::ComboBoxLabel1_Click);
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// raceCheckBox
			// 
			resources->ApplyResources(this->raceCheckBox, L"raceCheckBox");
			this->raceCheckBox->Name = L"raceCheckBox";
			this->raceCheckBox->UseVisualStyleBackColor = true;
			this->raceCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::raceCheckBox_OnCheckedChanged);
			// 
			// raceComboBox
			// 
			this->raceComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->raceComboBox, L"raceComboBox");
			this->raceComboBox->FormattingEnabled = true;
			this->raceComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				resources->GetString(L"raceComboBox.Items"),
					resources->GetString(L"raceComboBox.Items1"), resources->GetString(L"raceComboBox.Items2"), resources->GetString(L"raceComboBox.Items3"),
					resources->GetString(L"raceComboBox.Items4"), resources->GetString(L"raceComboBox.Items5"), resources->GetString(L"raceComboBox.Items6"),
					resources->GetString(L"raceComboBox.Items7"), resources->GetString(L"raceComboBox.Items8"), resources->GetString(L"raceComboBox.Items9"),
					resources->GetString(L"raceComboBox.Items10"), resources->GetString(L"raceComboBox.Items11"), resources->GetString(L"raceComboBox.Items12"),
					resources->GetString(L"raceComboBox.Items13"), resources->GetString(L"raceComboBox.Items14"), resources->GetString(L"raceComboBox.Items15"),
					resources->GetString(L"raceComboBox.Items16"), resources->GetString(L"raceComboBox.Items17")
			});
			this->raceComboBox->Name = L"raceComboBox";
			// 
			// firstNameCheckBox
			// 
			resources->ApplyResources(this->firstNameCheckBox, L"firstNameCheckBox");
			this->firstNameCheckBox->Name = L"firstNameCheckBox";
			this->firstNameCheckBox->UseVisualStyleBackColor = true;
			this->firstNameCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::firstNameCheckBox_CheckedChanged);
			// 
			// firstNameTextBox
			// 
			resources->ApplyResources(this->firstNameTextBox, L"firstNameTextBox");
			this->firstNameTextBox->Name = L"firstNameTextBox";
			// 
			// lastNameCheckBox
			// 
			resources->ApplyResources(this->lastNameCheckBox, L"lastNameCheckBox");
			this->lastNameCheckBox->Name = L"lastNameCheckBox";
			this->lastNameCheckBox->UseVisualStyleBackColor = true;
			this->lastNameCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// lastNameTextBox
			// 
			resources->ApplyResources(this->lastNameTextBox, L"lastNameTextBox");
			this->lastNameTextBox->Name = L"lastNameTextBox";
			// 
			// hairColourCheckBox
			// 
			resources->ApplyResources(this->hairColourCheckBox, L"hairColourCheckBox");
			this->hairColourCheckBox->Name = L"hairColourCheckBox";
			this->hairColourCheckBox->UseVisualStyleBackColor = true;
			this->hairColourCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::hairColourCheckBox_CheckedChanged);
			// 
			// hairColourComboBox
			// 
			this->hairColourComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->hairColourComboBox, L"hairColourComboBox");
			this->hairColourComboBox->FormattingEnabled = true;
			this->hairColourComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				resources->GetString(L"hairColourComboBox.Items"),
					resources->GetString(L"hairColourComboBox.Items1"), resources->GetString(L"hairColourComboBox.Items2"), resources->GetString(L"hairColourComboBox.Items3"),
					resources->GetString(L"hairColourComboBox.Items4"), resources->GetString(L"hairColourComboBox.Items5"), resources->GetString(L"hairColourComboBox.Items6"),
					resources->GetString(L"hairColourComboBox.Items7"), resources->GetString(L"hairColourComboBox.Items8"), resources->GetString(L"hairColourComboBox.Items9"),
					resources->GetString(L"hairColourComboBox.Items10"), resources->GetString(L"hairColourComboBox.Items11"), resources->GetString(L"hairColourComboBox.Items12"),
					resources->GetString(L"hairColourComboBox.Items13"), resources->GetString(L"hairColourComboBox.Items14"), resources->GetString(L"hairColourComboBox.Items15"),
					resources->GetString(L"hairColourComboBox.Items16"), resources->GetString(L"hairColourComboBox.Items17"), resources->GetString(L"hairColourComboBox.Items18"),
					resources->GetString(L"hairColourComboBox.Items19"), resources->GetString(L"hairColourComboBox.Items20")
			});
			this->hairColourComboBox->Name = L"hairColourComboBox";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->hairColourComboBox);
			this->Controls->Add(this->hairColourCheckBox);
			this->Controls->Add(this->lastNameTextBox);
			this->Controls->Add(this->lastNameCheckBox);
			this->Controls->Add(this->firstNameTextBox);
			this->Controls->Add(this->firstNameCheckBox);
			this->Controls->Add(this->raceComboBox);
			this->Controls->Add(this->raceCheckBox);
			this->Controls->Add(this->additionalOptionsLabel);
			this->Controls->Add(this->Heading);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
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
	private: System::Void firstNameCheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->firstNameCheckBox->Checked == true) {
			this->firstNameTextBox->Enabled = true;
		}
		else {
			this->firstNameTextBox->Enabled = false;
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->lastNameCheckBox->Checked == true) {
			this->lastNameTextBox->Enabled = true;
		}
		else {
			this->lastNameTextBox->Enabled = false;
		}
	}
	private: System::Void hairColourCheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->hairColourCheckBox->Checked == true) {
			this->hairColourComboBox->Enabled = true;
		}
		else {
			this->hairColourComboBox->Enabled = false;
		}
	}
};
}