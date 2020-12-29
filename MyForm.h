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
	private: System::Windows::Forms::DataGridView^ InputDataTable;
	private: System::Windows::Forms::Button^ ShowDronesButton;
	private: System::Windows::Forms::Button^ GetDronesButton;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ FileMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ OpenMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveAsMenuItem;
	private: System::Windows::Forms::TextBox^ LogBox;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ ClearDataButton;
	private: System::Windows::Forms::Button^ SortBySpeedButton;
	private: System::Windows::Forms::Button^ SortByDistanceButton;
	private: System::Windows::Forms::DataGridView^ OutputDataTable;
	private: System::Windows::Forms::Button^ SimilarAltitude;
	private: System::Windows::Forms::Button^ Task4Button;
	private: System::Windows::Forms::NumericUpDown^ Task3Number;
	private: System::Windows::Forms::Button^ Task5Button;
	private: System::Windows::Forms::Button^ RemoveDroneButton;
	private: System::Windows::Forms::NumericUpDown^ RemoveDroneNumber;
	private: System::Windows::Forms::Button^ Task2Button;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutMenuItem;

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
			this->InputDataTable = (gcnew System::Windows::Forms::DataGridView());
			this->ShowDronesButton = (gcnew System::Windows::Forms::Button());
			this->GetDronesButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FileMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAsMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LogBox = (gcnew System::Windows::Forms::TextBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->ClearDataButton = (gcnew System::Windows::Forms::Button());
			this->SortBySpeedButton = (gcnew System::Windows::Forms::Button());
			this->SortByDistanceButton = (gcnew System::Windows::Forms::Button());
			this->OutputDataTable = (gcnew System::Windows::Forms::DataGridView());
			this->SimilarAltitude = (gcnew System::Windows::Forms::Button());
			this->Task4Button = (gcnew System::Windows::Forms::Button());
			this->Task3Number = (gcnew System::Windows::Forms::NumericUpDown());
			this->Task5Button = (gcnew System::Windows::Forms::Button());
			this->RemoveDroneButton = (gcnew System::Windows::Forms::Button());
			this->RemoveDroneNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->Task2Button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDataTable))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OutputDataTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Task3Number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RemoveDroneNumber))->BeginInit();
			this->SuspendLayout();
			// 
			// InputDataTable
			// 
			this->InputDataTable->AllowUserToDeleteRows = false;
			this->InputDataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->InputDataTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->InputDataTable->Location = System::Drawing::Point(314, 30);
			this->InputDataTable->Name = L"InputDataTable";
			this->InputDataTable->Size = System::Drawing::Size(740, 210);
			this->InputDataTable->TabIndex = 0;
			// 
			// ShowDronesButton
			// 
			this->ShowDronesButton->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ShowDronesButton->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ShowDronesButton->Location = System::Drawing::Point(10, 30);
			this->ShowDronesButton->Name = L"ShowDronesButton";
			this->ShowDronesButton->Size = System::Drawing::Size(298, 25);
			this->ShowDronesButton->TabIndex = 1;
			this->ShowDronesButton->Text = L"Show drones";
			this->ShowDronesButton->UseVisualStyleBackColor = false;
			this->ShowDronesButton->Click += gcnew System::EventHandler(this, &MyForm::ShowDronesButton_Click);
			// 
			// GetDronesButton
			// 
			this->GetDronesButton->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->GetDronesButton->Location = System::Drawing::Point(10, 66);
			this->GetDronesButton->Name = L"GetDronesButton";
			this->GetDronesButton->Size = System::Drawing::Size(298, 25);
			this->GetDronesButton->TabIndex = 2;
			this->GetDronesButton->Text = L"Get drones";
			this->GetDronesButton->UseVisualStyleBackColor = true;
			this->GetDronesButton->Click += gcnew System::EventHandler(this, &MyForm::GetDronesButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->FileMenuItem, this->AboutMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1066, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FileMenuItem
			// 
			this->FileMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->OpenMenuItem,
					this->SaveAsMenuItem
			});
			this->FileMenuItem->Name = L"FileMenuItem";
			this->FileMenuItem->Size = System::Drawing::Size(37, 20);
			this->FileMenuItem->Text = L"File";
			// 
			// OpenMenuItem
			// 
			this->OpenMenuItem->Name = L"OpenMenuItem";
			this->OpenMenuItem->Size = System::Drawing::Size(180, 22);
			this->OpenMenuItem->Text = L"Open";
			this->OpenMenuItem->Click += gcnew System::EventHandler(this, &MyForm::OpenMenuItem_Click);
			// 
			// SaveAsMenuItem
			// 
			this->SaveAsMenuItem->Name = L"SaveAsMenuItem";
			this->SaveAsMenuItem->Size = System::Drawing::Size(180, 22);
			this->SaveAsMenuItem->Text = L"Save as";
			this->SaveAsMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SaveAsMenuItem_Click);
			// 
			// AboutMenuItem
			// 
			this->AboutMenuItem->Name = L"AboutMenuItem";
			this->AboutMenuItem->Size = System::Drawing::Size(52, 20);
			this->AboutMenuItem->Text = L"About";
			this->AboutMenuItem->Click += gcnew System::EventHandler(this, &MyForm::AboutMenuItem_Click);
			// 
			// LogBox
			// 
			this->LogBox->Location = System::Drawing::Point(10, 276);
			this->LogBox->Multiline = true;
			this->LogBox->Name = L"LogBox";
			this->LogBox->Size = System::Drawing::Size(298, 198);
			this->LogBox->TabIndex = 4;
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->ExitButton->Location = System::Drawing::Point(994, 487);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(60, 25);
			this->ExitButton->TabIndex = 5;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// ClearDataButton
			// 
			this->ClearDataButton->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->ClearDataButton->Location = System::Drawing::Point(10, 487);
			this->ClearDataButton->Name = L"ClearDataButton";
			this->ClearDataButton->Size = System::Drawing::Size(102, 25);
			this->ClearDataButton->TabIndex = 6;
			this->ClearDataButton->Text = L"Clear all data";
			this->ClearDataButton->UseVisualStyleBackColor = true;
			this->ClearDataButton->Click += gcnew System::EventHandler(this, &MyForm::ClearDataButton_Click);
			// 
			// SortBySpeedButton
			// 
			this->SortBySpeedButton->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->SortBySpeedButton->Location = System::Drawing::Point(10, 102);
			this->SortBySpeedButton->Name = L"SortBySpeedButton";
			this->SortBySpeedButton->Size = System::Drawing::Size(298, 25);
			this->SortBySpeedButton->TabIndex = 7;
			this->SortBySpeedButton->Text = L"Sort by speed";
			this->SortBySpeedButton->UseVisualStyleBackColor = true;
			this->SortBySpeedButton->Click += gcnew System::EventHandler(this, &MyForm::SortBySpeedButton_Click);
			// 
			// SortByDistanceButton
			// 
			this->SortByDistanceButton->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->SortByDistanceButton->Location = System::Drawing::Point(10, 138);
			this->SortByDistanceButton->Name = L"SortByDistanceButton";
			this->SortByDistanceButton->Size = System::Drawing::Size(298, 25);
			this->SortByDistanceButton->TabIndex = 8;
			this->SortByDistanceButton->Text = L"Sort by distance";
			this->SortByDistanceButton->UseVisualStyleBackColor = true;
			this->SortByDistanceButton->Click += gcnew System::EventHandler(this, &MyForm::SortByDistanceButton_Click);
			// 
			// OutputDataTable
			// 
			this->OutputDataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->OutputDataTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->OutputDataTable->Location = System::Drawing::Point(314, 276);
			this->OutputDataTable->Name = L"OutputDataTable";
			this->OutputDataTable->Size = System::Drawing::Size(740, 199);
			this->OutputDataTable->TabIndex = 9;
			// 
			// SimilarAltitude
			// 
			this->SimilarAltitude->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->SimilarAltitude->Location = System::Drawing::Point(314, 246);
			this->SimilarAltitude->Name = L"SimilarAltitude";
			this->SimilarAltitude->Size = System::Drawing::Size(298, 25);
			this->SimilarAltitude->TabIndex = 10;
			this->SimilarAltitude->Text = L"Show drones with similar altitude as number";
			this->SimilarAltitude->UseVisualStyleBackColor = true;
			this->SimilarAltitude->Click += gcnew System::EventHandler(this, &MyForm::SimilarAltitude_Click);
			// 
			// Task4Button
			// 
			this->Task4Button->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->Task4Button->Location = System::Drawing::Point(10, 174);
			this->Task4Button->Name = L"Task4Button";
			this->Task4Button->Size = System::Drawing::Size(298, 25);
			this->Task4Button->TabIndex = 12;
			this->Task4Button->Text = L"Distance amplitude of lost drones";
			this->Task4Button->UseVisualStyleBackColor = true;
			this->Task4Button->Click += gcnew System::EventHandler(this, &MyForm::Task4Button_Click);
			// 
			// Task3Number
			// 
			this->Task3Number->Location = System::Drawing::Point(615, 249);
			this->Task3Number->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->Task3Number->Name = L"Task3Number";
			this->Task3Number->Size = System::Drawing::Size(47, 20);
			this->Task3Number->TabIndex = 13;
			// 
			// Task5Button
			// 
			this->Task5Button->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->Task5Button->Location = System::Drawing::Point(10, 210);
			this->Task5Button->Name = L"Task5Button";
			this->Task5Button->Size = System::Drawing::Size(298, 25);
			this->Task5Button->TabIndex = 14;
			this->Task5Button->Text = L"Operators with the best result of a single model";
			this->Task5Button->UseVisualStyleBackColor = true;
			this->Task5Button->Click += gcnew System::EventHandler(this, &MyForm::Task5Button_Click);
			// 
			// RemoveDroneButton
			// 
			this->RemoveDroneButton->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->RemoveDroneButton->Location = System::Drawing::Point(700, 246);
			this->RemoveDroneButton->Name = L"RemoveDroneButton";
			this->RemoveDroneButton->Size = System::Drawing::Size(298, 25);
			this->RemoveDroneButton->TabIndex = 15;
			this->RemoveDroneButton->Text = L"Delete drone with number";
			this->RemoveDroneButton->UseVisualStyleBackColor = true;
			this->RemoveDroneButton->Click += gcnew System::EventHandler(this, &MyForm::RemoveDroneButton_Click);
			// 
			// RemoveDroneNumber
			// 
			this->RemoveDroneNumber->Location = System::Drawing::Point(1001, 249);
			this->RemoveDroneNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->RemoveDroneNumber->Name = L"RemoveDroneNumber";
			this->RemoveDroneNumber->Size = System::Drawing::Size(47, 20);
			this->RemoveDroneNumber->TabIndex = 16;
			// 
			// Task2Button
			// 
			this->Task2Button->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F));
			this->Task2Button->Location = System::Drawing::Point(10, 246);
			this->Task2Button->Name = L"Task2Button";
			this->Task2Button->Size = System::Drawing::Size(298, 25);
			this->Task2Button->TabIndex = 17;
			this->Task2Button->Text = L"Drones with the best speed of a single model";
			this->Task2Button->UseVisualStyleBackColor = true;
			this->Task2Button->Click += gcnew System::EventHandler(this, &MyForm::Task2Button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1066, 524);
			this->Controls->Add(this->Task2Button);
			this->Controls->Add(this->RemoveDroneNumber);
			this->Controls->Add(this->RemoveDroneButton);
			this->Controls->Add(this->Task5Button);
			this->Controls->Add(this->Task3Number);
			this->Controls->Add(this->Task4Button);
			this->Controls->Add(this->SimilarAltitude);
			this->Controls->Add(this->OutputDataTable);
			this->Controls->Add(this->SortByDistanceButton);
			this->Controls->Add(this->SortBySpeedButton);
			this->Controls->Add(this->ClearDataButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->LogBox);
			this->Controls->Add(this->GetDronesButton);
			this->Controls->Add(this->ShowDronesButton);
			this->Controls->Add(this->InputDataTable);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDataTable))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OutputDataTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Task3Number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RemoveDroneNumber))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// Функція, що повертає список дронів з схожою висотою польоту
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
// Функція що поветрає список дронів які успішно повернулися
private: vector<Drone> SuccessfullyCameBackDrones(vector<Drone> drones) {
	vector<Drone> SuccessfullDrones;
	for (int i = 0; i < drones.size(); i++) {
		if (drones[i].m_sStatus == "Success" || drones[i].m_sStatus == "success") {
			SuccessfullDrones.push_back(drones[i]);
		}
	}
	return SuccessfullDrones;
}
// Функція що поветрає список дронів які були втрачені
private: vector<Drone> LostDrones(vector<Drone> drones) {
	vector<Drone> LostDrones;
	for (int i = 0; i < drones.size(); i++) {
		if (drones[i].m_sStatus == "Lost" || drones[i].m_sStatus == "lost") {
			LostDrones.push_back(drones[i]);
		}
	}
	return LostDrones;
}
// Функція що поветрає середнє значення дистанції із списку дронів
private: double AvarageDistance(vector<Drone> drones){
	double dAvarageDistance = 0;
	if (!drones.size())
		return dAvarageDistance;
	for (int i = 0; i < drones.size(); i++) {
		dAvarageDistance += drones[i].m_dFlight_Distance;
	}
	return dAvarageDistance /drones.size();
}
// Функція конвертування стрічки з .Net в стрічку з std
private: std::string StringTostring(System::String^ str) {
	return (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
}
// Функція перевірки чи стрічка є числом
private: bool is_number(const string& s)
{
	string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) 
		++it;
	return !s.empty() && it == s.end();
}
// Функція створення таблиці
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
// Функція сортування списку дронів за швидкістю
private: void Sort_By_Speed(vector<Drone>& drones)
{
	int i, j, max;
	for (i = 0; i < drones.size() - 1; i++)
	{
		max = i;
		for (j = i + 1; j < drones.size(); j++)
			if (drones[j].m_dSpeed > drones[max].m_dSpeed)
				max = j;
		swap(drones[i], drones[max]);
	}
}
// Функція сортування списку дронів за моделлю
private: void Sort_By_Model(vector<Drone>& drones)
{
	int i, j, max;
	for (i = 0; i < drones.size() - 1; i++)
	{
		max = i;
		for (j = i + 1; j < drones.size(); j++)
			if (drones[j].m_sModel.compare(drones[max].m_sModel) < 0)
				max = j;
		swap(drones[i], drones[max]);
	}
}
// Функція сортування списку дронів за оператором
private: void Sort_By_Operator(vector<Drone>& drones)
{
	int i, j, max;
	for (i = 0; i < drones.size() - 1; i++)
	{
		max = i;
		for (j = i + 1; j < drones.size(); j++)
			if (drones[j].m_sOperator.compare(drones[max].m_sOperator) < 0)
				max = j;
		swap(drones[i], drones[max]);
	}
}
// Функція сортування списку дронів за дистанцією
private: void Sort_By_Distance(vector<Drone>& drones)
{
	if (drones.size() == 1)
		return;
    int i, j, max;
    for (i = 0; i < drones.size() - 1; i++)
    {
	    max = i;
	    for (j = i + 1; j < drones.size(); j++)
		    if (drones[j].m_dFlight_Distance > drones[max].m_dFlight_Distance)
			    max = j;
	    swap(drones[i], drones[max]);
    }
}
// Функція зчитування списку дронів з таблиці виводу
private: int GetDrones(vector<Drone>& drones) {
	vector<Drone> TempDrones;
	for (int i = 0; i < OutputDataTable->RowCount - 1; i++) {
		try {
			if (!is_number((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((OutputDataTable[0, i]->Value->ToString()))).ToPointer())
				|| !is_number((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((OutputDataTable[3, i]->Value->ToString()))).ToPointer())
				|| !is_number((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((OutputDataTable[4, i]->Value->ToString()))).ToPointer())
				|| !is_number((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((OutputDataTable[5, i]->Value->ToString()))).ToPointer()))
				throw i + 1;
			TempDrones.push_back(Drone(System::Convert::ToInt32(OutputDataTable[0, i]->Value),
				(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((OutputDataTable[1, i]->Value->ToString()))).ToPointer(),
				(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((OutputDataTable[2, i]->Value->ToString()))).ToPointer(),
				System::Convert::ToDouble(OutputDataTable[3, i]->Value),
				System::Convert::ToDouble(OutputDataTable[4, i]->Value),
				System::Convert::ToDouble(OutputDataTable[5, i]->Value),
				(const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi((OutputDataTable[6, i]->Value->ToString()))).ToPointer()
			));
		}
		catch (int e) {
			MessageBox::Show(System::Convert::ToString("Enter correct data in a row " + System::Convert::ToString(e)),
				System::Convert::ToString("Warning"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Warning);
			return 0;
		}
	}
	drones = TempDrones;
	return 1;
}
// Функція що повертає створену таблицю зі списком дронів
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
// Функція зчитування списку дронів з файлу
private: System::Void OpenMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Text File|*.txt|CSV File|*.csv";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try {
		fstream fs;
		fs.open(StringTostring(ofd->FileName));
		if (!fs.is_open())
			throw 1;
		LogBox->Text = "File is opened";
		MainDrones.clear();
		while (!fs.eof()) {
			Drone temp;
			fs >> temp;
			MainDrones.push_back(temp);
		}
		fs.close();
		}
		catch (int error) {
			LogBox->Text = "Cannot open file";
			MessageBox::Show(System::Convert::ToString("Cannot open file"),
				System::Convert::ToString("Error"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
		}
	}
}
// Функція запису списку дронів у файл
private: System::Void SaveAsMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	sfd->Filter = "Text File|*.txt|CSV File|*.csv|Any File|*.*";
	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		ofstream fs;
		fs.open(StringTostring(sfd->FileName));
		if (fs.is_open()) {
			LogBox->Text = "Output file is opened\r\n";
			for (int i = 0; i < MainDrones.size() - 1; i++) {
				fs << MainDrones[i] << endl;
			}
			fs << MainDrones[MainDrones.size() - 1];
			fs.close();
			LogBox->Text += "Data is saved";
		}
		else {
			LogBox->Text = "Output file is not opened ";
		}
	}
}
// Функція виводу списку дронів на вхідну та вихідну таблиці
private: System::Void ShowDronesButton_Click(System::Object^ sender, System::EventArgs^ e) {
	InputDataTable->DataSource = ShowDrones(MainDrones);
	OutputDataTable->DataSource = ShowDrones(MainDrones);
	LogBox->Text = "Drones count: " + System::Convert::ToString(MainDrones.size())+"\r\n";
}
// Функція зчитування списку дронів з таблиці та виводу відповідних повідомлень
private: System::Void GetDronesButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (!GetDrones(MainDrones))
			throw 1;
		LogBox->Text = "Drones count: " + System::Convert::ToString(MainDrones.size()) + "\r\n" +
			"Drones are saved\r\n";
	}
	catch (int e) {
		MessageBox::Show(System::Convert::ToString("Data is not correct"),
			System::Convert::ToString("Error"),
			System::Windows::Forms::MessageBoxButtons::OK,
			System::Windows::Forms::MessageBoxIcon::Error);
	}
}
// Функція заповнення таблиць при запуску програми
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	DataTable^ table = gcnew DataTable();
	table = CreateColumns();
	InputDataTable->DataSource = table;
	OutputDataTable->DataSource = table;
}
// Функція виходу з програми
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
// Функція очищення даних з таблиць та списку
private: System::Void ClearDataButton_Click(System::Object^ sender, System::EventArgs^ e) {
	InputDataTable->Columns->Clear();
	OutputDataTable->Columns->Clear();
	DataTable^ table = gcnew DataTable();
	table = CreateColumns();
	InputDataTable->DataSource = table;
	OutputDataTable->DataSource = table;
	MainDrones.clear();
	LogBox->Text = "Data is cleared";
}
// Функція сортування списку дронів за швидкістю та виводу відповідних повідомлень
private: System::Void SortBySpeedButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (!MainDrones.size()) {
			throw 1;
		}
		Sort_By_Speed(MainDrones);
		OutputDataTable->DataSource = ShowDrones(MainDrones);
		LogBox->Text = "Drones are sorted by speed\r\n";
	}
	catch (int e) {
		MessageBox::Show(System::Convert::ToString("There's nothing to sort"),
			System::Convert::ToString("Warning"),
			System::Windows::Forms::MessageBoxButtons::OK,
			System::Windows::Forms::MessageBoxIcon::Warning);
	}
}
// Функція сортування списку дронів за дистанцією та виводу відповідних повідомлень
private: System::Void SortByDistanceButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (!MainDrones.size()) {
			throw 1;
		}
		Sort_By_Distance(MainDrones);
		OutputDataTable->DataSource = ShowDrones(MainDrones);
		LogBox->Text = "Drones are sorted by distance";
	}
	catch (int e) {
		MessageBox::Show(System::Convert::ToString("There's nothing to sort"),
			System::Convert::ToString("Warning"),
			System::Windows::Forms::MessageBoxButtons::OK,
			System::Windows::Forms::MessageBoxIcon::Warning);
	}
}
// Функція що виводить на таблицю виводу список дронів з приблизно однаковою висотою польоту
// з відхиленням 7.359%
private: System::Void SimilarAltitude_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double dProcent = 7.359;
		if (!Task3Number->Text)
			throw 1;
		int iDroneNumber = System::Convert::ToInt32(Task3Number->Text);
		if (iDroneNumber < 1)
			throw 2;
		Drone TempDrone = Drone();
		for (int i = 0; i < MainDrones.size(); i++) {
			if (MainDrones[i].m_iNumber == iDroneNumber) {
				TempDrone = MainDrones[i];
				break;
			}
		}
		if (!TempDrone.m_iNumber)
			throw 3;
		LogBox->Text = "Altitude range: " + "\r\n["+System::Convert::ToString(TempDrone.m_dFlight_Altitude* (1 - dProcent / 100))+
			"; "+System::Convert::ToString(TempDrone.m_dFlight_Altitude * (1 + dProcent / 100))+"]";
		OutputDataTable->DataSource = ShowDrones(AlmostSameAltitude(MainDrones, TempDrone, dProcent));
	}
	catch (int e) {
		switch(e){
		case 1:
			MessageBox::Show(System::Convert::ToString("Enter number of drone"),
				System::Convert::ToString("Error"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
			break;
		case 2:
			MessageBox::Show(System::Convert::ToString("Not correct range"),
				System::Convert::ToString("Error"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
			break;
		case 3:
			MessageBox::Show(System::Convert::ToString("Drone hasn't been found"),
				System::Convert::ToString("Error"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
			break;
		default:
			MessageBox::Show(System::Convert::ToString("Unknown error"),
				System::Convert::ToString("Error"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
		}
	}
}
// Функція що визначиє середній результат дистанція та виводить операторів, у яких результат статус - втрачено,
// визначає та виводить відхилення їх результату статус від середнього значення
private: System::Void Task4Button_Click(System::Object^ sender, System::EventArgs^ e) {
	double dAvarage = round(AvarageDistance(MainDrones));
	vector<Drone> Task4Drones = LostDrones(MainDrones);
	LogBox->Text = "Operators that lost their drone and the difference between their distance result and avarage\r\n";
	LogBox->Text += "Avarage Distance: " + System::Convert::ToString(dAvarage) + "\r\n";
	for (int i = 0; i < Task4Drones.size(); i++) {
		LogBox->Text +=gcnew System::String(Task4Drones[i].m_sOperator.c_str())+"\t"+
			System::Convert::ToString(Task4Drones[i].m_dFlight_Distance-dAvarage)+"\r\n";
	}
	OutputDataTable->DataSource = ShowDrones(Task4Drones);
}
// Функція що виводить операторів, у яких загальний результат буде найкращим 
// (серед тих, які управляють однаковою моделлю дрона)
private: System::Void Task5Button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MainDrones.size()) {
		LogBox->Text = "Operators that have the best result (distance/speed) of a single model\r\n";
		LogBox->Text += "Operators:\r\n";
		vector<Drone> Task5Drones;
		Task5Drones = MainDrones;
		Sort_By_Model(Task5Drones);
		vector<Drone> ResultDrones;
		Drone BestDrone = Task5Drones[0];
		for (int i = 1; i < Task5Drones.size(); i++)
		{
			if (BestDrone.m_sModel.compare(Task5Drones[i].m_sModel) == 0) {
				if ((Task5Drones[i].m_dFlight_Distance / 1000) / Task5Drones[i].m_dSpeed <
					(BestDrone.m_dFlight_Distance / 1000) / BestDrone.m_dSpeed) {
					BestDrone = Task5Drones[i];
				}
			}
			else {
				LogBox->Text += gcnew System::String(BestDrone.m_sOperator.c_str()) + "\r\n";
				ResultDrones.push_back(BestDrone);
				BestDrone = Task5Drones[i];
			}
		}
		LogBox->Text += gcnew System::String(BestDrone.m_sOperator.c_str()) + "\r\n";
		ResultDrones.push_back(BestDrone);
		OutputDataTable->DataSource = ShowDrones(ResultDrones);
	}
}
// Функція що видаляє вказаний дрон зі списку
private: System::Void RemoveDroneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (!RemoveDroneNumber->Text)
			throw 1;
		int iDroneNumber = System::Convert::ToInt32(RemoveDroneNumber->Text);
		if (iDroneNumber<1)
			throw 2;
		bool bErase = false;
		for (int i = 0; i < MainDrones.size(); i++) {
			if (MainDrones[i].m_iNumber == iDroneNumber) {
				MainDrones.erase(MainDrones.begin() + i);
				bErase = true;
			}
		}
		if (!bErase) {
			throw 3;
		}
		InputDataTable->DataSource = ShowDrones(MainDrones);
		OutputDataTable->DataSource = ShowDrones(MainDrones);
		LogBox->Text = "Drones count: " + System::Convert::ToString(MainDrones.size()) +
			"\r\n"+"Drone number " + System::Convert::ToString(iDroneNumber) + " has been deleted\r\n";
	}
	catch (int e) {
		switch (e) {
		case 1: 
			MessageBox::Show(System::Convert::ToString("Enter number of drone"),
				System::Convert::ToString("Warning"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Warning);
			break;
		case 2:
			MessageBox::Show(System::Convert::ToString("Not correct range"),
				System::Convert::ToString("Error"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
			break;
		case 3:
			MessageBox::Show(System::Convert::ToString("This drone doesn't exist"),
				System::Convert::ToString("Error"),
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
			break;
		}
	}
}
// Функція що групує по моделях які мають результат статус – успішне повернення 
// та найкраще значення – швидкість та сортує за оператором
private: System::Void Task2Button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MainDrones.size()) {
		vector<Drone> Task2Drones;
		vector<Drone> ResultDrones;
		Task2Drones = SuccessfullyCameBackDrones(MainDrones);
		if (Task2Drones.size()) {
			Sort_By_Model(Task2Drones);
			Drone BestDrone = Task2Drones[0];
			for (int i = 1; i < Task2Drones.size(); i++)
			{
				if (BestDrone.m_sModel.compare(Task2Drones[i].m_sModel) == 0) {
					if (Task2Drones[i].m_dSpeed > BestDrone.m_dSpeed) {
						BestDrone = Task2Drones[i];
					}
				}
				else {
					ResultDrones.push_back(BestDrone);
					BestDrone = Task2Drones[i];
				}
			}
			ResultDrones.push_back(BestDrone);
			Sort_By_Operator(ResultDrones);
		}
		OutputDataTable->DataSource = ShowDrones(ResultDrones);
		LogBox->Text = "Drones that successfully came back and have the best speed result of a single model, sorted by operator ";
	}
}
// Функція що виводить інформацію про програму
private: System::Void AboutMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(System::Convert::ToString(
		"The program is designed to work with drone data.\
		It was developed in C ++ in the Microsoft Visual Studio 2019 development environment.\
		An object-oriented programming approach is used."),
		System::Convert::ToString("Info"),
		System::Windows::Forms::MessageBoxButtons::OK,
		System::Windows::Forms::MessageBoxIcon::Information);
}
};
}
