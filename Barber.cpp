#include <msclr/marshal_cppstd.h>
#include "Barber.h"
#include <io.h>

//#include "employees.h"




using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	barber::Barber form;
	Application::Run(% form);


}
/*
void start_program (void){
	staff persone;
	persone.phone = 124;
}
*/



System::Void barber::Barber::monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
{
	
	//MessageBox::Show(  ( monthCalendar1->TodayDate.DayOfYear));
	return System::Void();

}









/*
Void ўелчокЌа нопке(System::Object^ sender, System::EventArgs^ e)
{
	Button^ btn = safe_cast<Button^>(sender);
	btn->Text = btn->Name;

}*/

