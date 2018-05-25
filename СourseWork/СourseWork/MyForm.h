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
	};

	CurrentTime currentTime;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::TextBox^  textBox9;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  button5;










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(352, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
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
			this->button2->Size = System::Drawing::Size(100, 21);
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
			this->button3->Location = System::Drawing::Point(352, 138);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Delete user";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox9);
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
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(294, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Facilities:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(352, 85);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(102, 20);
			this->textBox9->TabIndex = 19;
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
			this->textBox10->Location = System::Drawing::Point(12, 358);
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
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(12, 188);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(460, 164);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Send values";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(297, 135);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Pay";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(382, 135);
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
			this->Column1->HeaderText = L"Вид услуги";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 107.8173F;
			this->Column2->HeaderText = L"Тариф";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 107.8173F;
			this->Column3->HeaderText = L"Норматив";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->FillWeight = 60.9137F;
			this->Column6->HeaderText = L"Тип";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 107.8173F;
			this->Column4->HeaderText = L"Показания";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->FillWeight = 107.8173F;
			this->Column5->HeaderText = L"Счет";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 423);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		acc.connectToDb("database.json");

		if (textBox7->Text == "") textBox7->Text = "0";
		if (textBox8->Text == "") textBox8->Text = "0";

		acc.regist(toString(textBox1->Text), toString(textBox2->Text), toString(textBox3->Text),
		toString(textBox4->Text), toString(textBox5->Text), toString(textBox6->Text),
		toInt(textBox7->Text), toInt(textBox8->Text), toString(textBox9->Text));

		textBox10->Text = "Successfully registered: " + acc.getTn().intro() + "\r\n" + textBox10->Text;

		//acc.tn.addIntoJson("money", "1300$");
		acc.getDb().save("database.json");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox10->Text = dateTimePicker1->Value.ToString() + "\r\n" + textBox10->Text;

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
				/*textBox10->Text += acc.getTn().isAdminMode + "\r\n";*/

				dataGridView1->Rows->Clear();

				if (acc.getTn().isAdminMode) {
					for (int i = 0; i < dataGridView1->Columns->Count - 2; i++)
						dataGridView1->Columns[i]->ReadOnly = false;
					for (int i = dataGridView1->Columns->Count - 2; i < dataGridView1->Columns->Count - 1; i++)
						dataGridView1->Columns[i]->ReadOnly = true;

					/*for (auto i : acc.getDb().getJ()["payment"]) {
						dataGridView1->Rows->Add(toFormString("123"),
							i.find("tariff") != i.end()
							? toFormString(std::to_string((double)i["tariff"]))
							: "-",
							i.find("norm") != i.end()
							? toFormString(std::to_string((double)i["norm"]))
							: "-",
							toFormString(i["type"]));
					}*/
				}
				else {
					for (int i = 0; i < dataGridView1->Columns->Count - 2; i++)
						dataGridView1->Columns[i]->ReadOnly = true;
					for (int i = dataGridView1->Columns->Count - 2; i < dataGridView1->Columns->Count - 1; i++)
						dataGridView1->Columns[i]->ReadOnly = false;
				}

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
		catch (json::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
		catch (std::exception e) {
			textBox10->Text = toFormString(e.what()) + "\r\n" + textBox10->Text;
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		acc.connectToDb("database.json");
		acc.getDb().deleteUser(acc.getDb().getUser(toString(textBox1->Text), toString(textBox2->Text)));
		acc.getDb().save();
		textBox10->Text = "Account is deleted from " + toFormString(acc.getDb().filename) + "\r\n" + textBox10->Text;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (acc.getTn().getJ() == NULL)
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

		if (!acc.getLl().finished) {
			dateTimePicker1->Value = currentTime.current;
		}
		else
			if (currentTime.current.AddMonths(1).ToString("MMMM yyyy") == temp.ToString("MMMM yyyy")) {
				currentTime.current = temp;
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
			else
				dateTimePicker1->Value = currentTime.current;

		/*if (!acc.getLl().finished) {
			textBox10->Text = "You can't change month if you didn't pay for this\r\n" + textBox10->Text;
			dateTimePicker1->Value = currentTime.current;
		}
		else if (temp.Compare(temp, currentTime.current) == 1
			&& temp.AddMonths(-1).Month - currentTime.current.Month == 0
			&& temp.AddMonths(-1).Year - currentTime.current.Year == 0) {
			currentTime.current = temp;
			textBox10->Text = "New month is " + currentTime.current.ToString("MMMM") + "\r\n" + textBox10->Text;
			//dateTimePicker1->Value = currentTime.current;
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
			if (temp.AddMonths(-1).Year - currentTime.current.Year != 0) {
				textBox10->Text = "Please pay first for " + currentTime.current.ToString("MMMM yyyy") + "\r\n" + textBox10->Text;
				dateTimePicker1->Value = currentTime.current;
			}
			if (temp.AddMonths(-1).Month - currentTime.current.Month != 0)
				if (temp.Compare(temp, currentTime.current) == 1) {
					textBox10->Text = "Pay for " + currentTime.current.ToString("MMMM") + " first\r\n" + textBox10->Text;
					dateTimePicker1->Value = currentTime.current;
				}
				else if (temp.Compare(temp, currentTime.current) == -1) {
					textBox10->Text = "You can't go to the past\r\n" + textBox10->Text;
					dateTimePicker1->Value = currentTime.current;
				}
		}*/
		//temp = currentTime.current;
			
		//textBox10->Text = "" + " " + textBox10->Text;
	}
	private: System::Void MyForm_Shown(System::Object^  sender, System::EventArgs^  e) {
		currentTime.current = dateTimePicker1->Value;
	}
};
}
