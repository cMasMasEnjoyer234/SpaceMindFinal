#pragma once

#include "user.h"
using namespace MySql::Data::MySqlClient;

namespace prueba2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Agregar
	/// </summary>
	public ref class Agregar : public System::Windows::Forms::Form
	{
	public:
		Agregar(void)
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
		~Agregar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dtp_fechaAgregar;
	public: System::Windows::Forms::RichTextBox^ txtr_preguntaAgregar;
	public: System::Windows::Forms::RichTextBox^ txtr_resAgregar;
	private:


	private:

	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_agregar;
	private: System::Windows::Forms::Button^ btn_volver;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Agregar::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dtp_fechaAgregar = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtr_preguntaAgregar = (gcnew System::Windows::Forms::RichTextBox());
			this->txtr_resAgregar = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_agregar = (gcnew System::Windows::Forms::Button());
			this->btn_volver = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 16, System::Drawing::FontStyle::Italic));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(161, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Agregar Concepto";
			this->label1->UseWaitCursor = true;
			// 
			// dtp_fechaAgregar
			// 
			this->dtp_fechaAgregar->CalendarForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dtp_fechaAgregar->CalendarMonthBackground = System::Drawing::Color::Transparent;
			this->dtp_fechaAgregar->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dtp_fechaAgregar->Location = System::Drawing::Point(22, 213);
			this->dtp_fechaAgregar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dtp_fechaAgregar->Name = L"dtp_fechaAgregar";
			this->dtp_fechaAgregar->Size = System::Drawing::Size(237, 22);
			this->dtp_fechaAgregar->TabIndex = 13;
			this->dtp_fechaAgregar->UseWaitCursor = true;
			// 
			// txtr_preguntaAgregar
			// 
			this->txtr_preguntaAgregar->Location = System::Drawing::Point(22, 89);
			this->txtr_preguntaAgregar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtr_preguntaAgregar->Name = L"txtr_preguntaAgregar";
			this->txtr_preguntaAgregar->Size = System::Drawing::Size(186, 64);
			this->txtr_preguntaAgregar->TabIndex = 15;
			this->txtr_preguntaAgregar->Text = L"";
			this->txtr_preguntaAgregar->UseWaitCursor = true;
			// 
			// txtr_resAgregar
			// 
			this->txtr_resAgregar->Location = System::Drawing::Point(267, 89);
			this->txtr_resAgregar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtr_resAgregar->Name = L"txtr_resAgregar";
			this->txtr_resAgregar->Size = System::Drawing::Size(261, 308);
			this->txtr_resAgregar->TabIndex = 14;
			this->txtr_resAgregar->Text = L"";
			this->txtr_resAgregar->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(19, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 14);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Coloque Pregunta:";
			this->label2->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(19, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 14);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Coloque Fecha:";
			this->label3->UseWaitCursor = true;
			// 
			// btn_agregar
			// 
			this->btn_agregar->Location = System::Drawing::Point(22, 328);
			this->btn_agregar->Name = L"btn_agregar";
			this->btn_agregar->Size = System::Drawing::Size(88, 23);
			this->btn_agregar->TabIndex = 18;
			this->btn_agregar->Text = L"Agregar";
			this->btn_agregar->UseVisualStyleBackColor = true;
			this->btn_agregar->UseWaitCursor = true;
			this->btn_agregar->Click += gcnew System::EventHandler(this, &Agregar::btn_agregar_Click);
			// 
			// btn_volver
			// 
			this->btn_volver->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btn_volver->Location = System::Drawing::Point(120, 328);
			this->btn_volver->Name = L"btn_volver";
			this->btn_volver->Size = System::Drawing::Size(88, 23);
			this->btn_volver->TabIndex = 19;
			this->btn_volver->Text = L"Cancelar";
			this->btn_volver->UseVisualStyleBackColor = true;
			this->btn_volver->UseWaitCursor = true;
			this->btn_volver->Click += gcnew System::EventHandler(this, &Agregar::btn_volver_Click);
			// 
			// Agregar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->CancelButton = this->btn_volver;
			this->ClientSize = System::Drawing::Size(548, 429);
			this->Controls->Add(this->btn_volver);
			this->Controls->Add(this->btn_agregar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtr_preguntaAgregar);
			this->Controls->Add(this->txtr_resAgregar);
			this->Controls->Add(this->dtp_fechaAgregar);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Agregar";
			this->Text = L"Agregar";
			this->UseWaitCursor = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btn_volver_Click(System::Object^ sender, System::EventArgs^ e) {
		User::limit_windows = true;
		this->Visible = false;
	}
	private: System::Void btn_agregar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ dia_ = Convert::ToString(dtp_fechaAgregar->Value);
		String^ fecha = "";// 1 string

		for (int i = 0; i < dia_->Length; i++)
		{
			if (dia_[i] == ' ')
			{
				break;
			}
			else if (dia_[i] == '-')
			{
				fecha += Convert::ToChar(Convert::ToInt32("2F", 16)); // 2F = '/'
			}
			else
			{
				fecha += dia_[i];
			}
		}
		String^ pregunta = txtr_preguntaAgregar->Text;
		String^ respuesta = txtr_resAgregar->Text;

		int a = 0;
		try {
			String^ con = "dataSource=localhost; username=root; password=1234; database=spacemind";

			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();
			//Id,Pregunta, Fecha_repaso, Nivel 
			//int id_buscado = User::id;
			String^ sqlQuery = "INSERT INTO Conceptos (Fecha_repaso, Nivel, Pregunta, palabra) VALUES (@fecha, @nivel, @Pregunta, @palabra)";

			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@fecha", fecha);
			command->Parameters->AddWithValue("@nivel", 1);
			command->Parameters->AddWithValue("@Pregunta", pregunta);
			command->Parameters->AddWithValue("@palabra", respuesta);


			MySqlDataReader^ reader = command->ExecuteReader();

			//String^ res = reader->GetString(4);
			a++;


		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		if (a == 1)
		{
			MessageBox::Show("Concepto Agregado!");
		}
	}
};
}
