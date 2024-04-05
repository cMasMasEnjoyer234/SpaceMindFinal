#pragma once

#include "user.h"
#include "Repasar.h"
#include "Mostrar_ocultos.h"
#include "Agregar.h"
#include "Editar.h"
using namespace MySql::Data::MySqlClient;
//#include <vcclr.h>


namespace prueba2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MierdaForm
	/// </summary>
	public ref class Conceptos : public System::Windows::Forms::Form
	{
	public:
		Conceptos(void)
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
		~Conceptos()
		{
			if (components)
			{
				delete components;
			}
		}









	public: System::Windows::Forms::DataGridView^ dtg_bd;



	private: System::Windows::Forms::Button^ btn_mostrar;
	private: System::Windows::Forms::DataGridView^ dtg_bd_repasar;
	private: System::Windows::Forms::Label^ lbl_dia;
	private: System::Windows::Forms::Label^ lbl_fechatry;
	private: System::Windows::Forms::Button^ btn_verConcepto;

	private: System::Windows::Forms::TextBox^ txt_idmostrar;
	private: System::Windows::Forms::Button^ btn_mostrarOcultos;
	private: System::Windows::Forms::Button^ btn_borrar;

	private: System::Windows::Forms::Button^ btn_cargar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_editar;

	private: System::Windows::Forms::DateTimePicker^ dtp_actual;

















	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Conceptos::typeid));
			this->dtg_bd = (gcnew System::Windows::Forms::DataGridView());
			this->btn_mostrar = (gcnew System::Windows::Forms::Button());
			this->dtg_bd_repasar = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_dia = (gcnew System::Windows::Forms::Label());
			this->lbl_fechatry = (gcnew System::Windows::Forms::Label());
			this->btn_verConcepto = (gcnew System::Windows::Forms::Button());
			this->txt_idmostrar = (gcnew System::Windows::Forms::TextBox());
			this->btn_mostrarOcultos = (gcnew System::Windows::Forms::Button());
			this->btn_borrar = (gcnew System::Windows::Forms::Button());
			this->btn_cargar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_editar = (gcnew System::Windows::Forms::Button());
			this->dtp_actual = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtg_bd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtg_bd_repasar))->BeginInit();
			this->SuspendLayout();
			// 
			// dtg_bd
			// 
			this->dtg_bd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtg_bd->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dtg_bd->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dtg_bd->BackgroundColor = System::Drawing::Color::DimGray;
			this->dtg_bd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtg_bd->Location = System::Drawing::Point(441, 44);
			this->dtg_bd->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dtg_bd->Name = L"dtg_bd";
			this->dtg_bd->ReadOnly = true;
			this->dtg_bd->Size = System::Drawing::Size(653, 287);
			this->dtg_bd->TabIndex = 7;
			this->dtg_bd->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Conceptos::dtg_bd_CellContentClick);
			// 
			// btn_mostrar
			// 
			this->btn_mostrar->Location = System::Drawing::Point(60, 97);
			this->btn_mostrar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_mostrar->Name = L"btn_mostrar";
			this->btn_mostrar->Size = System::Drawing::Size(88, 40);
			this->btn_mostrar->TabIndex = 9;
			this->btn_mostrar->Text = L"mostrar pregunta";
			this->btn_mostrar->UseVisualStyleBackColor = true;
			this->btn_mostrar->Click += gcnew System::EventHandler(this, &Conceptos::btn_mostrar_Click);
			// 
			// dtg_bd_repasar
			// 
			this->dtg_bd_repasar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtg_bd_repasar->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dtg_bd_repasar->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dtg_bd_repasar->BackgroundColor = System::Drawing::Color::DimGray;
			this->dtg_bd_repasar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtg_bd_repasar->Location = System::Drawing::Point(441, 365);
			this->dtg_bd_repasar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dtg_bd_repasar->Name = L"dtg_bd_repasar";
			this->dtg_bd_repasar->ReadOnly = true;
			this->dtg_bd_repasar->Size = System::Drawing::Size(649, 150);
			this->dtg_bd_repasar->TabIndex = 10;
			this->dtg_bd_repasar->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Conceptos::dtg_bd_repasar_CellContentClick_1);
			// 
			// lbl_dia
			// 
			this->lbl_dia->AutoSize = true;
			this->lbl_dia->BackColor = System::Drawing::Color::Transparent;
			this->lbl_dia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->lbl_dia->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_dia->Location = System::Drawing::Point(301, 556);
			this->lbl_dia->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_dia->Name = L"lbl_dia";
			this->lbl_dia->Size = System::Drawing::Size(85, 29);
			this->lbl_dia->TabIndex = 11;
			this->lbl_dia->Text = L"label1";
			// 
			// lbl_fechatry
			// 
			this->lbl_fechatry->AutoSize = true;
			this->lbl_fechatry->BackColor = System::Drawing::Color::Transparent;
			this->lbl_fechatry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->lbl_fechatry->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_fechatry->Location = System::Drawing::Point(59, 556);
			this->lbl_fechatry->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_fechatry->Name = L"lbl_fechatry";
			this->lbl_fechatry->Size = System::Drawing::Size(158, 26);
			this->lbl_fechatry->TabIndex = 12;
			this->lbl_fechatry->Text = L"Fecha Actual:";
			// 
			// btn_verConcepto
			// 
			this->btn_verConcepto->BackColor = System::Drawing::Color::Transparent;
			this->btn_verConcepto->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_verConcepto->Location = System::Drawing::Point(172, 365);
			this->btn_verConcepto->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_verConcepto->Name = L"btn_verConcepto";
			this->btn_verConcepto->Size = System::Drawing::Size(88, 44);
			this->btn_verConcepto->TabIndex = 13;
			this->btn_verConcepto->Text = L"Ver Respuesta";
			this->btn_verConcepto->UseVisualStyleBackColor = false;
			this->btn_verConcepto->Click += gcnew System::EventHandler(this, &Conceptos::btn_verConcepto_Click);
			// 
			// txt_idmostrar
			// 
			this->txt_idmostrar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_idmostrar->Location = System::Drawing::Point(173, 287);
			this->txt_idmostrar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txt_idmostrar->Name = L"txt_idmostrar";
			this->txt_idmostrar->Size = System::Drawing::Size(87, 20);
			this->txt_idmostrar->TabIndex = 15;
			// 
			// btn_mostrarOcultos
			// 
			this->btn_mostrarOcultos->Location = System::Drawing::Point(173, 163);
			this->btn_mostrarOcultos->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_mostrarOcultos->Name = L"btn_mostrarOcultos";
			this->btn_mostrarOcultos->Size = System::Drawing::Size(88, 38);
			this->btn_mostrarOcultos->TabIndex = 16;
			this->btn_mostrarOcultos->Text = L"Mostrar ocultos";
			this->btn_mostrarOcultos->UseVisualStyleBackColor = true;
			this->btn_mostrarOcultos->Click += gcnew System::EventHandler(this, &Conceptos::btn_mostrarOcultos_Click);
			// 
			// btn_borrar
			// 
			this->btn_borrar->BackColor = System::Drawing::Color::White;
			this->btn_borrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_borrar.Image")));
			this->btn_borrar->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_borrar->Location = System::Drawing::Point(174, 109);
			this->btn_borrar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_borrar->Name = L"btn_borrar";
			this->btn_borrar->Size = System::Drawing::Size(87, 28);
			this->btn_borrar->TabIndex = 17;
			this->btn_borrar->Text = L"Borrar";
			this->btn_borrar->UseVisualStyleBackColor = false;
			this->btn_borrar->Click += gcnew System::EventHandler(this, &Conceptos::btn_cargar_Click);
			// 
			// btn_cargar
			// 
			this->btn_cargar->Location = System::Drawing::Point(149, 58);
			this->btn_cargar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_cargar->Name = L"btn_cargar";
			this->btn_cargar->Size = System::Drawing::Size(140, 24);
			this->btn_cargar->TabIndex = 19;
			this->btn_cargar->Text = L"Cargar BD";
			this->btn_cargar->UseVisualStyleBackColor = true;
			this->btn_cargar->Click += gcnew System::EventHandler(this, &Conceptos::btn_cargar_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(436, 12);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 26);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Conceptos:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(436, 334);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(239, 26);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Conceptos a repasar:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(113, 280);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 26);
			this->label3->TabIndex = 22;
			this->label3->Text = L"ID:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 163);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 38);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Agregar Concepto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Conceptos::button1_Click);
			// 
			// btn_editar
			// 
			this->btn_editar->Location = System::Drawing::Point(285, 99);
			this->btn_editar->Name = L"btn_editar";
			this->btn_editar->Size = System::Drawing::Size(82, 38);
			this->btn_editar->TabIndex = 25;
			this->btn_editar->Text = L"Editar Conceptos";
			this->btn_editar->UseVisualStyleBackColor = true;
			this->btn_editar->Click += gcnew System::EventHandler(this, &Conceptos::btn_editar_Click);
			// 
			// dtp_actual
			// 
			this->dtp_actual->Location = System::Drawing::Point(894, 598);
			this->dtp_actual->Name = L"dtp_actual";
			this->dtp_actual->Size = System::Drawing::Size(200, 20);
			this->dtp_actual->TabIndex = 27;
			this->dtp_actual->Visible = false;
			// 
			// Conceptos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1140, 632);
			this->Controls->Add(this->dtp_actual);
			this->Controls->Add(this->btn_editar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_cargar);
			this->Controls->Add(this->btn_borrar);
			this->Controls->Add(this->btn_mostrarOcultos);
			this->Controls->Add(this->txt_idmostrar);
			this->Controls->Add(this->btn_verConcepto);
			this->Controls->Add(this->lbl_fechatry);
			this->Controls->Add(this->lbl_dia);
			this->Controls->Add(this->dtg_bd_repasar);
			this->Controls->Add(this->btn_mostrar);
			this->Controls->Add(this->dtg_bd);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Conceptos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Conceptos";
			this->Load += gcnew System::EventHandler(this, &Conceptos::Conceptos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtg_bd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtg_bd_repasar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			cargar_bd();
			cargar_bd_repasar();
		}

		//cargar_bd();
		//cargar_bd_repasar();
