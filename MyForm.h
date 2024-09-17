#pragma once
#include<iostream>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal_cppstd.h> // For marshal_as

using namespace msclr::interop;
#include <iomanip>
#include <algorithm> // For std::sort
#include <numeric>
#include<vector>
using namespace std;
#include "MyForm1.h"
#include "MyForm2.h"
namespace Project8 {

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
            Burst = new vector<int>();
            Arrival = new vector<int>();

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
    private: System::Windows::Forms::Button^ button1;
    private:
        vector<int>* Burst;
        vector<int>* Arrival;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ BurstTime;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ArrivalTime;
    private: System::Windows::Forms::ListBox^ listBox1;




    private: System::ComponentModel::IContainer^ components;

    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>


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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->BurstTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ArrivalTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(522, 615);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(242, 54);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Add Process";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(1247, 619);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(234, 50);
            this->comboBox1->TabIndex = 3;
            this->comboBox1->Text = L"Algorithm";
            // 
            // dataGridView1
            // 
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
                this->BurstTime,
                    this->ArrivalTime
            });
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridView1->Location = System::Drawing::Point(505, 253);
            this->dataGridView1->Name = L"dataGridView1";
            dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1008, 308);
            this->dataGridView1->TabIndex = 9;
            // 
            // BurstTime
            // 
            this->BurstTime->HeaderText = L"BurstTime";
            this->BurstTime->MinimumWidth = 6;
            this->BurstTime->Name = L"BurstTime";
            this->BurstTime->Width = 125;
            // 
            // ArrivalTime
            // 
            this->ArrivalTime->HeaderText = L"ArrivalTime";
            this->ArrivalTime->MinimumWidth = 6;
            this->ArrivalTime->Name = L"ArrivalTime";
            this->ArrivalTime->Width = 125;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::Black;
            this->button4->Location = System::Drawing::Point(857, 781);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(302, 88);
            this->button4->TabIndex = 10;
            this->button4->Text = L"Execute";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->ItemHeight = 16;
            this->listBox1->Location = System::Drawing::Point(54, 167);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(235, 148);
            this->listBox1->TabIndex = 11;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1902, 1055);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->button4);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

        }

