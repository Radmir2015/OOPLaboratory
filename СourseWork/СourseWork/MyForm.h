#pragma once

#include "Global.h"
using namespace Global;

#include "Account.h"

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Account acc;

	value class CurrentTime {
		public:
			static DateTime current;
			static DateTime sendedMeters;
	};

	CurrentTime currentTime;

	bool isLogin = false;
	bool isCodeClick = false;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::Windows::Forms::Button^  button4;






	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  button8;










	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 21);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(102, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(102, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(90, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(102, 20);
			this->textBox3->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(90, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 21);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Login:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(246, 138);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Delete user";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkedListBox1);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(460, 169);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Register/Login";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(352, 84);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(102, 79);
			this->checkedListBox1->TabIndex = 22;
			this->checkedListBox1->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::checkedListBox1_ItemCheck);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(246, 111);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(98, 23);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Logout";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(294, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Facilities:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(273, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Living people:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(352, 63);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(102, 20);
			this->textBox8->TabIndex = 17;
			this->textBox8->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(284, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Apart. area:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(352, 41);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(102, 20);
			this->textBox7->TabIndex = 15;
			this->textBox7->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Father\'s name:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(90, 140);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(102, 20);
			this->textBox5->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(286, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Full adress:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(352, 19);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(102, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Surname:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(90, 118);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(102, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Name:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(12, 464);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(460, 53);
			this->textBox10->TabIndex = 9;
			this->textBox10->Text = L"Status:\r\n";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(6, 138);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(83, 20);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(12, 182);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(460, 164);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Send values";
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(217, 135);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Save";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(379, 135);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Pay";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(298, 135);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Submit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column6, this->Column4, this->Column5
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(3, 16);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(454, 113);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 107.8173F;
			this->Column1->HeaderText = L"Service";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 107.8173F;
			this->Column2->HeaderText = L"Tariff";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 107.8173F;
			this->Column3->HeaderText = L"Norm";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->FillWeight = 60.9137F;
			this->Column6->HeaderText = L"Type";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 107.8173F;
			this->Column4->HeaderText = L"Meter";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->FillWeight = 107.8173F;
			this->Column5->HeaderText = L"Check";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView2);
			this->groupBox3->Location = System::Drawing::Point(12, 346);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(460, 112);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Payments";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column7,
					this->Column8, this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView2->Location = System::Drawing::Point(3, 16);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(454, 87);
			this->dataGridView2->TabIndex = 0;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Login";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Sender";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Service";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Meter";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Check";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Date";
			this->Column12->Name = L"Column12";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(136, 135);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Outdated";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 529);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Service center";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			acc.connectToDb("database.json");

			if (System::Convert::ToInt16(textBox7->Text) <= 0)
				throw std::exception("Please fill in AREA with integer countable number");

			if (System::Convert::ToInt16(textBox8->Text) <= 0)
				throw std::exception("Please fill in LIVING PEOPLE with integer countable number");

			if (textBox1->Text->Length < 1)
				throw std::exception("Enter at least 1 character in the LOGIN field");

			if (textBox2->Text->Length < 1)
				throw std::exception("Enter at least 1 character in the PASSWORD field");

			isCodeClick = true;

			for (int j = 0; j < checkedListBox1->Items->Count; j++)
				checkedListBox1->SetItemChecked(j, false);

			isCodeClick = false;

			dataGridView1->Rows->Clear();

			std::vector<std::string> facilities;

			for (int i = 0; i < checkedListBox1->Items->Count; i++) {
				if (checkedListBox1->GetItemCheckState(i) == CheckState::Unchecked)
					facilities.push_back(toString(checkedListBox1->Items[i]->ToString()));
			}

			acc.regist(toString(textBox1->Text), toString(textBox2->Text), toString(textBox3->Text),
				toString(textBox4->Text), toString(textBox5->Text), toString(textBox6->Text),
				toInt(textBox7->Text), toInt(textBox8->Text), facilities);

			textBox10->Text = "Successfully registered: " + acc.getTn().intro() + "\r\n" + textBox10->Text;

			textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = "";
			textBox6->Text = ""; textBox7->Text = "0"; textBox8->Text = "0";

			acc.getDb().save("database.json");
		}
		catch (System::FormatException^ e) {
			textBox10->Text = "One or few fields don't filled by ints\r\n" + e->Message + "\r\n" + textBox10->Text;
		}
		catch (json::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox10->Text = dateTimePicker1->Value.ToString() + "\r\n" + textBox10->Text;
		//currentTime.current = currentTime.current.Now;
		currentTime.current = DateTime(currentTime.current.Year, currentTime.current.Month,
			currentTime.current.Day <= 20 ? currentTime.current.Day : 1,
			currentTime.current.Hour, currentTime.current.Minute, currentTime.current.Second);
		dateTimePicker1->Value = currentTime.current;

		try {
			try {
				acc.connectToDb("database.json");
			}
			catch (json::exception e) {
				textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
			}
			catch (std::exception e) {
				textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
				throw std::exception("File database.json can't be opened");
			}
				acc.login(toString(textBox1->Text), toString(textBox2->Text));
				textBox10->Text = "Logged in: " + acc.getTn().intro() + " account\r\n" + textBox10->Text;

				isLogin = true;

				isCodeClick = true;

				for (int j = 0; j < checkedListBox1->Items->Count; j++)
					checkedListBox1->SetItemChecked(j, true);

				isCodeClick = false;

				int time = acc.getLl().getUnpaidMonth(acc.getTn());
				if (time > 0) {
					textBox10->Text = "Your next month for pay: "
						+ toSystemDate(time).AddMonths(1).ToString("MMMM yyyy") + "\r\n" + textBox10->Text;
					currentTime.current = toSystemDate(time).AddMonths(1);
					currentTime.current = DateTime(currentTime.current.Year, currentTime.current.Month, 1,
						currentTime.current.Hour, currentTime.current.Minute, currentTime.current.Second);
					dateTimePicker1->Value = currentTime.current;
				}

				dataGridView1->Rows->Clear();

				if (acc.getTn().isAdminMode) {
					button5->Enabled = false;
					button4->Enabled = false;
					button6->Enabled = true;

					dataGridView1->AllowUserToAddRows = true;
					dataGridView1->AllowUserToDeleteRows = true;

					for (int i = 0; i < dataGridView1->Columns->Count - 2; i++)
						dataGridView1->Columns[i]->ReadOnly = false;
					for (int i = dataGridView1->Columns->Count - 2; i < dataGridView1->Columns->Count - 1; i++)
						dataGridView1->Columns[i]->ReadOnly = true;

					checkedListBox1->Enabled = false;

					for (auto i : acc.getDb().getJ()["payment"].items()) {
						json temp = i.value();
						dataGridView1->Rows->Add(toFormString(i.key()),
							temp.find("tariff") != temp.end()
							? toFormString(std::to_string((double)temp["tariff"]))
							: "-",
							temp.find("norm") != temp.end()
							? toFormString(std::to_string((double)temp["norm"]))
							: "-",
							toFormString(temp["type"]));
					}
				}
				else {
					button5->Enabled = true;
					button4->Enabled = true;
					button6->Enabled = false;

					dataGridView1->AllowUserToAddRows = false;
					dataGridView1->AllowUserToDeleteRows = false;

					checkedListBox1->Enabled = true;

					isCodeClick = true;

					for (auto i : acc.getTn().getNeedToPay())
						for (int j = 0; j < checkedListBox1->Items->Count; j++)
							if (checkedListBox1->Items[j]->ToString() == toFormString(i))
								checkedListBox1->SetItemChecked(j, false);

					isCodeClick = false;

					for (int i = 0; i < dataGridView1->Columns->Count - 2; i++)
						dataGridView1->Columns[i]->ReadOnly = true;
					for (int i = dataGridView1->Columns->Count - 2; i < dataGridView1->Columns->Count - 1; i++)
						dataGridView1->Columns[i]->ReadOnly = false;

					for (auto i : acc.getTn().getNeedToPay()) {
						auto temp = acc.getDb().getJ()["payment"].at(i);
						dataGridView1->Rows->Add(toFormString(i),
							temp.find("tariff") != temp.end()
							? toFormString(std::to_string((double)temp["tariff"]))
							: "-",
							temp.find("norm") != temp.end()
							? toFormString(std::to_string((double)temp["norm"]))
							: "-",
							toFormString(temp["type"]));
					}
				}
			}
		catch (json::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (acc.getTn().isAdminMode)
				throw std::exception("You can't delete Admin account");
			acc.connectToDb("database.json");
			acc.getDb().deleteUser(acc.getDb().getUser(toString(textBox1->Text), toString(textBox2->Text)));
			acc.getDb().save();

			isCodeClick = true;

			for (int j = 0; j < checkedListBox1->Items->Count; j++)
				checkedListBox1->SetItemChecked(j, false);

			isCodeClick = false;

			checkedListBox1->Enabled = false;
			dataGridView1->Rows->Clear();

			textBox10->Text = "Account is deleted from " + toFormString(acc.getDb().filename) + "\r\n" + textBox10->Text;
		}
		catch (json::exception e) {
			textBox10->Text = "Error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = "Error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!isLogin || acc.getLl().finished)
			return;

		std::vector<std::vector<std::string>> total;
		std::vector<std::vector<double>> numbers;

		try {
			for (int i = 0; i < dataGridView1->Rows->Count; i++) {
				double converted = System::Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value->ToString()->Replace(".", ","));

				if (converted < 0) throw std::exception("The meter reading can't be less 0");
				std::vector<std::string> temp;
				std::vector<double> nums;

				for (int j = 0; j < dataGridView1->Rows[i]->Cells->Count - 1; j++) {
					temp.push_back(toString(dataGridView1->Rows[i]->Cells[j]->Value->ToString()));

					try {
						double num = System::Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Replace(".", ","));
						nums.push_back(num);
					}
					catch (System::FormatException^) {
						nums.push_back(NULL);
					}
				}
				total.push_back(temp);
				numbers.push_back(nums);
			}
			auto pays = acc.sendMeters(total, numbers, acc.getTn(), acc.getDb().getJ()["payment"]);

			for (int i = 0; i < pays.size(); i++)
				dataGridView1->Rows[i]->Cells[5]->Value = pays[i];

			dataGridView1->Columns[4]->ReadOnly = true;

			currentTime.sendedMeters = currentTime.current;

			textBox10->Text = "Successfully sended meters\r\n" + textBox10->Text;
		}
		catch (System::FormatException^ e) {
			textBox10->Text = "One or few fields don't filled by doubles\r\n" + e->Message + "\r\n" + textBox10->Text;
		}
		catch (System::NullReferenceException^ e) {
			textBox10->Text = "One or few fields don't filled\r\n" + e->Message + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		if (acc.getLl().started) {
			std::vector<std::vector<std::string>> total;
			std::vector<std::vector<double>> numbers;
			std::vector<std::string> temp;
			std::vector<double> nums;
			try {
				for (int i = 0; i < dataGridView1->Rows->Count; i++) {
					double converted = System::Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value->ToString()->Replace(".", ","));

					if (converted < 0) throw std::exception("The meter reading can't be less 0");
					std::vector<std::string> temp;
					std::vector<double> nums;

					for (int j = 0; j < dataGridView1->Rows[i]->Cells->Count; j++) {
						temp.push_back(toString(dataGridView1->Rows[i]->Cells[j]->Value->ToString()));

						try {
							double num = System::Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Replace(".", ","));
							nums.push_back(num);
						}
						catch (System::FormatException^) {
							nums.push_back(NULL);
						}
					}
					total.push_back(temp);
					numbers.push_back(nums);

					textBox10->Text = "Payment for " + dataGridView1->Rows[i]->Cells[0]->Value->ToString()
						+ " is sent...\r\n" + textBox10->Text;
				}
				acc.sendPay(total, numbers, acc.getTn(), toUnixTime(dateTimePicker1->Value));
				acc.getLl().savePayments("payments.json");

				dataGridView1->Columns[4]->ReadOnly = false;

				dataGridView2->Rows->Clear();

				for (auto i : acc.getLl().getAllPayments())
					dataGridView2->Rows->Insert(0, toFormString(i["login"]), toFormString(i["sender"]),
						toFormString(i["payments"]), toFormString(i["meters"]),
						toFormString(i["check"]), toSystemDate(i["unixtime"]).ToString("dd.MM.yyyy"));
			}
			catch (json::exception e) {
				textBox10->Text = "Error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
			}
			catch (std::exception e) {
				textBox10->Text = "Error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
			}
		}
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		auto temp = dateTimePicker1->Value;

		try {
			if (!isLogin)
				currentTime.current = temp;
			else
				if (!acc.getLl().finished) { // not paid
					if (!acc.getLl().started && currentTime.current.ToString("MMMM yyyy") == temp.ToString("MMMM yyyy")
						&& temp.Day <= 20) // not sended meters
						currentTime.current = temp;
					if (acc.getLl().started && currentTime.current.ToString("MMMM yyyy") == temp.ToString("MMMM yyyy")
						&& temp.Compare(currentTime.sendedMeters, temp) <= 0) // sended meters
						currentTime.current = temp;
					dateTimePicker1->Value = currentTime.current;
				}
				else // paid
					if (currentTime.current.AddMonths(1).ToString("MMMM yyyy") == temp.ToString("MMMM yyyy")) {
						currentTime.current = DateTime(temp.Year, temp.Month, 1, temp.Hour, temp.Minute, temp.Second);
						textBox10->Text = "New month is " + currentTime.current.ToString("MMMM") + "\r\n" + textBox10->Text;
						dataGridView1->Rows->Clear();
						for (auto i : acc.getTn().getNeedToPay()) {
							auto temp = acc.getDb().getJ()["payment"].at(i);
							dataGridView1->Rows->Add(toFormString(i),
								temp.find("tariff") != temp.end()
								? toFormString(std::to_string((double)temp["tariff"]))
								: "-",
								temp.find("norm") != temp.end()
								? toFormString(std::to_string((double)temp["norm"]))
								: "-",
								toFormString(temp["type"]));
						}
						acc.getLl().finished = false;
					}
					else {
						if (currentTime.current.ToString("MMMM yyyy") == temp.ToString("MMMM yyyy"))
							currentTime.current = temp;
						dateTimePicker1->Value = currentTime.current;
					}
		}
		catch (json::exception e) {
			textBox10->Text = "Error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = "Error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void MyForm_Shown(System::Object^  sender, System::EventArgs^  e) {
		currentTime.current = dateTimePicker1->Value;
		currentTime.current = DateTime(currentTime.current.Year, currentTime.current.Month, 1,
			currentTime.current.Hour, currentTime.current.Minute, currentTime.current.Second);

		checkedListBox1->Enabled = false;

		try {
			acc.connectToDb("database.json");

			for (auto i : acc.getDb().getJ()["payment"].items())
				checkedListBox1->Items->Add(toFormString(i.key()), false);

			dataGridView2->Rows->Clear();

			for (auto i : acc.getLl().getAllPayments())
				dataGridView2->Rows->Insert(0, toFormString(i["login"]), toFormString(i["sender"]),
					toFormString(i["payments"]), toFormString(i["meters"]),
					toFormString(i["check"]), toSystemDate(i["unixtime"]).ToString("dd.MM.yyyy"));
		}
		catch (json::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = "File database.json can't be opened\r\n"
				+ toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!acc.getTn().isAdminMode)
			return;

		json payment = {};

		std::vector<std::string> temp;
		std::vector<double> nums;
		
		try {
			for (int i = 0; i < dataGridView1->Rows->Count; i++) {
				for (int j = 0; j < dataGridView1->Rows[i]->Cells->Count - 2; j++) {
					try {
						temp.push_back(toString(dataGridView1->Rows[i]->Cells[j]->Value->ToString()));
					}
					catch (System::NullReferenceException^) {
						temp.push_back("");
					}

					try {
						double num = System::Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Replace(".", ","));
						nums.push_back(num);
					}
					catch (System::FormatException^) {
						nums.push_back(NULL);
					}
					catch (System::NullReferenceException^) {
						nums.push_back(NULL);
					}
				}

				if (temp[0] == "" && temp[1] == "" && temp[2] == "" && temp[3] == "") {
					temp.clear();
					nums.clear();
					continue;
				}
				else {
					if (temp[0] == "") {
						std::string errStr = "Please input name (kind) of service in " + std::to_string(i + 1) + " row";
						throw std::exception(errStr.c_str());
					}

					if (temp[3] == "" || (temp[3] != "footage" && temp[3] != "meter")) {
						std::string errStr = "Please input type of service (\"" + temp[0] + "\" in "
							+ std::to_string(i + 1) + " row): \"footage\" or \"meter\" only";
						throw std::exception(errStr.c_str());
					}

					if (nums[1] == NULL && nums[2] == NULL) {
						std::string errStr = "Please input tariff or/and norm in \"" + temp[0] + "\" in "
							+ std::to_string(i + 1) + " row";
						throw std::exception(errStr.c_str());
					}
				}

				if (nums[2] == NULL ^ nums[1] == NULL) {
					if (nums[2] == NULL)
						payment[temp[0]] = {
							{ "tariff", nums[1] },
							{ "type", temp[3] }
					};
					if (nums[1] == NULL) {
						if (temp[3] == "footage")
							throw std::exception("You can't input footage service without tariff");
						payment[temp[0]] = {
							{ "norm", nums[2] },
							{ "type", temp[3] }
						};
					}
				}
				else
					payment[temp[0]] = {
						{ "norm", nums[2] },
						{ "tariff", nums[1] },
						{ "type", temp[3] }
				};

				temp.clear();
				nums.clear();
			}

			std::set<std::string> oldJson;
			std::set<std::string> newJson;
			std::set<std::string> result;

			for (auto i : acc.getDb().getJ()["payment"].items())
				oldJson.insert(i.key());

			for (auto i : payment.items())
				newJson.insert(i.key());

			std::set_difference(oldJson.begin(), oldJson.end(),
				newJson.begin(), newJson.end(), std::inserter(result, result.begin())); // deleted

			if (result.size() > 0) // deleted
				for (std::set<std::string>::iterator i = result.begin(); i != result.end(); ++i)
					for (auto& j : acc.getDb().getJ()["users"]) {
						int cx = 0;
						if (j["auth"].count("isAdmin") > 0) continue;
						for (auto& k : j["pays"]["needToPay"].items()) {
							if (k.value() == *i) {
								j["pays"]["needToPay"].erase(j["pays"]["needToPay"].begin() + cx);
								break;
							}
							cx++;
						}
					}

			result.clear();

			std::set_difference(newJson.begin(), newJson.end(),
				oldJson.begin(), oldJson.end(), std::inserter(result, result.begin())); // inserted

			if (result.size() > 0) // inserted
				for (std::set<std::string>::iterator i = result.begin(); i != result.end(); ++i)
					for (auto& j : acc.getDb().getJ()["users"])
						if (j["auth"].count("isAdmin") == 0)
							j["pays"]["needToPay"].push_back(*i);

			acc.getDb().getJ()["payment"] = payment;
			acc.getDb().save();

			checkedListBox1->Items->Clear();

			isCodeClick = true;

			for (auto i : acc.getDb().getJ()["payment"].items())
				checkedListBox1->Items->Add(toFormString(i.key()), true);

			isCodeClick = false;

			textBox10->Text = "Changes successfully saved\r\n" + textBox10->Text;
		}
		catch (json::exception e) {
			textBox10->Text = "There is some error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (isLogin) {
				acc.getTn().~Tenant();
				isLogin = false;
				textBox10->Text = "Logout is executed\r\n" + textBox10->Text;
			}
			else
				textBox10->Text = "Logout has executed already\r\n" + textBox10->Text;

			dataGridView1->AllowUserToAddRows = false;
			dataGridView1->AllowUserToDeleteRows = false;
			dataGridView1->Rows->Clear();

			checkedListBox1->Enabled = false;

			isCodeClick = true;

			for (int j = 0; j < checkedListBox1->Items->Count; j++)
				checkedListBox1->SetItemChecked(j, false);

			isCodeClick = false;
		}
		catch (std::exception e) {
			textBox10->Text = "Error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void checkedListBox1_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
		try {
			if (!isLogin || isCodeClick)
				return;

			if (e->NewValue == CheckState::Checked)
				for (auto& j : acc.getDb().getJ()["users"]) {
					int cx = 0;
					if (j["auth"].count("isAdmin") > 0) continue;
					for (auto& k : j["pays"]["needToPay"].items()) {
						if (k.value() == toString(checkedListBox1->Items[e->Index]->ToString())) {
							j["pays"]["needToPay"].erase(j["pays"]["needToPay"].begin() + cx);
							break;
						}
						cx++;
					}
				}
			else if (e->NewValue == CheckState::Unchecked) {
				for (auto& j : acc.getDb().getJ()["users"])
					if (j["auth"].count("isAdmin") == 0)
						j["pays"]["needToPay"].push_back(toString(checkedListBox1->Items[e->Index]->ToString()));
			}

			dataGridView1->Rows->Clear();

			for (auto i : acc.getTn().getNeedToPay()) {
				auto temp = acc.getDb().getJ()["payment"].at(i);
				dataGridView1->Rows->Add(toFormString(i),
					temp.find("tariff") != temp.end()
					? toFormString(std::to_string((double)temp["tariff"]))
					: "-",
					temp.find("norm") != temp.end()
					? toFormString(std::to_string((double)temp["norm"]))
					: "-",
					toFormString(temp["type"]));
			}

			acc.getDb().save();
		}
		catch (json::exception e) {
			textBox10->Text = "There is some error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			for (auto i : acc.getLl().saveOutdated(toUnixTime(currentTime.current)))
				textBox10->Text = toFormString(i) + ".json file is saved\r\n" + textBox10->Text;
		}
		catch (json::exception e) {
			textBox10->Text = "Error: " + toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
};
}
