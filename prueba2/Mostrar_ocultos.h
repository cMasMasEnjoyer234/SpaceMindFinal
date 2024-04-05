#pragma once

#include "user.h"
#include "Conceptos.h"
using namespace MySql::Data::MySqlClient;

namespace prueba2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Mostrar_ocultos : public System::Windows::Forms::Form
	{
	public:
		Mostrar_ocultos(void)
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
		~Mostrar_ocultos()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dtg_mostrarOcultos;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btn_volverr;
	private: System::Windows::Forms::TextBox^ txt_idmostrar;
	private: System::Windows::Forms::Button^ btn_mostrar;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mostrar_ocultos::typeid));
			this->dtg_mostrarOcultos = (gcnew System::Windows::Forms::DataGridView());
			this->btn_volverr = (gcnew System::Windows::Forms::Button());
			this->txt_idmostrar = (gcnew System::Windows::Forms::TextBox());
			this->btn_mostrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtg_mostrarOcultos))->BeginInit();
			this->SuspendLayout();
			// 
			// dtg_mostrarOcultos
			// 
			this->dtg_mostrarOcultos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtg_mostrarOcultos->Location = System::Drawing::Point(211, 98);
			this->dtg_mostrarOcultos->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dtg_mostrarOcultos->Name = L"dtg_mostrarOcultos";
			this->dtg_mostrarOcultos->ReadOnly = true;
			this->dtg_mostrarOcultos->Size = System::Drawing::Size(303, 311);
			this->dtg_mostrarOcultos->TabIndex = 0;
			// 
			// btn_volverr
			// 
			this->btn_volverr->Location = System::Drawing::Point(211, 477);
			this->btn_volverr->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_volverr->Name = L"btn_volverr";
			this->btn_volverr->Size = System::Drawing::Size(88, 25);
			this->btn_volverr->TabIndex = 1;
			this->btn_volverr->Text = L"Volver";
			this->btn_volverr->UseVisualStyleBackColor = true;
			this->btn_volverr->Click += gcnew System::EventHandler(this, &Mostrar_ocultos::btn_volverr_Click);
			// 
			// txt_idmostrar
			// 
			this->txt_idmostrar->Location = System::Drawing::Point(51, 265);
			this->txt_idmostrar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txt_idmostrar->Name = L"txt_idmostrar";
			this->txt_idmostrar->Size = System::Drawing::Size(87, 22);
			this->txt_idmostrar->TabIndex = 17;
			this->txt_idmostrar->TextChanged += gcnew System::EventHandler(this, &Mostrar_ocultos::txt_idmostrar_TextChanged);
			// 
			// btn_mostrar
			// 
			this->btn_mostrar->Location = System::Drawing::Point(51, 195);
			this->btn_mostrar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_mostrar->Name = L"btn_mostrar";
			this->btn_mostrar->Size = System::Drawing::Size(88, 40);
			this->btn_mostrar->TabIndex = 16;
			this->btn_mostrar->Text = L"mostrar pregunta";
			this->btn_mostrar->UseVisualStyleBackColor = true;
			this->btn_mostrar->Click += gcnew System::EventHandler(this, &Mostrar_ocultos::btn_mostrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(156, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 25);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Conceptos Ocultos";
			// 
			// Mostrar_ocultos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(548, 521);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_idmostrar);
			this->Controls->Add(this->btn_mostrar);
			this->Controls->Add(this->btn_volverr);
			this->Controls->Add(this->dtg_mostrarOcultos);
			this->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Mostrar_ocultos";
			this->Text = L"Mostrar Conceptos Ocultos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtg_mostrarOcultos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			cargar_bd();

		}
		//cargar_bd();
#pragma endregion
	private: System::Void btn_volverr_Click(System::Object^ sender, System::EventArgs^ e) {
		User::limit_windows = true;
		this->Visible = false;
	}

	public: void cargar_bd() {
		try {
			String^ con = "dataSource=localhost; username=root; password=; database=spacemind";
			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();

			String^ MysqlQuery = "SELECT Id,Pregunta FROM Conceptos WHERE Nivel='5'";
			MySqlCommand^ command = gcnew MySqlCommand(MysqlQuery, sqlConn);
			MySqlDataReader^ reader = command->ExecuteReader();

			DataTable^ dataTable = gcnew DataTable();
			dataTable->Load(reader);

			// Configurar el DataGridView con el DataTable cargado

			dtg_mostrarOcultos->DataSource = dataTable;


			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	
	}
	private: System::Void btn_mostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_idmostrar->Text != "")
		{
			int id = Convert::ToInt32(txt_idmostrar->Text);
			User::User(id);

			try {
				String^ con = "dataSource=localhost; username=root; password=; database=spacemind";

				MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
				sqlConn->Open();
				//Id,Pregunta, Fecha_repaso, Nivel 
				//int id_buscado = User::id;
				String^ sqlQuery = "SELECT * FROM Conceptos WHERE id = @id";
				MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
				command->Parameters->AddWithValue("id", id);


				MySqlDataReader^ reader = command->ExecuteReader();

				//String^ res = reader->GetString(4);

				while (reader->Read())
				{
					String^ pregunta = reader->GetString(3);
					MessageBox::Show(pregunta);
				}

				reader->Close();
				sqlConn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}

		}
		else {
			MessageBox::Show("Coloque id.");
		}
	}
private: System::Void txt_idmostrar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
