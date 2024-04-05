#pragma once
#include "Conceptos.h"
#include "todo_list.h"
#include "user.h"
namespace prueba2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MENU
	/// </summary>
	public ref class MENU : public System::Windows::Forms::Form
	{
	public:
		MENU(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MENU()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_spacemind;


	protected:
	public:
		prueba2::Conceptos^ ver1 = gcnew prueba2::Conceptos();
		prueba2::todo_list^ ver2 = gcnew prueba2::todo_list();
	private: System::Windows::Forms::Button^ btn_alldo;
	public:

	public:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MENU::typeid));
			this->btn_spacemind = (gcnew System::Windows::Forms::Button());
			this->btn_alldo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_spacemind
			// 
			resources->ApplyResources(this->btn_spacemind, L"btn_spacemind");
			this->btn_spacemind->Name = L"btn_spacemind";
			this->btn_spacemind->UseVisualStyleBackColor = true;
			this->btn_spacemind->Click += gcnew System::EventHandler(this, &MENU::btn_spacemind_Click);
			// 
			// btn_alldo
			// 
			resources->ApplyResources(this->btn_alldo, L"btn_alldo");
			this->btn_alldo->Name = L"btn_alldo";
			this->btn_alldo->UseVisualStyleBackColor = true;
			this->btn_alldo->Click += gcnew System::EventHandler(this, &MENU::btn_alldo_Click);
			// 
			// MENU
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_alldo);
			this->Controls->Add(this->btn_spacemind);
			this->Name = L"MENU";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_spacemind_Click(System::Object^ sender, System::EventArgs^ e) {
		ver1->ShowDialog();	
	}
	private: System::Void btn_alldo_Click(System::Object^ sender, System::EventArgs^ e) {
		ver2->ShowDialog();
	}
};
}
