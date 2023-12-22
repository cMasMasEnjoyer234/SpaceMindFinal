#include "Conceptos.h"
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
	prueba2::Conceptos Conceptos;
	//prueba2::MiForma MiForma;

	
	Conceptos.ShowDialog();
	//MierdaForm.cargar_bd();
	//MiForma.ShowDialog();
	//User^ user = MierdaForm.user;


	
	/*
	if (user != nullptr){
		MessageBox::Show("funciono mono!@->" + user->nombre,
			"mainn.cpp", MessageBoxButtons::OK);

	}
	else{
		MessageBox::Show("no pesco mono!@->" + user->nombre,
			"mainn.cpp", MessageBoxButtons::OK);

	}
	*/


	/*
		MierdaForm.ShowDialog();
	User^ user = MierdaForm.user;

	if (user != nullptr){
		MessageBox::Show("funciono mono!@->" + user->nombre,
			"mainn.cpp", MessageBoxButtons::OK);

	}
	else{
		MessageBox::Show("no pesco mono!@->" + user->nombre,
			"mainn.cpp", MessageBoxButtons::OK);

	}
	*/


	/*
	TextBox^ inputTextBox = gcnew TextBox();
	inputTextBox->Multiline = true;

	// Crea un MessageBox con un cuadro de texto de entrada
	DialogResult result = MessageBox::Show(inputTextBox, "Introduce un texto:", "Mensaje con entrada de texto", MessageBoxButtons::OKCancel);

	// Muestra el texto ingresado si el usuario hace clic en OK
	if (result == DialogResult::OK)
	{
		String^ userInput = inputTextBox->Text;
		MessageBox::Show("Texto ingresado: " + userInput);
	}
	
	*/



}