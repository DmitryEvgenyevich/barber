#pragma once
#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;
using namespace System;


//namespace staff {
	 class staff
	{
	public:
		staff(void) {
			lastname = "";
			fistname = "";
			patronymic = "";
			phone = "";
			birthday.tm_hour = 2000;
			birthday.tm_mday = 1;
			birthday.tm_mon = 1;
		}

		staff(string lastname, string fistname, string patronymic,  tm birthday, string phone ) {
			this->fistname = fistname;
			this->lastname = lastname;
			this->patronymic = patronymic;
			this->phone = phone;
			this->birthday.tm_year = birthday.tm_year;
			this->birthday.tm_mday = birthday.tm_mday;
			this->birthday.tm_mon = birthday.tm_mon;

		}


		public:
			string lastname;
			string fistname;
			string patronymic;
			string phone;
			tm birthday;


	};
//}

