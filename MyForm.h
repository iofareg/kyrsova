#pragma once
#include "Drone.h"
#include <fstream>
#include <vector>
#include <cmath>
vector<Drone> MainDrones;
namespace kyrsova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsTxtToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ sortdist;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ Altituderange;

	private: System::Windows::Forms::Button^ task4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ task5button;
	private: System::Windows::Forms::Button^ removeDrone;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button6;






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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsTxtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->sortdist = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Altituderange = (gcnew System::Windows::Forms::Button());
			this->task4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->task5button = (gcnew System::Windows::Forms::Button());
			this->removeDrone = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(314, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(740, 210);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(10, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(298, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Show drones";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->button2->Location = System::Drawing::Point(10, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(298, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Get drones";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1066, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->saveAsTxtToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->fileToolStripMenuItem->Text = L"file";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveAsTxtToolStripMenuItem
			// 
			this->saveAsTxtToolStripMenuItem->Name = L"saveAsTxtToolStripMenuItem";
			this->saveAsTxtToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveAsTxtToolStripMenuItem->Text = L"Save as";
			this->saveAsTxtToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsTxtToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 276);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(298, 198);
			this->textBox1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->button3->Location = System::Drawing::Point(994, 487);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 25);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->button4->Location = System::Drawing::Point(10, 487);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 25);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Clear all data";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->button5->Location = System::Drawing::Point(10, 102);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(298, 25);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Sort by speed";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// sortdist
			// 
			this->sortdist->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->sortdist->Location = System::Drawing::Point(10, 138);
			this->sortdist->Name = L"sortdist";
			this->sortdist->Size = System::Drawing::Size(298, 25);
			this->sortdist->TabIndex = 8;
			this->sortdist->Text = L"Sort by distance";
			this->sortdist->UseVisualStyleBackColor = true;
			this->sortdist->Click += gcnew System::EventHandler(this, &MyForm::sortdist_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView2->Location = System::Drawing::Point(314, 276);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(740, 199);
			this->dataGridView2->TabIndex = 9;
			// 
			// Altituderange
			// 
			this->Altituderange->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->Altituderange->Location = System::Drawing::Point(314, 246);
			this->Altituderange->Name = L"Altituderange";
			this->Altituderange->Size = System::Drawing::Size(298, 25);
			this->Altituderange->TabIndex = 10;
			this->Altituderange->Text = L"Show drones with similar altitude as number";
			this->Altituderange->UseVisualStyleBackColor = true;
			this->Altituderange->Click += gcnew System::EventHandler(this, &MyForm::Altituderange_Click);
			// 
			// task4
			// 
			this->task4->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->task4->Location = System::Drawing::Point(10, 174);
			this->task4->Name = L"task4";
			this->task4->Size = System::Drawing::Size(298, 25);
			this->task4->TabIndex = 12;
			this->task4->Text = L"Distance amplitude of lost drones";
			this->task4->UseVisualStyleBackColor = true;
			this->task4->Click += gcnew System::EventHandler(this, &MyForm::task4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(615, 249);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(47, 20);
			this->numericUpDown1->TabIndex = 13;
			// 
			// task5button
			// 
			this->task5button->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->task5button->Location = System::Drawing::Point(10, 210);
			this->task5button->Name = L"task5button";
			this->task5button->Size = System::Drawing::Size(298, 25);
			this->task5button->TabIndex = 14;
			this->task5button->Text = L"Operators with the best result of a single model";
			this->task5button->UseVisualStyleBackColor = true;
			this->task5button->Click += gcnew System::EventHandler(this, &MyForm::task5button_Click);
			// 
			// removeDrone
			// 
			this->removeDrone->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->removeDrone->Location = System::Drawing::Point(700, 246);
			this->removeDrone->Name = L"removeDrone";
			this->removeDrone->Size = System::Drawing::Size(298, 25);
			this->removeDrone->TabIndex = 15;
			this->removeDrone->Text = L"Delete drone with number";
			this->removeDrone->UseVisualStyleBackColor = true;
			this->removeDrone->Click += gcnew System::EventHandler(this, &MyForm::removeDrone_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(1001, 249);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(47, 20);
			this->numericUpDown2->TabIndex = 16;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->button6->Location = System::Drawing::Point(10, 246);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(298, 25);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Drones with the best speed of a single model";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1066, 524);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->removeDrone);
			this->Controls->Add(this->task5button);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->task4);
			this->Controls->Add(this->Altituderange);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->sortdist);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: vector<Drone> AlmostSameAltitude(vector<Drone> drones,Drone current,double procent){
	vector<Drone> similarDrones;
	for (int i = 0; i < drones.size(); i++) {
		if (drones[i].m_dFlight_Altitude >= (current.m_dFlight_Altitude * (1 - procent/100)) &&
			drones[i].m_dFlight_Altitude <= (current.m_dFlight_Altitude * (1 + procent/100))) {
			similarDrones.push_back(drones[i]);
		}
	}
	return similarDrones;
}
private: vector<Drone> SuccessfullyCameBackDrones(vector<Drone> drones) {
	vector<Drone> newdrones;
	for (int i = 0; i < drones.size(); i++) {
		if (drones[i].m_sStatus == "Success" || drones[i].m_sStatus == "success") {
			newdrones.push_back(drones[i]);
		}
	}
	return newdrones;
}
private: vector<Drone> LostDrones(vector<Drone> drones) {
	vector<Drone> newdrones;
	for (int i = 0; i < drones.size(); i++) {
		if (drones[i].m_sStatus == "Lost" || drones[i].m_sStatus == "lost") {
			newdrones.push_back(drones[i]);
		}
	}
	return newdrones;
}
private: double avarageDistance(vector<Drone> drones){
	if (!drones.size())
		return 0;
	double avarage=0;
	for (int i = 0; i < drones.size(); i++) {
		avarage += drones[i].m_dFlight_Distance;
	}
	return avarage/drones.size();
}
private: std::string StringTostring(System::String^ str) {
	return (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
}
private: bool is_number(const string& s)
{
	string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) 
		++it;
	return !s.empty() && it == s.end();
}
private: DataTable^ CreateColumns() {
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("Number");
	table->Columns->Add("Model");
	table->Columns->Add("Operator");
	table->Columns->Add("Distance");
	table->Columns->Add("Speed");
	table->Columns->Add("Altitude");
	table->Columns->Add("Status");
	return table;
}
private: void Sort_By_Speed(vector<Drone>& drones)
{
	int i, j, max;
	// One by one move boundary of unsorted subarray  
	for (i = 0; i < drones.size() - 1; i++)
	{
		// Find the minimum element in unsorted array  
		max = i;
		for (j = i + 1; j < drones.size(); j++)
			if (drones[j].m_dSpeed > drones[max].m_dSpeed)
				max = j;

		// Swap the found minimum element with the first element  
		Drone temp = drones[max];
		drones[max] = drones[i];
		drones[i] = temp;
	}
}
private: void Sort_By_Model(vector<Drone>& drones)
{
	int i, j, max;
	for (i = 0; i < drones.size() - 1; i++)
	{
		max = i;
		for (j = i + 1; j < drones.size(); j++)
			if (drones[j].m_sModel.compare(drones[max].m_sModel) < 0)
				max = j;
		Drone temp = drones[max];
		drones[max] = drones[i];
		drones[i] = temp;
	}
}
private: void Sort_By_Operator(vector<Drone>& drones)
{
	int i, j, max;
	for (i = 0; i < drones.size() - 1; i++)
	{
		max = i;
		for (j = i + 1; j < drones.size(); j++)
			if (drones[j].m_sOperator.compare(drones[max].m_sOperator) < 0)
				max = j;
		Drone temp = drones[max];
		drones[max] = drones[i];
		drones[i] = temp;
	}
}
private: void Sort_By_Distance(vector<Drone>& drones)
{
   int i, j, max;
   for (i = 0; i < drones.size() - 1; i++)
   {
	   max = i;
	   for (j = i + 1; j < drones.size(); j++)
		   if (drones[j].m_dFlight_Distance > drones[max].m_dFlight_Distance)
			   max = j;
	   Drone temp = drones[max];
	   drones[max] = drones[i];
	   drones[i] = temp;
   }
}
private: DataTable^ ShowDrones(vector<Drone> drones) {
	DataTable^ table = gcnew DataTable();
	table = CreateColumns();
	for (int i = 0; i < drones.size(); i++) {
		table->Rows->Add(System::Convert::ToString(drones[i].m_iNumber),
			gcnew System::String(drones[i].m_sModel.c_str()),
			gcnew System::String(drones[i].m_sOperator.c_str()),
			System::Convert::ToString(drones[i].m_dFlight_Distance),
			System::Convert::ToString(drones[i].m_dSpeed),
			System::Convert::ToString(drones[i].m_dFlight_Altitude),
			gcnew System::String(drones[i].m_sStatus.c_str())
		);
	}
	return table;
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	vector<Drone> newdrones;
	ofd->Filter = "Text File|*.txt|CSV File|*.csv";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try {
		fstream fs;
		fs.open(StringTostring(ofd->FileName));
		if (!fs.is_open()) {
			throw(1);
		}
		textBox1->Text = "File is opened";
		while (!fs.eof()) {
			Drone temp;
			fs >> temp;
			newdrones.push_back(temp);
		}
		fs.close();
		MainDrones = newdrones;
		}
		catch (int error) {
			textBox1->Text = "Cannot open file";
			MessageBox::Show(System::Convert::ToString("Data in file is incorrect"));
		}
	}

}
private: System::Void saveAsTxtToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<Drone> newdrones;
	for (int i = 0; i < dataGridView2->RowCount-1; i++) {
		newdrones.push_back(Drone(System::Convert::ToInt32(dataGridView2[0, i]->Value),
			(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView2[1, i]->Value->ToString()))).ToPointer(),
			(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView2[2, i]->Value->ToString()))).ToPointer(),
			System::Convert::ToDouble(dataGridView2[3, i]->Value),
			System::Convert::ToDouble(dataGridView2[4, i]->Value),
			System::Convert::ToDouble(dataGridView2[5, i]->Value),
			(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView1[6, i]->Value->ToString()))).ToPointer()
		));
	}

	SaveFileDialog^ sfd = gcnew SaveFileDialog();

	sfd->Filter = "Text File|*.txt|CSV File|*.csv|Any File|*.*";
	
	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		ofstream fs;
		fs.open(StringTostring(sfd->FileName));
		if (fs.is_open()) {
			textBox1->Text = "Output file is opened\r\n";
			for (int i = 0; i < newdrones.size() - 1; i++) {
				fs << newdrones[i] << endl;
			}
			fs << newdrones[newdrones.size() - 1];
			fs.close();
			textBox1->Text += "Data is saved";
		}
		else {
			textBox1->Text = "Output file is not opened ";
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = ShowDrones(MainDrones);
	dataGridView2->DataSource = ShowDrones(MainDrones);
	textBox1->Text = "Drones count: " + System::Convert::ToString(MainDrones.size())+"\r\n";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<Drone> newdrones;
	for (int i = 0; i < dataGridView1->RowCount-1; i++) {
		try {
			if (!is_number((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView1[0, i]->Value->ToString()))).ToPointer())
				|| !is_number((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView1[3, i]->Value->ToString()))).ToPointer())
				|| !is_number((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView1[4, i]->Value->ToString()))).ToPointer())
				|| !is_number((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView1[5, i]->Value->ToString()))).ToPointer())){
				throw 1;
			}
			newdrones.push_back(Drone(System::Convert::ToInt32(dataGridView1[0, i]->Value),
				(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView1[1, i]->Value->ToString()))).ToPointer(),
				(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView1[2, i]->Value->ToString()))).ToPointer(),
				System::Convert::ToDouble(dataGridView1[3, i]->Value),
				System::Convert::ToDouble(dataGridView1[4, i]->Value),
				System::Convert::ToDouble(dataGridView1[5, i]->Value),
				(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((dataGridView1[6, i]->Value->ToString()))).ToPointer()
			));
		}
		catch (int e) {
			MessageBox::Show(System::Convert::ToString("Enter correct data"));
		}
	}
	MainDrones = newdrones;
	textBox1->Text = "Drones count: " + System::Convert::ToString(MainDrones.size())+"\r\n"+
		"Drones are saved\r\n";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	DataTable^ table = gcnew DataTable();
	table = CreateColumns();
	dataGridView1->DataSource = table;
	dataGridView2->DataSource = table;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Columns->Clear();
	dataGridView2->Columns->Clear();
	DataTable^ table = gcnew DataTable();
	table = CreateColumns();
	dataGridView1->DataSource = table;
	dataGridView2->DataSource = table;
	MainDrones.clear();
	textBox1->Text = "Data is cleared";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (!MainDrones.size()) {
			throw 1;
		}
		Sort_By_Speed(MainDrones);
		dataGridView2->DataSource = ShowDrones(MainDrones);
		textBox1->Text = "Drones are sorted by speed\r\n";
	}
	catch (int e) {
		MessageBox::Show(System::Convert::ToString("There's nothing to sort"));
	}
}
private: System::Void sortdist_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (!MainDrones.size()) {
			throw(-1);
		}
		Sort_By_Distance(MainDrones);
		dataGridView2->DataSource = ShowDrones(MainDrones);
		textBox1->Text = "Drones are sorted by distance";
	}
	catch (int e) {
		MessageBox::Show(System::Convert::ToString("There's nothing to sort"));
	}
}
private: System::Void Altituderange_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double procent = 7.359;
		if (!numericUpDown1->Text)
			throw 1;
		int droneNumber = System::Convert::ToInt32(numericUpDown1->Text);
		if (droneNumber<1)
			throw 2;
		Drone temp=Drone();
		for (int i = 0; i < MainDrones.size(); i++) {
			if (MainDrones[i].m_iNumber == droneNumber) {
				temp = MainDrones[i];
				break;
			}
		}
		if (!temp.m_iNumber)
			throw 3;
		textBox1->Text = "Altitude range: " + "\r\n["+System::Convert::ToString(temp.m_dFlight_Altitude* (1 - procent / 100))+
			"; "+System::Convert::ToString(temp.m_dFlight_Altitude * (1 + procent / 100))+"]";
		dataGridView2->DataSource = ShowDrones(AlmostSameAltitude(MainDrones, temp, procent));
	}
	catch (int e) {
		switch(e){
		case 1:
			MessageBox::Show(System::Convert::ToString("Enter number of drone"));
			break;
		case 2:
			MessageBox::Show(System::Convert::ToString("Not correct range"));
			break;
		case 3:
			MessageBox::Show(System::Convert::ToString("Drone hasn't been found"));
			break;
		default:
			MessageBox::Show(System::Convert::ToString("Unknown error"));
		}
	}
}
private: System::Void dronenum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void task4_Click(System::Object^ sender, System::EventArgs^ e) {
	double avarage = round(avarageDistance(MainDrones));
	vector<Drone> task4drones = LostDrones(MainDrones);
	textBox1->Text = "Operators that lost their drone and the difference between their distance result and avarage\r\n";
	textBox1->Text += "Avarage Distance: " + System::Convert::ToString(avarage) + "\r\n";
	for (int i = 0; i < task4drones.size(); i++) {
		textBox1->Text +=gcnew System::String(task4drones[i].m_sOperator.c_str())+"\t"+
			System::Convert::ToString(task4drones[i].m_dFlight_Distance-avarage)+"\r\n";
	}
	dataGridView2->DataSource = ShowDrones(task4drones);
}
private: System::Void task5button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MainDrones.size()) {
		textBox1->Text = "Operators that have best result (distance/speed) of a single model\r\n";
		textBox1->Text += "Operators:\r\n";
		vector<Drone> task5drones;
		task5drones = MainDrones;
		Sort_By_Model(task5drones);
		vector<Drone> result;
		Drone best = task5drones[0];
		for (int i = 1; i < task5drones.size(); i++)
		{
			if (best.m_sModel.compare(task5drones[i].m_sModel) == 0) {
				if ((task5drones[i].m_dFlight_Distance / 1000) / task5drones[i].m_dSpeed <
					(best.m_dFlight_Distance / 1000) / best.m_dSpeed) {
					best = task5drones[i];
				}
			}
			else {
				textBox1->Text += gcnew System::String(best.m_sOperator.c_str()) + "\r\n";
				result.push_back(best);
				best = task5drones[i];
			}
		}
		textBox1->Text += gcnew System::String(best.m_sOperator.c_str()) + "\r\n";
		result.push_back(best);
		dataGridView2->DataSource = ShowDrones(result);
	}
}
private: System::Void removeDrone_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (!numericUpDown2->Text)
			throw 1;
		int droneNumber = System::Convert::ToInt32(numericUpDown2->Text);
		if (droneNumber<1)
			throw 2;
		bool erase = false;
		for (int i = 0; i < MainDrones.size(); i++) {
			if (MainDrones[i].m_iNumber == droneNumber) {
				MainDrones.erase(MainDrones.begin() + i);
				erase = true;
			}
		}
		if (!erase) {
			throw 3;
		}
		dataGridView1->DataSource = ShowDrones(MainDrones);
		dataGridView2->DataSource = ShowDrones(MainDrones);
		textBox1->Text = "Drones count: " + System::Convert::ToString(MainDrones.size()) +
			"\r\n"+"Drone number " + System::Convert::ToString(droneNumber) + " has been deleted\r\n";
	}
	catch (int e) {
		switch (e) {
		case 1: 
			MessageBox::Show(System::Convert::ToString("Enter number of drone"));
			break;
		case 2:
			MessageBox::Show(System::Convert::ToString("Not correct range"));
			break;
		case 3:
			MessageBox::Show(System::Convert::ToString("This drone doesn't exist"));
			break;
		}
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MainDrones.size()) {
		vector<Drone> task5drones;
		task5drones = SuccessfullyCameBackDrones(MainDrones);
		Sort_By_Model(task5drones);
		vector<Drone> result;
		Drone best = task5drones[0];
		for (int i = 1; i < task5drones.size(); i++)
		{
			if (best.m_sModel.compare(task5drones[i].m_sModel) == 0) {
				if (task5drones[i].m_dSpeed > best.m_dSpeed) {
					best = task5drones[i];
				}
			}
			else {
				result.push_back(best);
				best = task5drones[i];
			}
		}
		result.push_back(best);
		Sort_By_Operator(result);
		dataGridView2->DataSource = ShowDrones(result);
		textBox1->Text = "Drones that successfully came back and have the best speed result of a single model, sorted by operator ";
	}
}
};
}
