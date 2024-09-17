#pragma once
#include <vector>
#include <stdexcept>

using namespace std;
namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(vector<vector<int>> result)
		{
			InitializeComponent();

			// Ensure the DataGridView has the correct number of columns
			if (dataGridView1->ColumnCount < 6) { // Increment to 6 for the additional Process ID column
				dataGridView1->Columns->Add("Column0", "Process ID"); // Add Process ID column at index 0
				dataGridView1->Columns->Add("Column1", "Arrival Time");
				dataGridView1->Columns->Add("Column2", "Burst Time");
				dataGridView1->Columns->Add("Column3", "Completion Time");
				dataGridView1->Columns->Add("Column4", "Turnaround Time");
				dataGridView1->Columns->Add("Column5", "Waiting Time");
			}
			else {
				dataGridView1->Columns[0]->Name = "Process ID";
				dataGridView1->Columns[1]->Name = "Arrival Time";
				dataGridView1->Columns[2]->Name = "Burst Time";
				dataGridView1->Columns[3]->Name = "Completion Time";
				dataGridView1->Columns[4]->Name = "Turnaround Time";
				dataGridView1->Columns[5]->Name = "Waiting Time";
			}


			dataGridView1->Rows->Clear();

			for (int i = 0; i < result.size(); ++i) {
				String^ processID = "Process " + (i + 1);

				dataGridView1->Rows->Add(processID,result[i][0], result[i][1], result[i][2], result[i][3], result[i][4]);
			}

			// TODO: Add any additional constructor code here
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(871, 325);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView1_CellContentClick);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(906, 422);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
