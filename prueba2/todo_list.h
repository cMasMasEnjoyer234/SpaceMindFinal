#pragma once
#include "Agregar_tarea.h"

namespace prueba2 {
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for todo_list
	/// </summary>
	public ref class todo_list : public System::Windows::Forms::Form
	{
	public:
		todo_list(void)
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
		~todo_list()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dtp_tareas;
	private: System::Windows::Forms::Button^ btn_mostrar;


	private: System::Windows::Forms::Label^ lbl_dia;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	public:
		prueba2::Agregar_tarea^ addver = gcnew prueba2::Agregar_tarea();
	private: System::Windows::Forms::Button^ btn_recargar;
	public:

	public:


	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(todo_list::typeid));
			this->dtp_tareas = (gcnew System::Windows::Forms::DataGridView());
			this->btn_mostrar = (gcnew System::Windows::Forms::Button());
			this->lbl_dia = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn_recargar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtp_tareas))->BeginInit();
			this->SuspendLayout();
			// 
			// dtp_tareas
			// 
			this->dtp_tareas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dtp_tareas->BackgroundColor = System::Drawing::Color::IndianRed;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dtp_tareas->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dtp_tareas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtp_tareas->GridColor = System::Drawing::Color::DimGray;
			this->dtp_tareas->Location = System::Drawing::Point(30, 78);
			this->dtp_tareas->Margin = System::Windows::Forms::Padding(16, 9, 4, 3);
			this->dtp_tareas->Name = L"dtp_tareas";
			this->dtp_tareas->Size = System::Drawing::Size(381, 247);
			this->dtp_tareas->TabIndex = 0;
			this->dtp_tareas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &todo_list::dtp_tareas_CellContentClick);
			// 
			// btn_mostrar
			// 
			this->btn_mostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_mostrar->Location = System::Drawing::Point(529, 136);
			this->btn_mostrar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_mostrar->Name = L"btn_mostrar";
			this->btn_mostrar->Size = System::Drawing::Size(88, 44);
			this->btn_mostrar->TabIndex = 1;
			this->btn_mostrar->Text = L"Mostrar_ocultos";
			this->btn_mostrar->UseVisualStyleBackColor = true;
			this->btn_mostrar->Click += gcnew System::EventHandler(this, &todo_list::btn_mostrar_Click);
			// 
			// lbl_dia
			// 
			this->lbl_dia->AutoSize = true;
			this->lbl_dia->BackColor = System::Drawing::Color::Transparent;
			this->lbl_dia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_dia->Location = System::Drawing::Point(335, 21);
			this->lbl_dia->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_dia->MaximumSize = System::Drawing::Size(140, 40);
			this->lbl_dia->MinimumSize = System::Drawing::Size(23, 20);
			this->lbl_dia->Name = L"lbl_dia";
			this->lbl_dia->Size = System::Drawing::Size(76, 25);
			this->lbl_dia->TabIndex = 2;
			this->lbl_dia->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 348);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Agregar tarea";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &todo_list::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 348);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(88, 44);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Borrar tarea";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(256, 348);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 44);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Editar tarea";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// btn_recargar
			// 
			this->btn_recargar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_recargar->Location = System::Drawing::Point(529, 212);
			this->btn_recargar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_recargar->Name = L"btn_recargar";
			this->btn_recargar->Size = System::Drawing::Size(88, 44);
			this->btn_recargar->TabIndex = 6;
			this->btn_recargar->Text = L"recargar";
			this->btn_recargar->UseVisualStyleBackColor = true;
			this->btn_recargar->Click += gcnew System::EventHandler(this, &todo_list::btn_recargar_Click);
			// 
			// todo_list
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(726, 434);
			this->Controls->Add(this->btn_recargar);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbl_dia);
			this->Controls->Add(this->btn_mostrar);
			this->Controls->Add(this->dtp_tareas);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"todo_list";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"todo_list";
			//this->Load += gcnew System::EventHandler(this, &todo_list::todo_list_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtp_tareas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			cargar_bd();
			borrar_temporales();
		}
		//cargar_bd();
#pragma endregion
	public: void cargar_bd() {
		DateTime TheDate = DateTime::Today;
		String^ day = TheDate.DayOfWeek.ToString();
		lbl_dia->Text = day;


		try {
			String^ con = "dataSource=localhost; username=root; password=; database=spacemind";

			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();
			String^ sqlQuery = "SELECT tareas, Prioridad FROM tareas WHERE Dia = @Dia AND tareas_ocultas = 0 AND Prioridad BETWEEN 1 AND 4 ORDER BY Prioridad ASC";
			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("Dia", day);

			MySqlDataReader^ reader = command->ExecuteReader();

			DataTable^ dataTable = gcnew DataTable();
			dataTable->Load(reader);


			dtp_tareas->DataSource = dataTable;

			//String^ res = reader->GetString(4);



			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		//User::limit_windows = true;
	}
	public: void borrar_temporales() {
		DateTime TheDate = DateTime::Today;
		String^ day = TheDate.DayOfWeek.ToString();
		try {
			String^ con = "dataSource=localhost; username=root; password=; database=spacemind";

			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();
			String^ sqlQuery = "DELETE FROM tareas WHERE Dia != @Dia AND Tipo_tarea = 1";
			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("Dia", day);

			MySqlDataReader^ reader = command->ExecuteReader();

			DataTable^ dataTable = gcnew DataTable();
			dataTable->Load(reader);


			dtp_tareas->DataSource = dataTable;

			//String^ res = reader->GetString(4);



			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		cargar_bd();
	}
	private: System::Void dtp_tareas_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ contenidoTabla = "";

		int row = e->RowIndex;
		int col = e->ColumnIndex;

		contenidoTabla += Convert::ToString(dtp_tareas->Rows[row]->Cells[col]->Value);

		try {
			String^ con = "dataSource=localhost; username=root; password=; database=spacemind";

			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();
			String^ sqlQuery = "UPDATE tareas SET tareas_ocultas = 1 WHERE tareas = '" + contenidoTabla + "'";
			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);

			MySqlDataReader^ reader = command->ExecuteReader();

			DataTable^ dataTable = gcnew DataTable();
			dataTable->Load(reader);


			dtp_tareas->DataSource = dataTable;

			//String^ res = reader->GetString(4);



			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		cargar_bd();
	}
	private: System::Void btn_mostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ con = "dataSource=localhost; username=root; password=; database=spacemind";

			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();
			String^ sqlQuery = "UPDATE tareas SET tareas_ocultas = 0";
			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);

			MySqlDataReader^ reader = command->ExecuteReader();

			DataTable^ dataTable = gcnew DataTable();
			dataTable->Load(reader);


			dtp_tareas->DataSource = dataTable;

			//String^ res = reader->GetString(4);



			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		cargar_bd();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		addver->ShowDialog();
	}
	//private: System::Void todo_list_Load(System::Object^ sender, System::EventArgs^ e) {
		//cargar_bd();
		//borrar_temporales();
	//}

	private: System::Void btn_recargar_Click(System::Object^ sender, System::EventArgs^ e) {
		cargar_bd();
		borrar_temporales();
	}
};
}
