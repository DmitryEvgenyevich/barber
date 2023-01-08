#pragma once

#include "employees.h"
#include <string>
#include <vector>
#include "staff.h"
#using<system.dll>

vector<staff> barber_staff;

namespace barber {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	void set_grafic(void);
	void barber_stef_load(void);
	

	/// <summary>
	/// Сводка для Barber
	/// </summary>
	public ref class Barber : public System::Windows::Forms::Form
	{
	public:
		Barber(void)
		{
			InitializeComponent();
			//employees^ forma;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Barber()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ panel1;














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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(945, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Barber::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(745, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Штат сотрудников";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Barber::button2_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(241, 13);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Barber::dateTimePicker1_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(671, 584);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"График";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(6, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(659, 533);
			this->panel1->TabIndex = 3;
			// 
			// Barber
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1237, 608);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Barber";
			this->Text = L"Barber";
			this->Load += gcnew System::EventHandler(this, &Barber::Barber_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void Barber_Load(System::Object^ sender, System::EventArgs^ e) {
		
		

		/*/Button^ button1 = gcnew Button(); // создаем контрол
		//button1->Location = System::Drawing::Point(1000, 50); //положение
		button1->Name = L"burtyjhrtyujrty1"; //имя
		button1->Size = System::Drawing::Size(80, 24); //размер
		button1->TabIndex = 0; //порядок обхода на форме
		button1->Text = L"Кнопка 1"; //надпись
		//groupBox3.Controls->Add(button1); // добавляем на форму

		groupBox2
		*/


		barber_stef_load();
		set_grafic();

		


	}
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//MessageBox::Show("gnncnhm");

		employees^ forma = gcnew employees;
		forma->ShowDialog();
		
	}
		
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}


	   void barber_stef_load(void)
	   {
		   int number = 0, rezult = 0;
		   String^ dataline;

		   //объявляем имя файла
		   string path = "barber_staff.txt";

		   //MessageBox::Show("sdgfsgsdgsdf");


		   try {
			   //Открываем вайл
			   System::IO::StreamReader^ file_barber_staff = System::IO::File::OpenText(gcnew String(path.c_str()));


			   while (1) {
				   barber_staff.push_back(staff());

				   //Запись фамилии
				   dataline = file_barber_staff->ReadLine();
				   if (dataline == nullptr) {		//если конец файла присфоить 
					   rezult = 1;					// переменной 1
					   break;
				   }
				   else//иначе
					   barber_staff.at(number).fistname = msclr::interop::marshal_as<string>(dataline);	//записать занные в вектор

				   //Запись имени
				   dataline = file_barber_staff->ReadLine();
				   if (dataline == nullptr) {		//если конец файла присфоить 
					   rezult = 2;					// переменной 2
					   break;
				   }
				   else//иначе
					   barber_staff.at(number).lastname = msclr::interop::marshal_as<string>(dataline);	//записать занные в вектор

				   //Запись отчества1
				   dataline = file_barber_staff->ReadLine();
				   if (dataline == nullptr) {		//если конец файла присфоить 
					   rezult = 2;					// переменной 2
					   break;
				   }
				   else//иначе
					   barber_staff.at(number).patronymic = msclr::interop::marshal_as<string>(dataline);	//записать занные в вектор

				   //Запись дня рождения
				   dataline = file_barber_staff->ReadLine();
				   if (dataline == nullptr) {		//если конец файла присфоить 
					   rezult = 2;					// переменной 1
					   break;
				   }
				   else//иначе
					   barber_staff.at(number).birthday.tm_mday = INT32::Parse(dataline);	//записать занные в вектор

				   //Запись месяца рождения
				   dataline = file_barber_staff->ReadLine();
				   if (dataline == nullptr) {		//если конец файла присфоить 
					   rezult = 2;					// переменной 1
					   break;
				   }
				   else//иначе
					   barber_staff.at(number).birthday.tm_mon = INT32::Parse(dataline);	//записать занные в вектор

				   //Запись года рождения
				   dataline = file_barber_staff->ReadLine();
				   if (dataline == nullptr) {		//если конец файла присфоить 
					   rezult = 2;					// переменной 1
					   break;
				   }
				   else//иначе
					   barber_staff.at(number).birthday.tm_year = INT32::Parse(dataline) + 1900;	//записать занные в вектор

				   //Запись телефона
				   dataline = file_barber_staff->ReadLine();
				   if (dataline == nullptr) {		//если конец файла присфоить 
					   rezult = 2;					// переменной 2
					   break;
				   }
				   else//иначе
					   barber_staff.at(number).phone = msclr::interop::marshal_as<string>(dataline);	//записать занные в вектор

				   number++;

			   }

			   if (rezult == 2) {
				   MessageBox::Show("Файл \"" + gcnew String(path.c_str()) + "\" поврежден");
				   //this->Close();



			   }
			   else
				   barber_staff.pop_back();



			   file_barber_staff->Close();


		   }
		   //Обработка исключенией
		   catch (Exception^ e)
		   {
			   MessageBox::Show("Неизвестная ошибка при чтении файла" + gcnew String(path.c_str()));
			   ;
		   }
	   }

	   
	   void set_grafic(void)
	   {
		   int x_size = 100, y_size = 26; //задаем размер ячейки
		   int x_point = 10, y_point = 10;	//задаем отступ от края
		   int number_of_columns = 3;		// задаем количество столбцов
		   int number_of_haircuts = 18;

		   //Заголовок первого столбца
		   Label^ label_title = gcnew Label();
		   label_title->Size = Drawing::Size(x_size, y_size * 2);
		   label_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			   static_cast<System::Byte>(204)));
		   label_title->Location = Drawing::Point(x_point, y_point);
		   label_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		   label_title->Text = "Время";
		   label_title->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		   panel1->Controls->Add(label_title);
		   	
		   //Заполняем первый столбец (столбец времени)
		   cli::array<Label^, 1 >^ lable_time;
		   lable_time = gcnew cli::array<Label^, 1>(number_of_haircuts);


		   for (int i = 0; i < number_of_haircuts; i++) {

			   lable_time[i] = gcnew Label();
			   lable_time[i]->Size = Drawing::Size(x_size, y_size);
			   lable_time[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   lable_time[i]->Location = Drawing::Point(x_point, y_point + 2 * y_size + y_size * i - 0);
			   if (i % 2 == 0) {
				   String^ text_temp = (10 + (i / 2)).ToString() + ":00-";
				   String^ text_temp1 = (10 + (i / 2)).ToString() + ":30";;
				   lable_time[i]->Text = text_temp + text_temp1;
			   }
			   else {
				   String^ text_temp = (10 + (i / 2)).ToString() + ":30-";
				   String^ text_temp1 = (11 + (i / 2)).ToString() + ":00";;
				   lable_time[i]->Text = text_temp + text_temp1;
			   }


			   lable_time[i]->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   panel1->Controls->Add(lable_time[i]);
		   }


		   // создаем 2 (внутреннюю панель) и всиаляем ее в первую 
		   
		   System::Windows::Forms::Panel^ panel2;
		   panel2= gcnew Panel();
		   panel2->AutoScroll = true;
		   panel2->Location = System::Drawing::Point(x_point-5, 0);
		   panel2->Name = L"panel2";
		   panel2->Height = panel1->Height;
		   panel2->Width = panel1->Width - y_size;
		   panel2->TabIndex = 0;
		   panel1->Controls->Add(panel2);
			
		   
		   //Заголовок остальных столбцов

		   Label^ label_title1 = gcnew Label();
		   label_title1->Size = Drawing::Size(x_size * number_of_columns, y_size);
		   label_title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			   static_cast<System::Byte>(204)));
		   label_title1->Location = Drawing::Point(x_point + x_size, y_point);
		   label_title1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		   label_title1->Text = "Мастер";
		   label_title1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		   panel2->Controls->Add(label_title1);

