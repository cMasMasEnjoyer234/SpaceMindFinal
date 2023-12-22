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
	public ref class Repasar : public System::Windows::Forms::Form
	{
	public:
		Repasar(void)
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
		~Repasar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_volver;
	public: System::Windows::Forms::RichTextBox^ txtr_res;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::RichTextBox^ txtr_pregunta;
	private: System::Windows::Forms::ComboBox^ cmb_niveles;
	public:
	private: System::Windows::Forms::Label^ label3;

	public: System::Windows::Forms::Button^ btn_aceptar;
	private: System::Windows::Forms::DateTimePicker^ dtp_fechaNueva;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ lbl_idActual;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ lbl_nivelActual;
	private:
	public:

	private:
	public:

	public:


	public:



	private:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Repasar::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_volver = (gcnew System::Windows::Forms::Button());
			this->txtr_res = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtr_pregunta = (gcnew System::Windows::Forms::RichTextBox());
			this->cmb_niveles = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_aceptar = (gcnew System::Windows::Forms::Button());
			this->dtp_fechaNueva = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_idActual = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbl_nivelActual = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(255, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Respuesta:";
			this->btn_volver->Location = System::Drawing::Point(113, 318);
			this->btn_volver->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_volver->Name = L"btn_volver";
			this->btn_volver->Size = System::Drawing::Size(88, 25);
			this->btn_volver->TabIndex = 2;
			this->btn_volver->Text = L"cancelar";
			this->btn_volver->UseVisualStyleBackColor = true;
			this->btn_volver->Click += gcnew System::EventHandler(this, &Repasar::btn_volver_Click);
			this->txtr_res->Location = System::Drawing::Point(259, 28);
			this->txtr_res->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtr_res->Name = L"txtr_res";
			this->txtr_res->ReadOnly = true;
			this->txtr_res->Size = System::Drawing::Size(261, 264);
			this->txtr_res->TabIndex = 3;
			this->txtr_res->Text = L"";
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(10, 11);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 14);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Pregunta";
			this->txtr_pregunta->Location = System::Drawing::Point(14, 28);
			this->txtr_pregunta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtr_pregunta->Name = L"txtr_pregunta";
			this->txtr_pregunta->ReadOnly = true;
			this->txtr_pregunta->Size = System::Drawing::Size(186, 64);
			this->txtr_pregunta->TabIndex = 5;
			this->txtr_pregunta->Text = L"";
			this->cmb_niveles->FormattingEnabled = true;
			this->cmb_niveles->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"Ocultar" });
			this->cmb_niveles->Location = System::Drawing::Point(14, 244);
			this->cmb_niveles->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cmb_niveles->Name = L"cmb_niveles";
			this->cmb_niveles->Size = System::Drawing::Size(105, 22);
			this->cmb_niveles->TabIndex = 8;
			this->cmb_niveles->Text = L"Nivel Nuevo";
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(10, 156);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 14);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Nueva Fecha";
			this->btn_aceptar->Location = System::Drawing::Point(14, 318);
			this->btn_aceptar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_aceptar->Name = L"btn_aceptar";
			this->btn_aceptar->Size = System::Drawing::Size(88, 25);
			this->btn_aceptar->TabIndex = 11;
			this->btn_aceptar->Text = L"ok";
			this->btn_aceptar->UseVisualStyleBackColor = true;
			this->btn_aceptar->Click += gcnew System::EventHandler(this, &Repasar::btn_aceptar_Click);
			this->dtp_fechaNueva->CalendarForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dtp_fechaNueva->CalendarMonthBackground = System::Drawing::Color::Transparent;
			this->dtp_fechaNueva->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dtp_fechaNueva->Location = System::Drawing::Point(14, 173);
			this->dtp_fechaNueva->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dtp_fechaNueva->Name = L"dtp_fechaNueva";
			this->dtp_fechaNueva->Size = System::Drawing::Size(237, 22);
			this->dtp_fechaNueva->TabIndex = 12;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(14, 111);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 14);
			this->label4->TabIndex = 13;
			this->label4->Text = L"id:";
			this->lbl_idActual->AutoSize = true;
			this->lbl_idActual->BackColor = System::Drawing::Color::Transparent;
			this->lbl_idActual->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_idActual->Location = System::Drawing::Point(62, 111);
			this->lbl_idActual->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_idActual->Name = L"lbl_idActual";
			this->lbl_idActual->Size = System::Drawing::Size(28, 14);
			this->lbl_idActual->TabIndex = 14;
			this->lbl_idActual->Text = L"...";
			this->lbl_idActual->Click += gcnew System::EventHandler(this, &Repasar::lbl_idActual_Click);
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(14, 213);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 14);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Nivel:";
			this->lbl_nivelActual->AutoSize = true;
			this->lbl_nivelActual->BackColor = System::Drawing::Color::Transparent;
			this->lbl_nivelActual->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nivelActual->Location = System::Drawing::Point(62, 213);
			this->lbl_nivelActual->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_nivelActual->Name = L"lbl_nivelActual";
			this->lbl_nivelActual->Size = System::Drawing::Size(28, 14);
			this->lbl_nivelActual->TabIndex = 16;
			this->lbl_nivelActual->Text = L"...";
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(534, 377);
			this->Controls->Add(this->lbl_nivelActual);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbl_idActual);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dtp_fechaNueva);
			this->Controls->Add(this->btn_aceptar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmb_niveles);
			this->Controls->Add(this->txtr_pregunta);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtr_res);
			this->Controls->Add(this->btn_volver);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximumSize = System::Drawing::Size(550, 416);
			this->Name = L"Repasar";
			this->Text = L"Repasar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//poner cada vez: cargar_respuesta();
#pragma endregion

	private: System::Void btn_volver_Click(System::Object^ sender, System::EventArgs^ e) {
		User::limit_windows = true;
		this->Visible = false;
		
	}
	public: System::Void btn_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ dia_ = Convert::ToString(dtp_fechaNueva->Value);
		String^ nuevo_fecha = "";// 1 string

		for (int i = 0; i < dia_->Length; i++)
		{
			if (dia_[i] == ' ')
			{
				break;
			}
			else if (dia_[i] == '-')
			{
				nuevo_fecha += Convert::ToChar(Convert::ToInt32("2F", 16)); // 2F = '/'
			}
			else
			{
				nuevo_fecha += dia_[i];
			}
		}
		// 28/11/2023 

		String^ nivel_nuevo = Convert::ToString(cmb_niveles->SelectedIndex+1); // 2 string
		Int32^ id_ = Convert::ToInt32(lbl_idActual->Text); //3 int32
		int a = 0;
		try {
			String^ con = "dataSource=localhost; username=root; password=1234; database=spacemind";

			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();
			//Id,Pregunta, Fecha_repaso, Nivel 
			//int id_buscado = User::id;
			String^ sqlQuery = "UPDATE Conceptos SET Fecha_repaso = @fecha, Nivel = @nivel WHERE id = @id";
			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@fecha", nuevo_fecha);
			command->Parameters->AddWithValue("@nivel", nivel_nuevo);
			command->Parameters->AddWithValue("id", id_);


			MySqlDataReader^ reader = command->ExecuteReader();

			//String^ res = reader->GetString(4);

			while (reader->Read())
			{
				String^ pregunta = reader->GetString(1);
				MessageBox::Show(pregunta);
			}
			a++;
			
			
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		if (a == 1)
		{
			MessageBox::Show("Item actualizado");
		}
		

	}
private: System::Void lbl_idActual_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
	
}



