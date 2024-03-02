#pragma once
#include "AddFruitForm.h"
#include <fstream>
#include <iostream>
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <vector>
#include <sstream>

namespace FruitsInventary {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FruitsForm
	/// </summary>
	public ref class FruitsForm : public System::Windows::Forms::Form
	{
	public:
		FruitsForm(void)
		{
			InitializeComponent();
			PerformFunction();
			
			//
			//TODO: Add the constructor code here
			//
		}
		void PerformFunction()
		{
			PopulateDataGridViewFromFile();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FruitsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fruit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Amount;
	private: System::Windows::Forms::Button^ Start;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fruit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Start = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(473, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FruitsForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(172, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"FRUITS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &FruitsForm::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(473, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FruitsForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(473, 238);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Edit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FruitsForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleDescription = L"DataGridView";
			this->dataGridView1->AccessibleName = L"DataGridView";
			this->dataGridView1->AccessibleRole = System::Windows::Forms::AccessibleRole::Table;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightCyan;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Code, this->Fruit,
					this->Price, this->Amount
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Location = System::Drawing::Point(13, 49);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(444, 241);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FruitsForm::dataGridView1_CellContentClick);
			// 
			// Code
			// 
			this->Code->HeaderText = L"Code";
			this->Code->Name = L"Code";
			this->Code->ReadOnly = true;
			// 
			// Fruit
			// 
			this->Fruit->HeaderText = L"Fruit";
			this->Fruit->Name = L"Fruit";
			this->Fruit->ReadOnly = true;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			// 
			// Amount
			// 
			this->Amount->HeaderText = L"Amount";
			this->Amount->Name = L"Amount";
			this->Amount->ReadOnly = true;
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Start->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Start->FlatAppearance->BorderSize = 2;
			this->Start->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Start->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Start->ForeColor = System::Drawing::Color::Black;
			this->Start->Location = System::Drawing::Point(473, 12);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(75, 23);
			this->Start->TabIndex = 5;
			this->Start->Text = L"Reload";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &FruitsForm::Start_Click);
			// 
			// FruitsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 307);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"FruitsForm";
			this->Text = L"FruitsForm";
			this->Load += gcnew System::EventHandler(this, &FruitsForm::FruitsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: std::vector<std::string> split(const std::string& s, char delim) {
			std::vector<std::string> result;
			std::stringstream ss(s);
			std::string item;

			while (std::getline(ss, item, delim)) {
				result.push_back(item);
			}

			return result;
		}

private: void PopulateDataGridViewFromFile() {

	std::string line;
	std::vector<std::string> parts;

	std::ifstream file("FruitsF.txt");

	if (!file.is_open()) {
		MessageBox::Show("Unable to open file FruitsF.txt");
		return;
	}
	else {
		//MessageBox::Show("Opened the file");

		dataGridView1->Rows->Clear();

		while (std::getline(file, line)) {
			/*MessageBox::Show("Line");
			String^ fruit = gcnew String(line.c_str());
			MessageBox::Show(fruit);*/

			parts = split(line, ' ');
			String^ col1 = gcnew String(parts[0].c_str());
			String^ col2 = gcnew String(parts[1].c_str());
			String^ col3 = gcnew String(parts[2].c_str());
			String^ col4 = gcnew String(parts[3].c_str());

			// Add the row to the DataGridView
			dataGridView1->Rows->Add(col1, col2, col3, col4);			
		}
		file.close();
	}
}

private: void deleteLineByCode(std::string filePath, std::string codeToDelete) {
		   std::ifstream fin(filePath);
		   std::ofstream temp("temp.txt");
		   std::string line;

		   if (!fin.is_open()) {
			   std::cerr << "Failed to open file." << std::endl;
			   return;
		   }

		   while (std::getline(fin, line)) {
			   // Assuming the code is at the beginning of each line
			   if (line.substr(0, codeToDelete.length()) != codeToDelete) {
				   temp << line << std::endl;
			   }
		   }

		   fin.close();
		   temp.close();

		   // Delete the original file and rename the temporary file
		   std::remove(filePath.c_str());
		   std::rename("temp.txt", filePath.c_str());
	   }


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		DataGridViewRow^ selectedRow1 = dataGridView1->SelectedRows[0];
		// Correctly declare the DialogResult variable
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this fruit?", "Confirm Delete", MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			// Remove the selected row
			String^ code = selectedRow1->Cells[0]->Value->ToString();
			// Convert System::String^ to std::string
			std::string stdCode = msclr::interop::marshal_as<std::string>(code);
			std::string filePath = "FruitsF.txt"; // Ensure this is the correct file path

			// Call deleteLineByCode with the correct argument types
			deleteLineByCode(filePath, stdCode);

			// Update the file
			PopulateDataGridViewFromFile();
		}
	}
	else {
		MessageBox::Show("Please select a fruit to delete.");
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Define the path to the text file
	String^ filePath = "FruitsF.txt";

	// Read the existing file into a list
	List<String^>^ codes = gcnew List<String^>();
	if (File::Exists(filePath))
	{
		StreamReader^ sr = gcnew StreamReader(filePath);
		String^ line;
		while ((line = sr->ReadLine()) != nullptr)
		{
			// Assuming the code is the first element in each line
			String^ existingCode = line->Split(' ')[0];
			codes->Add(existingCode);
		}
		sr->Close();
	}

	// Find a non-repeated code
	int codeValue = 1; // Start with 1 assuming the smallest code is 1
	bool codeExists;
	do
	{
		codeExists = false;
		String^ code = codeValue.ToString();
		for each (String ^ existingCode in codes)
		{
			if (existingCode == code)
			{
				codeExists = true;
				break;
			}
		}
		if (!codeExists)
		{
			// Found a non-repeated code
			break;
		}
		codeValue++; // Increment the code value
	} while (true);

	// Convert the smallest code to a string
	String^ codeToUse = codeValue.ToString();

	// Create a new instance of AddFruitForm
	AddFruitForm^ addFruitForm = gcnew AddFruitForm(this);
	addFruitForm->SetFruitDataAdd(codeToUse);
	// Show the form and wait for it to close
	addFruitForm->ShowDialog();
	// Assuming you've updated the file in AddFruitForm, refresh the DataGridView
	PopulateDataGridViewFromFile();
}



private: System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
		String^ code = selectedRow->Cells[0]->Value->ToString();
		String^ name = selectedRow->Cells[1]->Value->ToString();
		String^ price = selectedRow->Cells[2]->Value->ToString();
		String^ amount = selectedRow->Cells[3]->Value->ToString();

		AddFruitForm^ addFruitForm = gcnew AddFruitForm(this);
		addFruitForm->SetFruitData(code, name, price, amount);
		addFruitForm->ShowDialog();
		PopulateDataGridViewFromFile();
	}
	else {
		MessageBox::Show("Please select a fruit to edit.");
	}
}


private: System::Void FruitsForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
	PopulateDataGridViewFromFile();
}
};
}