#pragma endregion

	public: void cargar_bd() {
		try {
			String^ con = "dataSource=localhost; username=root; password=; database=spacemind";
			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();

			String^ MysqlQuery = "SELECT Id,Pregunta, Fecha_repaso, Nivel FROM Conceptos WHERE NOT Nivel = '5'";
			MySqlCommand^ command = gcnew MySqlCommand(MysqlQuery, sqlConn);
			MySqlDataReader^ reader = command->ExecuteReader();

			DataTable^ dataTable = gcnew DataTable();
			dataTable->Load(reader);

			// Configurar el DataGridView con el DataTable cargado

			dtg_bd->DataSource = dataTable;


			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		User::limit_windows = true;
	}

	public: void cargar_bd_repasar() {
		try {
			String^ connString = "dataSource=localhost; username=root; password=; database=spacemind";
			MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);
			sqlConn->Open();

			DateTime thedate = DateTime::Today;
			int dia = thedate.Day;
			int mes = thedate.Month;
			String^ fecha;


			if (dia < 10 && mes < 10)
			{
				fecha = "0" + thedate.Day.ToString() + "/0" + thedate.Month.ToString() + "/" + thedate.Year.ToString();
			}
			else if (dia >= 10 && mes >= 10)
			{
				fecha = thedate.Day.ToString() + "/" + thedate.Month.ToString() + "/" + thedate.Year.ToString();
			}
			else if (dia < 10 && mes >= 10)
			{
				fecha = "0" + thedate.Day.ToString() + "/" + thedate.Month.ToString() + "/" + thedate.Year.ToString();
			}
			else if (dia >= 10 && mes < 10)
			{
				fecha = thedate.Day.ToString() + "/0" + thedate.Month.ToString() + "/" + thedate.Year.ToString();
			}



			String^ sqlQuery = "SELECT Id, Pregunta, Fecha_repaso, Nivel FROM Conceptos WHERE Fecha_repaso LIKE '"+ fecha +"' AND NOT Nivel = '5'";
			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
			MySqlDataReader^ reader = command->ExecuteReader();

			DataTable^ dataTable = gcnew DataTable();
			dataTable->Load(reader);


			dtg_bd_repasar->DataSource = dataTable;

			reader->Close();
			sqlConn->Close();

			lbl_dia->Text = fecha;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	// mostrar pregunta
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
				String^ sqlQuery = "SELECT * FROM conceptos WHERE id = @id";
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
	// ver respuest / repasar
	private: System::Void btn_verConcepto_Click(System::Object^ sender, System::EventArgs^ e) {
		prueba2::Repasar^ seg = gcnew prueba2::Repasar();
		
		if (txt_idmostrar->Text != "")
		{
			User::limit_windows = false;
			int id = Convert::ToInt32(txt_idmostrar->Text);
			//User::User(id);
		
			try {
				String^ connString = "dataSource=localhost; username=root; password=; database=spacemind";
				MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);
				sqlConn->Open();
				//Id,Pregunta, Fecha_repaso, Nivel 
				
				String^ sqlQuery = "SELECT * FROM Conceptos WHERE id = @id";
				MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
				command->Parameters->AddWithValue("id", id);


				MySqlDataReader^ reader = command->ExecuteReader();

				//String^ res = reader->GetString(4);

				while (reader->Read())
				{
					String^ id = Convert::ToString(reader->GetInt32(0));
					String^ nivel = reader->GetString(2);
					String^ pregunta = reader->GetString(3);
					String^ res = reader->GetString(4);
					seg->lbl_idActual->Text = id;
					seg->txtr_pregunta->Text = pregunta;
					seg->txtr_res->Text = res;
					seg->lbl_nivelActual->Text = nivel;
				}

				reader->Close();
				sqlConn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			seg->ShowDialog();
			
		}
		else {
			MessageBox::Show("Coloque id.");
		}
		

	}
	// mostrar ocultos
	private: System::Void btn_mostrarOcultos_Click(System::Object^ sender, System::EventArgs^ e) {

		prueba2::Mostrar_ocultos^ ver = gcnew prueba2::Mostrar_ocultos();
		ver->ShowDialog();
		
	}
	// borrar concepto
	private: System::Void btn_cargar_Click(System::Object^ sender, System::EventArgs^ e) {
		int a = 0;
		if (txt_idmostrar->Text != "" && User::limit_windows == true)
		{
			User::limit_windows = false;
			int id = Convert::ToInt32(txt_idmostrar->Text);
			User::User(id);
			

			try {
				String^ con = "dataSource=localhost; username=root; password=; database=spacemind";

				MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
				sqlConn->Open();
				//Id,Pregunta, Fecha_repaso, Nivel 
				//int id_buscado = User::id;
				String^ sqlQuery = "DELETE FROM Conceptos WHERE id = ?";
				MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
				command->Parameters->AddWithValue("id", id);


				MySqlDataReader^ reader = command->ExecuteReader();

				//String^ res = reader->GetString(4);

				while (reader->Read())
				{
					String^ pregunta = reader->GetString(1);
					MessageBox::Show(pregunta);
				}
				
				reader->Close();
				sqlConn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			a++;
			cargar_bd();
			cargar_bd_repasar();
			
		}
		else {
			MessageBox::Show("Coloque id.");
		}
		if (a == 1)
		{
			MessageBox::Show("Concepto borrado.");
		}
	}
	// cargar bd
	private: System::Void btn_cargar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		cargar_bd();
		cargar_bd_repasar();
	}

	//agregar conceptos
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		prueba2::Agregar^ add = gcnew prueba2::Agregar();
		add->ShowDialog();

	}
	// editar conceptos
	private: System::Void btn_editar_Click(System::Object^ sender, System::EventArgs^ e) {
		prueba2::Editar^ ver = gcnew prueba2::Editar();

		if (txt_idmostrar->Text != "")
		{
			//User::limit_windows = false;
			int id = Convert::ToInt32(txt_idmostrar->Text);
			//User::User(id);

			try {
				String^ connString = "dataSource=localhost; username=root; password=; database=spacemind";
				MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);
				sqlConn->Open();
				 

				String^ sqlQuery = "SELECT * FROM Conceptos WHERE id = @id";
				MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
				command->Parameters->AddWithValue("id", id);


				MySqlDataReader^ reader = command->ExecuteReader();


				while (reader->Read())
				{
					String^ id = Convert::ToString(reader->GetInt32(0));
					String^ fecha = reader->GetString(1);
					String^ nivel = reader->GetString(2);
					String^ pregunta = reader->GetString(3);
					String^ res = reader->GetString(4);
					ver->lbl_fechaActualA->Text = fecha;
					ver->lbl_ida->Text = id;
					ver->txtr_preguntaActual->Text = pregunta;
					ver->txtr_resActual->Text = res;
					ver->lbl_nivelActual->Text = nivel;
				}

				reader->Close();
				sqlConn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			ver->ShowDialog();
		}
		else {
			MessageBox::Show("Coloque id.");
		}
	}
	
	private: System::Void dtg_bd_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dtg_bd_repasar_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	
private: System::Void Conceptos_Load(System::Object^ sender, System::EventArgs^ e) {
}
};



}
