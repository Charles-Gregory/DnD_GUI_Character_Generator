#pragma once

#include <string>

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

	private: System::Windows::Forms::CheckBox^  raceCheckBox;
	private: System::Windows::Forms::ComboBox^  raceComboBox;
	private: System::Windows::Forms::CheckBox^  firstNameCheckBox;
	private: System::Windows::Forms::TextBox^  firstNameTextBox;
	private: System::Windows::Forms::CheckBox^  lastNameCheckBox;
	private: System::Windows::Forms::TextBox^  lastNameTextBox;
	private: System::Windows::Forms::CheckBox^  hairColourCheckBox;
	private: System::Windows::Forms::ComboBox^  hairColourComboBox;
	private: System::Windows::Forms::Label^  characterLabel;
	private: System::Windows::Forms::Label^  firstNameLabel;
	private: System::Windows::Forms::Label^  lastNameLabel;
	private: System::Windows::Forms::Label^  hairColourLabel;
	private: System::Windows::Forms::Label^  raceLabel;
	private: System::Windows::Forms::Label^  heightLabel;
	private: System::Windows::Forms::Label^  ageLabel;
	private: System::Windows::Forms::TextBox^  firstNameTextBoxOutput;
	private: System::Windows::Forms::TextBox^  lastNameTextBoxOutput;
	private: System::Windows::Forms::TextBox^  hairColourTextBoxOutput;
	private: System::Windows::Forms::TextBox^  raceTextBoxOutput;
	private: System::Windows::Forms::TextBox^  heightTextBoxOutput;
	private: System::Windows::Forms::TextBox^  ageTextBoxOutput;
	private: System::Windows::Forms::Button^  randomiseButton;
	private: Character^ newCharacter;

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
			this->raceCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->raceComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->firstNameCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->firstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lastNameCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->lastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->hairColourCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->hairColourComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->characterLabel = (gcnew System::Windows::Forms::Label());
			this->firstNameLabel = (gcnew System::Windows::Forms::Label());
			this->lastNameLabel = (gcnew System::Windows::Forms::Label());
			this->hairColourLabel = (gcnew System::Windows::Forms::Label());
			this->raceLabel = (gcnew System::Windows::Forms::Label());
			this->heightLabel = (gcnew System::Windows::Forms::Label());
			this->ageLabel = (gcnew System::Windows::Forms::Label());
			this->firstNameTextBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->lastNameTextBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->hairColourTextBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->raceTextBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->heightTextBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->ageTextBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->randomiseButton = (gcnew System::Windows::Forms::Button());
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
			// characterLabel
			// 
			resources->ApplyResources(this->characterLabel, L"characterLabel");
			this->characterLabel->Name = L"characterLabel";
			// 
			// firstNameLabel
			// 
			resources->ApplyResources(this->firstNameLabel, L"firstNameLabel");
			this->firstNameLabel->Name = L"firstNameLabel";
			// 
			// lastNameLabel
			// 
			resources->ApplyResources(this->lastNameLabel, L"lastNameLabel");
			this->lastNameLabel->Name = L"lastNameLabel";
			// 
			// hairColourLabel
			// 
			resources->ApplyResources(this->hairColourLabel, L"hairColourLabel");
			this->hairColourLabel->Name = L"hairColourLabel";
			// 
			// raceLabel
			// 
			resources->ApplyResources(this->raceLabel, L"raceLabel");
			this->raceLabel->Name = L"raceLabel";
			// 
			// heightLabel
			// 
			resources->ApplyResources(this->heightLabel, L"heightLabel");
			this->heightLabel->Name = L"heightLabel";
			// 
			// ageLabel
			// 
			resources->ApplyResources(this->ageLabel, L"ageLabel");
			this->ageLabel->Name = L"ageLabel";
			// 
			// firstNameTextBoxOutput
			// 
			resources->ApplyResources(this->firstNameTextBoxOutput, L"firstNameTextBoxOutput");
			this->firstNameTextBoxOutput->Name = L"firstNameTextBoxOutput";
			this->firstNameTextBoxOutput->ReadOnly = true;
			// 
			// lastNameTextBoxOutput
			// 
			resources->ApplyResources(this->lastNameTextBoxOutput, L"lastNameTextBoxOutput");
			this->lastNameTextBoxOutput->Name = L"lastNameTextBoxOutput";
			this->lastNameTextBoxOutput->ReadOnly = true;
			// 
			// hairColourTextBoxOutput
			// 
			resources->ApplyResources(this->hairColourTextBoxOutput, L"hairColourTextBoxOutput");
			this->hairColourTextBoxOutput->Name = L"hairColourTextBoxOutput";
			this->hairColourTextBoxOutput->ReadOnly = true;
			// 
			// raceTextBoxOutput
			// 
			resources->ApplyResources(this->raceTextBoxOutput, L"raceTextBoxOutput");
			this->raceTextBoxOutput->Name = L"raceTextBoxOutput";
			this->raceTextBoxOutput->ReadOnly = true;
			// 
			// heightTextBoxOutput
			// 
			resources->ApplyResources(this->heightTextBoxOutput, L"heightTextBoxOutput");
			this->heightTextBoxOutput->Name = L"heightTextBoxOutput";
			this->heightTextBoxOutput->ReadOnly = true;
			// 
			// ageTextBoxOutput
			// 
			resources->ApplyResources(this->ageTextBoxOutput, L"ageTextBoxOutput");
			this->ageTextBoxOutput->Name = L"ageTextBoxOutput";
			this->ageTextBoxOutput->ReadOnly = true;
			// 
			// randomiseButton
			// 
			resources->ApplyResources(this->randomiseButton, L"randomiseButton");
			this->randomiseButton->Name = L"randomiseButton";
			this->randomiseButton->UseVisualStyleBackColor = true;
			this->randomiseButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->randomiseButton);
			this->Controls->Add(this->ageTextBoxOutput);
			this->Controls->Add(this->heightTextBoxOutput);
			this->Controls->Add(this->raceTextBoxOutput);
			this->Controls->Add(this->hairColourTextBoxOutput);
			this->Controls->Add(this->lastNameTextBoxOutput);
			this->Controls->Add(this->firstNameTextBoxOutput);
			this->Controls->Add(this->ageLabel);
			this->Controls->Add(this->heightLabel);
			this->Controls->Add(this->raceLabel);
			this->Controls->Add(this->hairColourLabel);
			this->Controls->Add(this->lastNameLabel);
			this->Controls->Add(this->firstNameLabel);
			this->Controls->Add(this->characterLabel);
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
			this->raceComboBox->SelectedIndex = 0;
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
			this->hairColourComboBox->SelectedIndex = 0;
		}
		else {
			this->hairColourComboBox->Enabled = false;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Check wihich additional options have been selected
		Boolean isFirstName = false;
		Boolean isLastName = false;
		Boolean isHairColour = false;
		Boolean isRace = false;

		//Manually enter first name
		if (this->firstNameCheckBox->Checked == true) {
			isFirstName = true;
			this->newCharacter->setFirstName(this->firstNameTextBox->Text);
			this->firstNameTextBoxOutput->Text = this->firstNameTextBox->Text;
		}
		//Manually enter last name
		if (this->lastNameCheckBox->Checked == true) {
			isLastName = true;
			this->newCharacter->setLastName(this->lastNameTextBox->Text);
			this->lastNameTextBoxOutput->Text = this->lastNameTextBox->Text;
		}
		//Manually enter hair colour
		if (this->hairColourCheckBox->Checked == true) {
			isHairColour = true;
			this->newCharacter->setHairColour(this->hairColourComboBox->Text);
			this->hairColourTextBoxOutput->Text = this->hairColourComboBox->Text;
		}
		//Manually enter race
		if (this->raceCheckBox->Checked == true) {
			isRace = true;
			this->newCharacter->setRace(this->raceComboBox->Text);
			this->raceTextBoxOutput->Text = this->raceComboBox->Text;
		}

		//Randomise all character traits but only assign those that have not been manually entered
		this->newCharacter->customRandomise(isFirstName, isLastName, isHairColour, isRace);
		//Assign first name
		if (isFirstName == false) {
			this->firstNameTextBoxOutput->Text = this->newCharacter->getFirstName();
		}
		//Assign last name
		if (isLastName == false) {
			this->lastNameTextBoxOutput->Text = this->newCharacter->getLastName();
		}
		//Assign hair colour
		if (isHairColour == false) {
			this->hairColourTextBoxOutput->Text = this->newCharacter->getHairColour();
		}
		//Assign race
		if (isRace == false) {
			this->raceTextBoxOutput->Text = this->newCharacter->getRace();
		}
		//Assign height
		this->heightTextBoxOutput->Text = Convert::ToString((Convert::ToInt16(this->newCharacter->getHeight()) / 12) + "\' " + (Convert::ToInt16(this->newCharacter->getHeight()) % 12) + "\"");
		//this->heightTextBoxOutput->Text = Convert::ToString(this->newCharacter->getHeight());
		//Assign age
		this->ageTextBoxOutput->Text = Convert::ToString(this->newCharacter->getAge());
	}
};
}