#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        // Add items to the combo box on form load
        comboBox1->Items->Add("SCFS");
        comboBox1->Items->Add("FCFS");
        comboBox1->Items->Add("SJF");
    }
           void hello() {
               cout << "Hello!" << endl;
           }
           vector<pair<int, int>> generateGanttChart(const vector<int>& arrivalTimes, const vector<int>& burstTimes) {
               int n = arrivalTimes.size();
               vector<pair<int, int>> ganttChart;

               // Create a vector of tasks with indices
               vector<pair<int, pair<int, int>>> tasks;
               for (int i = 0; i < n; ++i) {
                   tasks.push_back({ arrivalTimes[i], { burstTimes[i], i } });
               }

               // Sort tasks based on arrival time
               sort(tasks.begin(), tasks.end());

               // Construct Gantt chart data
               int currentTime = 0;
               for (const auto& task : tasks) {
                   int startTime = max(currentTime, task.first);
                   ganttChart.push_back({ startTime, task.second.first });
                   currentTime = startTime + task.second.first;
               }

               return ganttChart;
           }
           vector<vector<int>> fcfss(vector<int> arrivalTimes, vector<int> burstTimes) {
               int n = burstTimes.size();
               vector<int> completionTimes(n, 0);
               vector<int> waitingTimes(n, 0);
               vector<int> turnaroundTimes(n, 0);

               // Calculate completion time for each process
               completionTimes[0] = arrivalTimes[0] + burstTimes[0];
               for (int i = 1; i < n; ++i) {
                   if (arrivalTimes[i] > completionTimes[i - 1]) {
                       completionTimes[i] = arrivalTimes[i] + burstTimes[i];
                   }
                   else {
                       completionTimes[i] = completionTimes[i - 1] + burstTimes[i];
                   }
               }

               // Calculate turnaround time and waiting time for each process
               for (int i = 0; i < n; ++i) {
                   turnaroundTimes[i] = completionTimes[i] - arrivalTimes[i];
                   waitingTimes[i] = turnaroundTimes[i] - burstTimes[i];
               }

               // Calculate average turnaround time and average waiting time
               double totalTurnaroundTime = 0;
               double totalWaitingTime = 0;
               for (int i = 0; i < n; ++i) {
                   totalTurnaroundTime += turnaroundTimes[i];
                   totalWaitingTime += waitingTimes[i];
               }
               double averageTurnaroundTime = totalTurnaroundTime / n;
               double averageWaitingTime = totalWaitingTime / n;

               // Store results in a vector of vectors
               vector<vector<int>> result(n, vector<int>(5));
               for (int i = 0; i < n; ++i) {
                   result[i][0] = arrivalTimes[i];
                   result[i][1] = burstTimes[i];
                   result[i][2] = completionTimes[i];
                   result[i][3] = turnaroundTimes[i];
                   result[i][4] = waitingTimes[i];
               }
               return result;
           }
           vector<vector<int>> sjf(vector<int> arrivalTimes, vector<int> burstTimes) {
               int n = burstTimes.size();
               vector<int> completionTimes(n, 0);
               vector<int> waitingTimes(n, 0);
               vector<int> turnaroundTimes(n, 0);

               // Sort processes based on arrival time
               vector<pair<int, int>> processes;
               for (int i = 0; i < n; ++i) {
                   processes.push_back({ arrivalTimes[i], i }); // { arrival time, process index }
               }
               sort(processes.begin(), processes.end());

               // Calculate completion time for each process
               int currentTime = processes[0].first; // Start time is the arrival time of the first process
               for (int i = 0; i < n; ++i) {
                   int processIndex = processes[i].second; // Process index after sorting
                   completionTimes[processIndex] = currentTime + burstTimes[processIndex];
                   currentTime = completionTimes[processIndex];
               }

               // Calculate turnaround time and waiting time for each process
               for (int i = 0; i < n; ++i) {
                   turnaroundTimes[i] = completionTimes[i] - arrivalTimes[i];
                   waitingTimes[i] = turnaroundTimes[i] - burstTimes[i];
               }

               // Calculate average turnaround time and average waiting time
               double totalTurnaroundTime = accumulate(turnaroundTimes.begin(), turnaroundTimes.end(), 0);
               double totalWaitingTime = accumulate(waitingTimes.begin(), waitingTimes.end(), 0);
               double averageTurnaroundTime = totalTurnaroundTime / n;
               double averageWaitingTime = totalWaitingTime / n;

               // Store results in a vector of vectors
               vector<vector<int>> result(n, vector<int>(5));
               for (int i = 0; i < n; ++i) {
                   result[i][0] = arrivalTimes[i];
                   result[i][1] = burstTimes[i];
                   result[i][2] = completionTimes[i];
                   result[i][3] = turnaroundTimes[i];
                   result[i][4] = waitingTimes[i];
               }
               return result;
           }



    
  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
      MyForm1^ f = gcnew MyForm1;
      f->ShowDialog();

      dataGridView1->Rows->Add(f->GetData(), f->GetDataa());
      listBox1->Items->Add(f->GetData() + " - " + f->GetDataa());

      Burst->push_back(System::Convert::ToInt16(f->GetData()));
      Arrival->push_back(System::Convert::ToInt16(f->GetDataa()));

      for (int i = 0; i < Burst->size(); i++) {
          cout << "Arrival: " << Arrival->at(i) << "  ";
      }
      cout << endl;
      for (int i = 0; i < Arrival->size(); i++) {
          cout << "Burst: " << Burst->at(i) << "  ";
      }
  }

          


    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        vector<vector<int>> result = fcfss(*Arrival, *Burst);
        vector<vector<int>> result1 = sjf(*Arrival, *Burst);
        // Ensure result is correctly populated
        if (result.empty() || result[0].size() < 5) {
            MessageBox::Show("Result data is not in the expected format.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ selectedItemText = comboBox1->Text;
        string s = marshal_as<string>(selectedItemText);

        if (s == "FCFS") {
            MyForm2^ form2 = gcnew MyForm2(result);
            form2->ShowDialog();
        }
        else if (s == "SJF") {
            MyForm2^ form2 = gcnew MyForm2(result1);
            form2->ShowDialog();
        }
    }


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    

}
};
}
