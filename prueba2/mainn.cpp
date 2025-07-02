#include "MENU.h"
//include <string>
//#include "MiForma.h"
//#include "user.h"


using namespace System;	
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;

User::User(int id_)
{
	this->id = id_;
}
void User::set_res(String^ res_)
{
	res = res_;
}



int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	prueba2::MENU^ ver = gcnew prueba2::MENU();
	//prueba2::MiForma MiForma;

	
	ver->ShowDialog();


}
