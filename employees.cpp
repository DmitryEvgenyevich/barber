
#include <msclr/marshal_cppstd.h>
#include "employees.h"
#include <io.h>


//#include <msclr\marshal_cppstd.h>
//#include<marshal_cppstd.h>


using namespace System;
using namespace System::Windows::Forms;



// обработка кнопки "Создать"
System::Void barber::employees::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int number;
	tm temp;
	bool dublicat=false;
	
	
	
	// проверка ошибок в запелнении полей
	if (error_checking(textBox1->Text, textBox2->Text, textBox3->Text,
		maskedTextBox1->Text, maskedTextBox2->Text)!=0) {

		// Если есть ошибка то выходим из обработки кнопки (никаких действий не предпринимаем)
		return System::Void();
		
	}
	else {
		

		
		temp.tm_mday = Int32::Parse(maskedTextBox1->Text->Substring(0, 2));
		temp.tm_mon = Int32::Parse(maskedTextBox1->Text->Substring(3, 2));
		temp.tm_year = Int32::Parse(maskedTextBox1->Text->Substring(6, maskedTextBox1->Text->Length-6))-1900;
		

		//преобразуем String^ в std::string
		string lastname = msclr::interop::marshal_as<string>(textBox2->Text);
		string fistname = msclr::interop::marshal_as<string>(textBox1->Text);
		string patronymic = msclr::interop::marshal_as<string>(textBox3->Text);
		string phone = msclr::interop::marshal_as<string>(maskedTextBox2->Text);
		

		//проверка, может такой сотрудник есть
		if(barber_staff.size()!=0)
			for (number = 0;number< barber_staff.size();number++)
				if(fistname ==barber_staff.at(number).fistname)
					if (lastname == barber_staff.at(number).lastname)
						if (patronymic == barber_staff.at(number).patronymic)
							if (temp.tm_year == barber_staff.at(number).birthday.tm_year)
								if (temp.tm_mon == barber_staff.at(number).birthday.tm_mon)
									if (temp.tm_mday == barber_staff.at(number).birthday.tm_mday) {
										dublicat = true;
										break;
									}
								
		if(dublicat)
			MessageBox::Show("Такой сотрудник уже есть", "Ошибка");
		else {
			barber_staff.push_back(staff(lastname, fistname, patronymic, temp, phone));
			dublicat= barber_seve_to_file("barber_staff.txt");
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			maskedTextBox1->Text = "";
			maskedTextBox2->Text = "";
		}
			
		//создаем новый элемент вектора сотрудника
		
			
		
	}
	
	
	
	
	//barber_staff.at(0).fistname = "hklhj";
	//staff kuku;
	//kuku.are = 40;
	//
	//MessageBox(barber_staff.size);
	return System::Void();
}

System::Void barber::employees::button2_Click(System::Object^ sender, System::EventArgs^ e)
{

	return System::Void();
}



int error_checking(String^ text1, String^ text2, String^ text3, String^ text4, String^ text5)
{
	int dey, mon, year, mon_dey, error_check=0, err_data=0;
	System::String^ textt="";
	
	//throw gcnew System::NotImplementedException();
	if (text1 == "")
		textt="\"Фамилия\"";
		//MessageBox::Show("Поле \"Фамилия\" не заполнено","Ошибка");
	if (text2 == "") {
		if (textt == "") {
			textt = "\"Имя\"";
		}
		else
			textt += ", \"Имя\"";
		//error_check += 2;
		//MessageBox::Show("Поле \"Имя\" не заполнено", "Ошибка");
	}
	if (text3 == "")

		if (textt == "") {
			textt = "\"Имя\"";
		}
		else {
			textt += ", \"Отчество\"";
		}
		//error_check += 4;
		//MessageBox::Show("Поле \"Отчество\" не заполнено", "Ошибка");
	

	//Преобразуем строковую дату в число день, месяц, год

	try {
		dey = Int32::Parse(text4->Substring(0, 2));
		//MessageBox::Show(String::Format("{0}", dey));
	}
	catch(...){
		err_data = 8;
		//MessageBox::Show("Поле \"Дата рождения\" не корректно", "Ошибка");
	}
	
	try {
		mon = Int32::Parse(text4->Substring(3, 2));
		//MessageBox::Show(String::Format("{0}", mon));
	}
	catch (...) {
		err_data = 8;
		//MessageBox::Show("Поле \"Дата рождения\" не корректно", "Ошибка");
	}

	try {
		year = Int32::Parse(text4->Substring(6, text4->Length - 6));
		//MessageBox::Show(String::Format("{0}", year));
	}
	catch (...) {
		err_data = 8;
		//MessageBox::Show("Поле \"Дата рождения\" не корректно", "Ошибка");
	}
		
	// проверяем корректность даты


	switch (mon)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: {
		mon_dey = 31;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11: {
		mon_dey = 30;
		//MessageBox::Show("Поле \"Дата рождения\" не корректно", "Ошибка");
		break;
	}
	case 2: {
		if (year % 4 != 0) {
			mon_dey = 28;
		}
		else {
			mon_dey = 29;
			if (year % 100 == 0) {
				mon_dey = 28;
				if (year % 400 == 0) {
					mon_dey = 29;
				}

			}
		}
		break;
	}


	default:
		break;
	}
	
	if (mon<0||mon>12||dey<0||dey>mon_dey||year<1950||year>2023)
		err_data = 8;
	
	if (err_data == 8) {
		if (textt == "") {
			textt = "\"Дата рождения\"";
		}
		else{
			textt += ", \"Дата рождения\"";
		}
	}
		
	
	//MessageBox::Show(text5);


	if (textt != "") {
		MessageBox::Show("Поле " + textt + " заполнены не верно");
		return 1;
	}
	else
		return 0;

}

bool barber_seve_to_file(string path)
{
	int temp;
	
	
	
	//Для исключения ошибок
	try {
		//Открываем вайл
		System::IO::StreamWriter^ file_barber_staff =
			gcnew System::IO::StreamWriter(gcnew String(path.c_str()), true);

		temp = barber_staff.size() - 1;
		file_barber_staff->WriteLine(gcnew String( barber_staff.at(temp).fistname.c_str()));
		file_barber_staff->WriteLine(gcnew String(barber_staff.at(temp).lastname.c_str()));
		file_barber_staff->WriteLine(gcnew String(barber_staff.at(temp).patronymic.c_str()));
		file_barber_staff->WriteLine((barber_staff.at(temp).birthday.tm_mday.ToString()));
		file_barber_staff->WriteLine((barber_staff.at(temp).birthday.tm_mon.ToString()));
		file_barber_staff->WriteLine((barber_staff.at(temp).birthday.tm_year.ToString()));
		file_barber_staff->WriteLine(gcnew String(barber_staff.at(temp).phone.c_str()));



		
		file_barber_staff->Close();
		return true;
		
	}
	//Обработка исключенией
	catch (Exception^ e)
	{
		MessageBox::Show("Неизвестная ошибка при чтении файла" + gcnew String(path.c_str()));
		return false;
	}


	

	
}
