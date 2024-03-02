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

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Summary for AddFruitForm
	/// </summary>
	public ref class AddFruitForm : public System::Windows::Forms::Form
	{
	private:
		Form^ mainForm;

	public:
		AddFruitForm(Form^ FruitsForm)
		{
			InitializeComponent();
			mainForm = FruitsForm;
		}

	void SetFruitData(String^ code, String^ name, String^ price, String^ amount)
		{
			// Assuming you have TextBoxes txtCode, txtFruit, txtPrice, and txtAmount for input
			txtCode->Text = code;
			txtFruit->Text = name;
			txtPrice->Text = price;
			txtAmount->Text = amount;

			txtCode->Enabled = false;
		}
	void SetFruitDataAdd(String^ code)
	{
		// Assuming you have TextBoxes txtCode, txtFruit, txtPrice, and txtAmount for input
		txtCode->Text = code;

		txtCode->Enabled = false;
	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddFruitForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtFruit;

	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtAmount;



	private: System::Windows::Forms::TextBox^ txtCode;

	private: System::Windows::Forms::Label^ label4;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtFruit = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->button2->Location = System::Drawing::Point(287, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddFruitForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(30, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Fruit";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &AddFruitForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(29, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Price";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &AddFruitForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(30, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Amout";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &AddFruitForm::label3_Click);
			// 
			// txtFruit
			// 
			this->txtFruit->AccessibleName = L"";
			this->txtFruit->Location = System::Drawing::Point(103, 63);
			this->txtFruit->Name = L"txtFruit";
			this->txtFruit->Size = System::Drawing::Size(238, 20);
			this->txtFruit->TabIndex = 7;
			this->txtFruit->TextChanged += gcnew System::EventHandler(this, &AddFruitForm::textBox1_TextChanged);
			// 
			// txtPrice
			// 
			this->txtPrice->AccessibleDescription = L"";
			this->txtPrice->AccessibleName = L"";
			this->txtPrice->Location = System::Drawing::Point(103, 104);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(238, 20);
			this->txtPrice->TabIndex = 8;
			this->txtPrice->TextChanged += gcnew System::EventHandler(this, &AddFruitForm::textBox2_TextChanged);
			// 
			// txtAmount
			// 
			this->txtAmount->AccessibleDescription = L"";
			this->txtAmount->AccessibleName = L"";
			this->txtAmount->Location = System::Drawing::Point(103, 145);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(238, 20);
			this->txtAmount->TabIndex = 9;
			this->txtAmount->TextChanged += gcnew System::EventHandler(this, &AddFruitForm::textBox3_TextChanged);
			// 
			// txtCode
			// 
			this->txtCode->AccessibleName = L"";
			this->txtCode->Location = System::Drawing::Point(103, 27);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(238, 20);
			this->txtCode->TabIndex = 11;
			this->txtCode->TextChanged += gcnew System::EventHandler(this, &AddFruitForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(30, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 24);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Code";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Click += gcnew System::EventHandler(this, &AddFruitForm::label4_Click);
			// 
			// AddFruitForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(383, 240);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtAmount);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtFruit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Name = L"AddFruitForm";
			this->Text = L"AddFruitForm";
			this->Load += gcnew System::EventHandler(this, &AddFruitForm::AddFruitForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// Check if the text boxes are filled
		if (String::IsNullOrWhiteSpace(txtFruit->Text) || String::IsNullOrWhiteSpace(txtPrice->Text) || String::IsNullOrWhiteSpace(txtAmount->Text))
		{
			MessageBox::Show("All fields must be filled.");
			return;
		}

		// Try to parse the price and amount as doubles and integers
		double priceValue = 0;
		int amountValue = 0;
		if (!Double::TryParse(txtPrice->Text, priceValue) || !Int32::TryParse(txtAmount->Text, amountValue))
		{
			MessageBox::Show("Price and Amount must be a number.");
			return;
		}

		// Convert the text from the text boxes to strings
		String^ code = txtCode->Text;
		String^ fruit = txtFruit->Text;
		String^ price = txtPrice->Text; // Note: This is already a string, so no conversion needed for price
		String^ amount = txtAmount->Text; // Note: This is already a string, so no conversion needed for amount

		// Save the fruit data
		SaveFruitData(code, fruit, price, amount);
		// If all checks pass, you can proceed with saving the data
		// For example, save the data to a database or update the UI
		//MessageBox::Show("Data saved successfully.");
		mainForm->Show();
		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("An error occurred: " + ex->Message);
	}

}


private: System::Void SaveFruitData(String^ code, String^ fruit, String^ price, String^ amount) {
	try
	{
		// Define the path to the text file
		String^ filePath = "FruitsF.txt";

		// Read the existing file into a list
		List<String^>^ lines = gcnew List<String^>();
		if (File::Exists(filePath))
		{
			StreamReader^ sr = gcnew StreamReader(filePath);
			String^ line;
			while ((line = sr->ReadLine()) != nullptr)
			{
				lines->Add(line);
			}
			sr->Close();
		}

		// Check if the code already exists
		bool codeExists = false;
		for (int i = 0; i < lines->Count; i++)
		{
			if (lines[i]->StartsWith(code))
			{
				// Code exists, update the line
				lines[i] = String::Format("{0} {1} {2} {3}", code, fruit, price, amount);
				codeExists = true;
				break;
			}
		}

		if (!codeExists)
		{
			// Code does not exist, append a new line
			lines->Add(String::Format("{0} {1} {2} {3}", code, fruit, price, amount));
		}

		// Write the updated lines back to the file
		StreamWriter^ sw = gcnew StreamWriter(filePath, false); // 'false' to overwrite the file
		for each (String ^ line in lines)
		{
			sw->WriteLine(line);
		}
		sw->Close();

		// Show a message to confirm the data has been saved
		MessageBox::Show("Data saved successfully.");
	}
	catch (Exception^ ex)
	{
		// Handle any exceptions that might occur during file operations
		MessageBox::Show("An error occurred while saving the data: " + ex->Message);
	}
}



private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddFruitForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
