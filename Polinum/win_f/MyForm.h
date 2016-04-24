#pragma once

#include <iostream>
#include <sstream>

#include "TPolinom.h"
#include "TMonom.h"

using namespace std;



namespace win_f {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		TPolinom *P1;
		TPolinom *P2;
		TPolinom *P3;
	public:
		MyForm(void)
		{
			InitializeComponent();
			P1 = new TPolinom();
			P2 = new TPolinom();
			P3 = new TPolinom();

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
	private: System::Windows::Forms::Button^  close;
	protected: 

	private: System::Windows::Forms::Button^  add_in_Pol1;
	private: System::Windows::Forms::TextBox^  iPol1_a;





	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  iPol1_b;
	private: System::Windows::Forms::TextBox^  iPol1_c;


	private: System::Windows::Forms::TextBox^  iPol1_k;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  iPol2_k;
	private: System::Windows::Forms::TextBox^  iPol2_c;


	private: System::Windows::Forms::TextBox^  iPol2_b;




	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  iPol2_a;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  add_in_Pol2;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  pol1_plus_pol2;

	private: System::Windows::Forms::Button^  pol1_minus_pol2;
	private: System::Windows::Forms::Button^  pol2_minus_pol1;
	private: System::Windows::Forms::Button^  pol1_umn_pol2;
	private: System::Windows::Forms::Button^  P1_umn_cons;
	private: System::Windows::Forms::TextBox^  tconst;







	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  pol2_umn_cons;
	private: System::Windows::Forms::TextBox^  oresult;
	private: System::Windows::Forms::Button^  delete_monom;
	private: System::Windows::Forms::Button^  delete_monom2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->close = (gcnew System::Windows::Forms::Button());
			this->add_in_Pol1 = (gcnew System::Windows::Forms::Button());
			this->iPol1_a = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->iPol1_b = (gcnew System::Windows::Forms::TextBox());
			this->iPol1_c = (gcnew System::Windows::Forms::TextBox());
			this->iPol1_k = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->iPol2_k = (gcnew System::Windows::Forms::TextBox());
			this->iPol2_c = (gcnew System::Windows::Forms::TextBox());
			this->iPol2_b = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->iPol2_a = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->add_in_Pol2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pol1_plus_pol2 = (gcnew System::Windows::Forms::Button());
			this->pol1_minus_pol2 = (gcnew System::Windows::Forms::Button());
			this->pol2_minus_pol1 = (gcnew System::Windows::Forms::Button());
			this->pol1_umn_pol2 = (gcnew System::Windows::Forms::Button());
			this->P1_umn_cons = (gcnew System::Windows::Forms::Button());
			this->tconst = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pol2_umn_cons = (gcnew System::Windows::Forms::Button());
			this->oresult = (gcnew System::Windows::Forms::TextBox());
			this->delete_monom = (gcnew System::Windows::Forms::Button());
			this->delete_monom2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// close
			// 
			this->close->Location = System::Drawing::Point(12, 12);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(75, 23);
			this->close->TabIndex = 0;
			this->close->Text = L"Закрыть";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// add_in_Pol1
			// 
			this->add_in_Pol1->Location = System::Drawing::Point(272, 69);
			this->add_in_Pol1->Name = L"add_in_Pol1";
			this->add_in_Pol1->Size = System::Drawing::Size(116, 23);
			this->add_in_Pol1->TabIndex = 2;
			this->add_in_Pol1->Text = L"Добавить Моном";
			this->add_in_Pol1->UseVisualStyleBackColor = true;
			this->add_in_Pol1->Click += gcnew System::EventHandler(this, &MyForm::add_in_Pol1_Click);
			// 
			// iPol1_a
			// 
			this->iPol1_a->Location = System::Drawing::Point(110, 72);
			this->iPol1_a->Name = L"iPol1_a";
			this->iPol1_a->Size = System::Drawing::Size(20, 20);
			this->iPol1_a->TabIndex = 4;
			this->iPol1_a->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(98, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"X";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(136, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(178, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Z";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Введите моном для первого полинома:";
			// 
			// iPol1_b
			// 
			this->iPol1_b->Location = System::Drawing::Point(150, 72);
			this->iPol1_b->Name = L"iPol1_b";
			this->iPol1_b->Size = System::Drawing::Size(20, 20);
			this->iPol1_b->TabIndex = 9;
			// 
			// iPol1_c
			// 
			this->iPol1_c->Location = System::Drawing::Point(192, 72);
			this->iPol1_c->Name = L"iPol1_c";
			this->iPol1_c->Size = System::Drawing::Size(20, 20);
			this->iPol1_c->TabIndex = 10;
			// 
			// iPol1_k
			// 
			this->iPol1_k->Location = System::Drawing::Point(56, 88);
			this->iPol1_k->Name = L"iPol1_k";
			this->iPol1_k->Size = System::Drawing::Size(20, 20);
			this->iPol1_k->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(82, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"(";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(217, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L")";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(217, 217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L")";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(82, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"(";
			// 
			// iPol2_k
			// 
			this->iPol2_k->Location = System::Drawing::Point(56, 210);
			this->iPol2_k->Name = L"iPol2_k";
			this->iPol2_k->Size = System::Drawing::Size(20, 20);
			this->iPol2_k->TabIndex = 20;
			this->iPol2_k->TextChanged += gcnew System::EventHandler(this, &MyForm::iPol2_k_TextChanged);
			// 
			// iPol2_c
			// 
			this->iPol2_c->Location = System::Drawing::Point(192, 194);
			this->iPol2_c->Name = L"iPol2_c";
			this->iPol2_c->Size = System::Drawing::Size(20, 20);
			this->iPol2_c->TabIndex = 19;
			// 
			// iPol2_b
			// 
			this->iPol2_b->Location = System::Drawing::Point(150, 194);
			this->iPol2_b->Name = L"iPol2_b";
			this->iPol2_b->Size = System::Drawing::Size(20, 20);
			this->iPol2_b->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(178, 217);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Z";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(136, 217);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Y";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(98, 217);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"X";
			// 
			// iPol2_a
			// 
			this->iPol2_a->Location = System::Drawing::Point(110, 194);
			this->iPol2_a->Name = L"iPol2_a";
			this->iPol2_a->Size = System::Drawing::Size(20, 20);
			this->iPol2_a->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 174);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(206, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Введите моном для второго полинома:";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// add_in_Pol2
			// 
			this->add_in_Pol2->Location = System::Drawing::Point(272, 192);
			this->add_in_Pol2->Name = L"add_in_Pol2";
			this->add_in_Pol2->Size = System::Drawing::Size(116, 23);
			this->add_in_Pol2->TabIndex = 24;
			this->add_in_Pol2->Text = L"Добавить моном";
			this->add_in_Pol2->UseVisualStyleBackColor = true;
			this->add_in_Pol2->Click += gcnew System::EventHandler(this, &MyForm::add_in_Pol2_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(23, 407);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Результат:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(23, 303);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(113, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Выберите операцию:";
			// 
			// pol1_plus_pol2
			// 
			this->pol1_plus_pol2->Location = System::Drawing::Point(101, 358);
			this->pol1_plus_pol2->Name = L"pol1_plus_pol2";
			this->pol1_plus_pol2->Size = System::Drawing::Size(61, 23);
			this->pol1_plus_pol2->TabIndex = 27;
			this->pol1_plus_pol2->Text = L"P1+P2";
			this->pol1_plus_pol2->UseVisualStyleBackColor = true;
			this->pol1_plus_pol2->Click += gcnew System::EventHandler(this, &MyForm::pol1_plus_pol2_Click);
			// 
			// pol1_minus_pol2
			// 
			this->pol1_minus_pol2->Location = System::Drawing::Point(26, 325);
			this->pol1_minus_pol2->Name = L"pol1_minus_pol2";
			this->pol1_minus_pol2->Size = System::Drawing::Size(61, 23);
			this->pol1_minus_pol2->TabIndex = 28;
			this->pol1_minus_pol2->Text = L"P1-P2";
			this->pol1_minus_pol2->UseVisualStyleBackColor = true;
			this->pol1_minus_pol2->Click += gcnew System::EventHandler(this, &MyForm::pol1_minus_pol2_Click);
			// 
			// pol2_minus_pol1
			// 
			this->pol2_minus_pol1->Location = System::Drawing::Point(26, 358);
			this->pol2_minus_pol1->Name = L"pol2_minus_pol1";
			this->pol2_minus_pol1->Size = System::Drawing::Size(61, 23);
			this->pol2_minus_pol1->TabIndex = 29;
			this->pol2_minus_pol1->Text = L"P2-P1";
			this->pol2_minus_pol1->UseVisualStyleBackColor = true;
			this->pol2_minus_pol1->Click += gcnew System::EventHandler(this, &MyForm::pol2_minus_pol1_Click);
			// 
			// pol1_umn_pol2
			// 
			this->pol1_umn_pol2->Location = System::Drawing::Point(101, 325);
			this->pol1_umn_pol2->Name = L"pol1_umn_pol2";
			this->pol1_umn_pol2->Size = System::Drawing::Size(61, 23);
			this->pol1_umn_pol2->TabIndex = 30;
			this->pol1_umn_pol2->Text = L"P1*P2";
			this->pol1_umn_pol2->UseVisualStyleBackColor = true;
			this->pol1_umn_pol2->Click += gcnew System::EventHandler(this, &MyForm::pol1_umn_pol2_Click);
			// 
			// P1_umn_cons
			// 
			this->P1_umn_cons->Location = System::Drawing::Point(181, 358);
			this->P1_umn_cons->Name = L"P1_umn_cons";
			this->P1_umn_cons->Size = System::Drawing::Size(61, 23);
			this->P1_umn_cons->TabIndex = 32;
			this->P1_umn_cons->Text = L"P1*const";
			this->P1_umn_cons->UseVisualStyleBackColor = true;
			this->P1_umn_cons->Click += gcnew System::EventHandler(this, &MyForm::P1_umn_cons_Click);
			// 
			// tconst
			// 
			this->tconst->Location = System::Drawing::Point(248, 327);
			this->tconst->Name = L"tconst";
			this->tconst->Size = System::Drawing::Size(20, 20);
			this->tconst->TabIndex = 33;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(200, 330);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 13);
			this->label15->TabIndex = 34;
			this->label15->Text = L"const =";
			// 
			// pol2_umn_cons
			// 
			this->pol2_umn_cons->Location = System::Drawing::Point(248, 358);
			this->pol2_umn_cons->Name = L"pol2_umn_cons";
			this->pol2_umn_cons->Size = System::Drawing::Size(61, 23);
			this->pol2_umn_cons->TabIndex = 35;
			this->pol2_umn_cons->Text = L"P2*const";
			this->pol2_umn_cons->UseVisualStyleBackColor = true;
			this->pol2_umn_cons->Click += gcnew System::EventHandler(this, &MyForm::pol2_umn_cons_Click);
			// 
			// oresult
			// 
			this->oresult->Location = System::Drawing::Point(26, 423);
			this->oresult->Name = L"oresult";
			this->oresult->Size = System::Drawing::Size(431, 20);
			this->oresult->TabIndex = 36;
			// 
			// delete_monom
			// 
			this->delete_monom->Location = System::Drawing::Point(272, 95);
			this->delete_monom->Name = L"delete_monom";
			this->delete_monom->Size = System::Drawing::Size(116, 23);
			this->delete_monom->TabIndex = 37;
			this->delete_monom->Text = L"Удалить моном";
			this->delete_monom->UseVisualStyleBackColor = true;
			this->delete_monom->Click += gcnew System::EventHandler(this, &MyForm::delete_monom_Click);
			// 
			// delete_monom2
			// 
			this->delete_monom2->Location = System::Drawing::Point(272, 217);
			this->delete_monom2->Name = L"delete_monom2";
			this->delete_monom2->Size = System::Drawing::Size(116, 23);
			this->delete_monom2->TabIndex = 38;
			this->delete_monom2->Text = L"Удалить моном";
			this->delete_monom2->UseVisualStyleBackColor = true;
			this->delete_monom2->Click += gcnew System::EventHandler(this, &MyForm::delete_monom2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(431, 20);
			this->textBox1->TabIndex = 39;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(26, 258);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(431, 20);
			this->textBox2->TabIndex = 40;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(23, 242);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(93, 13);
			this->label16->TabIndex = 41;
			this->label16->Text = L"Второй полином:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(23, 123);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 13);
			this->label17->TabIndex = 42;
			this->label17->Text = L"Первый полином:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Очистить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 455);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->delete_monom2);
			this->Controls->Add(this->delete_monom);
			this->Controls->Add(this->oresult);
			this->Controls->Add(this->pol2_umn_cons);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tconst);
			this->Controls->Add(this->P1_umn_cons);
			this->Controls->Add(this->pol1_umn_pol2);
			this->Controls->Add(this->pol2_minus_pol1);
			this->Controls->Add(this->pol1_minus_pol2);
			this->Controls->Add(this->pol1_plus_pol2);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->add_in_Pol2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->iPol2_k);
			this->Controls->Add(this->iPol2_c);
			this->Controls->Add(this->iPol2_b);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->iPol2_a);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->iPol1_k);
			this->Controls->Add(this->iPol1_c);
			this->Controls->Add(this->iPol1_b);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->iPol1_a);
			this->Controls->Add(this->add_in_Pol1);
			this->Controls->Add(this->close);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Close();
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
			 {
				 P1=new TPolinom();
				 P2=new TPolinom();
				 P3=new TPolinom();
				 iPol1_k->Text="";
				 iPol1_a->Text="";
				 iPol1_b->Text="";
				 iPol1_c->Text="";
				 iPol2_k->Text="";
				 iPol2_a->Text="";
				 iPol2_b->Text="";
				 iPol2_c->Text="";
				 oresult->Text="";
				 textBox1->Text="";
				 textBox2->Text="";
				 tconst->Text="";
			 }
	private: System::Void add_in_Pol1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(iPol1_k->Text=="" || iPol1_a->Text=="" || iPol1_b->Text=="" || iPol1_c->Text=="")
				 {
					 MessageBox::Show("Введите значения");
					 return;
				 }
				 int k = Convert::ToInt32(iPol1_k->Text);
				 int a = Convert::ToInt32(iPol1_a->Text);
				 int b = Convert::ToInt32(iPol1_b->Text);
				 int c = Convert::ToInt32(iPol1_c->Text);

				 P1->add(new TMonom(k,a,b,c));
				 textBox1->Text=PolinomToStr(P1);
			 }


			 String^ PolinomToStr(TPolinom *P) // function of convert
			 {
				 TMonom *m=P->GetFirst();
				 String^ str="";
				 while (m!=0)
				 {
					 if (str!="" && m->GetCoeff()>0)
						 str=str+"+";
					 str=str+m->GetCoeff().ToString();
					 str=str+"*X^"+m->GetA()+"*Y^"+m->GetB()+"*Z^"+m->GetC();
					 m=P->GetNext();
				 }
				 return str;
			 }

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 ToolTip^ Tip = gcnew ToolTip();
				 Tip->SetToolTip(button1, "нажмите для очистки");
				 Tip->SetToolTip(add_in_Pol1, "нажмите для добавления монома в первый полином");
				 Tip->SetToolTip(add_in_Pol2, "нажмите для добавления монома во второй полином");
				 Tip->SetToolTip(delete_monom, "нажмите для удаления последнего монома в первом полиноме");
				 Tip->SetToolTip(delete_monom2, "нажмите для удаления последнего монома во втором полиноме");
				 Tip->SetToolTip(close, "нажмите для закрытия программы");
				 Tip->SetToolTip(pol2_minus_pol1, "нажмите,чтобы вычесть из второго полинома первый");
				 Tip->SetToolTip(pol1_minus_pol2, "нажмите,чтобы вычесть из первого полинома второй");
				 Tip->SetToolTip(pol1_umn_pol2, "нажмите,чтобы перемножить два полинома");
				 Tip->SetToolTip(pol1_plus_pol2, "нажмите,чобы сложить два полинома");
				 Tip->SetToolTip(P1_umn_cons, "нажмите,чтобы умножить первый полином на число");
				 Tip->SetToolTip(pol2_umn_cons, "нажмите,чтобы умножить второй полином на число");
			 }
	private: System::Void add_in_Pol2_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(iPol2_k->Text=="" || iPol2_a->Text=="" || iPol2_b->Text=="" || iPol2_c->Text=="")
				 {
					 MessageBox::Show("Введите значения");
					 return;
				 }
				 int k = Convert::ToInt32(iPol2_k->Text);
				 int a = Convert::ToInt32(iPol2_a->Text);
				 int b = Convert::ToInt32(iPol2_b->Text);
				 int c = Convert::ToInt32(iPol2_c->Text);

				 P2->add(new TMonom(k,a,b,c));
				 textBox2->Text=PolinomToStr(P2);
			 }
	private: System::Void delete_monom_Click(System::Object^  sender, System::EventArgs^  e)	
			 {
				 P1->DelLastMonom();
				 textBox1->Text=PolinomToStr(P1);
			 }
	private: System::Void delete_monom2_Click(System::Object^  sender, System::EventArgs^  e) {

				 P2->DelLastMonom();
				 textBox2->Text=PolinomToStr(P2);
			 }
	private: System::Void pol1_plus_pol2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text=="" || textBox2->Text=="")
					 return;
				 P3=new TPolinom(P1->add(*P2));
				 oresult->Text=PolinomToStr(P3);
			 }
	private: System::Void pol1_minus_pol2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text=="" || textBox2->Text=="")
					 return;
				 P3=new TPolinom(P1->sub(*P2));
				 oresult->Text=PolinomToStr(P3);
			 }
	private: System::Void pol2_minus_pol1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text=="" || textBox2->Text=="")
					 return;
				 P3=new TPolinom(P2->sub(*P1));
				 oresult->Text=PolinomToStr(P3);
			 }
	private: System::Void pol1_umn_pol2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text=="" || textBox2->Text=="")
					 return;
				 P3=new TPolinom(P1->umn(*P2));
				 oresult->Text=PolinomToStr(P3);
			 }
	private: System::Void P1_umn_cons_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text=="" || tconst->Text=="")
				 {
					 MessageBox::Show("Введите значения");
					 return;
				 }
				 int k = Convert::ToInt32(tconst->Text);
				 P3=new TPolinom(P1->umn(k));
				 oresult->Text=PolinomToStr(P3);
			 }
	private: System::Void pol2_umn_cons_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox2->Text=="" || tconst->Text=="")
				 {
					 MessageBox::Show("Введите значения");
					 return;
				 }
				 int k = Convert::ToInt32(tconst->Text);
				 P3=new TPolinom(P2->umn(k));
				 oresult->Text=PolinomToStr(P3);
			 }
	private: System::Void iPol2_k_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

//int a = Convert->ToInt32(textBox1->Text)