		   //Заголовок мастеров

		   cli::array<Label^, 1>^ lable_barber;
		   lable_barber = gcnew cli::array<Label^, 1>(number_of_columns);


		   for (int i = 0; i < number_of_columns; i++) {

			   lable_barber[i] = gcnew Label();
			   lable_barber[i]->Size = Drawing::Size(x_size, y_size);
			   lable_barber[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   lable_barber[i]->Location = Drawing::Point(x_point + x_size + x_size * i, y_point + y_size);
			   lable_barber[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   lable_barber[i]->Text = "Пупкин";

			   lable_barber[i]->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   panel2->Controls->Add(lable_barber[i]);
		   }


		   cli::array<Button^, 2>^ buttons;

		   buttons = gcnew cli::array<Button^, 2>(number_of_columns, number_of_haircuts);

		   for (int i = 0; i < number_of_columns; i++)
		   {
			   for (int j = 0; j < number_of_haircuts; j++)
			   {
				   Button^ btn = gcnew Button();
				   btn->Size = Drawing::Size(x_size, y_size);
				   btn->Location = Drawing::Point(x_point + x_size + x_size * i, y_point + y_size * 2 + y_size * j);
				   btn->Text = "O";
				   //btn->Click += gcnew EventHandler(this, &MyForm::ЩелчокНаКнопке);
				   btn->Name = i.ToString() + "_" + j.ToString();
				   panel2->Controls->Add(btn);
				   buttons[i, j] = btn;
			   }
		   }


	   }
};
	
}




