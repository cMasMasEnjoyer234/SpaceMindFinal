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
	/// Summary for Editar
	/// </summary>
	public ref class Editar : public System::Windows::Forms::Form
	{
	public:
		Editar(void)
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
		~Editar()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ lbl_nivelActual;
	protected:
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ lbl_ida;
	private:
	public:

	private:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dtp_fechanewe;
	public:

	public: System::Windows::Forms::Button^ btn_aceptar;
	private:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmb_nivelesActual;
	public:

	public: System::Windows::Forms::RichTextBox^ txtr_preguntaActual;
	private:

	private:
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::RichTextBox^ txtr_resActual;
	private:
	public:

	private:
	private: System::Windows::Forms::Button^ btn_volver;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ lbl_fechaActualA;
	private:

	private:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Editar::typeid));
			this->lbl_nivelActual = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbl_ida = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtp_fechanewe = (gcnew System::Windows::Forms::DateTimePicker());
			this->btn_aceptar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmb_nivelesActual = (gcnew System::Windows::Forms::ComboBox());
			this->txtr_preguntaActual = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtr_resActual = (gcnew System::Windows::Forms::RichTextBox());
			this->btn_volver = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lbl_fechaActualA = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_nivelActual
			// 
			this->lbl_nivelActual->AutoSize = true;
			this->lbl_nivelActual->BackColor = System::Drawing::Color::Transparent;
			this->lbl_nivelActual->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_nivelActual->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nivelActual->Location = System::Drawing::Point(74, 262);
			this->lbl_nivelActual->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbl_nivelActual->Name = L"lbl_nivelActual";
			this->lbl_nivelActual->Size = System::Drawing::Size(28, 14);
			this->lbl_nivelActual->TabIndex = 29;
			this->lbl_nivelActual->Text = L"...";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(18, 262);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 14);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Nivel:";
			// 
			// lbl_ida
			// 
			this->lbl_ida->AutoSize = true;
			this->lbl_ida->BackColor = System::Drawing::Color::Transparent;
			this->lbl_ida->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ida->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_ida->Location = System::Drawing::Point(74, 131);
			this->lbl_ida->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbl_ida->Name = L"lbl_ida";
			this->lbl_ida->Size = System::Drawing::Size(28, 14);
			this->lbl_ida->TabIndex = 27;
			this->lbl_ida->Text = L"...";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(18, 131);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 14);
			this->label4->TabIndex = 26;
			this->label4->Text = L"id:";
			// 
			// dtp_fechanewe
			// 
			this->dtp_fechanewe->CalendarForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dtp_fechanewe->CalendarMonthBackground = System::Drawing::Color::Transparent;
			this->dtp_fechanewe->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dtp_fechanewe->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_fechanewe->Location = System::Drawing::Point(18, 219);
			this->dtp_fechanewe->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->dtp_fechanewe->Name = L"dtp_fechanewe";
			this->dtp_fechanewe->Size = System::Drawing::Size(276, 22);
			this->dtp_fechanewe->TabIndex = 25;
			this->dtp_fechanewe->ValueChanged += gcnew System::EventHandler(this, &Editar::dtp_fechanewe_ValueChanged);
			// 
			// btn_aceptar
			// 
			this->btn_aceptar->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_aceptar->Location = System::Drawing::Point(18, 354);
			this->btn_aceptar->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->btn_aceptar->Name = L"btn_aceptar";
			this->btn_aceptar->Size = System::Drawing::Size(103, 27);
			this->btn_aceptar->TabIndex = 24;
			this->btn_aceptar->Text = L"ok";
			this->btn_aceptar->UseVisualStyleBackColor = true;
			this->btn_aceptar->Click += gcnew System::EventHandler(this, &Editar::btn_aceptar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(13, 200);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 14);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Nueva Fecha";
			// 
			// cmb_nivelesActual
			// 
			this->cmb_nivelesActual->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmb_nivelesActual->FormattingEnabled = true;
			this->cmb_nivelesActual->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"Ocultar" });
			this->cmb_nivelesActual->Location = System::Drawing::Point(18, 295);
			this->cmb_nivelesActual->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->cmb_nivelesActual->Name = L"cmb_nivelesActual";
			this->cmb_nivelesActual->Size = System::Drawing::Size(122, 22);
			this->cmb_nivelesActual->TabIndex = 22;
			this->cmb_nivelesActual->Text = L"Nivel Nuevo";
			this->cmb_nivelesActual->SelectedIndexChanged += gcnew System::EventHandler(this, &Editar::cmb_nivelesActual_SelectedIndexChanged);
			// 
			// txtr_preguntaActual
			// 
			this->txtr_preguntaActual->Location = System::Drawing::Point(18, 42);
			this->txtr_preguntaActual->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->txtr_preguntaActual->Name = L"txtr_preguntaActual";
			this->txtr_preguntaActual->Size = System::Drawing::Size(216, 69);
			this->txtr_preguntaActual->TabIndex = 21;
			this->txtr_preguntaActual->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(13, 24);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 14);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Pregunta";
			// 
			// txtr_resActual
			// 
			this->txtr_resActual->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtr_resActual->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtr_resActual->Location = System::Drawing::Point(303, 42);
			this->txtr_resActual->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->txtr_resActual->Name = L"txtr_resActual";
			this->txtr_resActual->Size = System::Drawing::Size(304, 284);
			this->txtr_resActual->TabIndex = 19;
			this->txtr_resActual->Text = L"";
			// 
			// btn_volver
			// 
			this->btn_volver->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_volver->Location = System::Drawing::Point(133, 354);
			this->btn_volver->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->btn_volver->Name = L"btn_volver";
			this->btn_volver->Size = System::Drawing::Size(103, 27);
			this->btn_volver->TabIndex = 18;
			this->btn_volver->Text = L"cancelar";
			this->btn_volver->UseVisualStyleBackColor = true;
			this->btn_volver->Click += gcnew System::EventHandler(this, &Editar::btn_volver_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(299, 24);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 14);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Respuesta:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(14, 168);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 14);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Fecha Actual:";
			// 
			// lbl_fechaActualA
			// 
			this->lbl_fechaActualA->AutoSize = true;
			this->lbl_fechaActualA->BackColor = System::Drawing::Color::Transparent;
			this->lbl_fechaActualA->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_fechaActualA->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_fechaActualA->Location = System::Drawing::Point(130, 168);
			this->lbl_fechaActualA->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbl_fechaActualA->Name = L"lbl_fechaActualA";
			this->lbl_fechaActualA->Size = System::Drawing::Size(28, 14);
			this->lbl_fechaActualA->TabIndex = 31;
			this->lbl_fechaActualA->Text = L"...";
			// 
			// Editar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(649, 450);
			this->Controls->Add(this->lbl_fechaActualA);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lbl_nivelActual);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbl_ida);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dtp_fechanewe);
			this->Controls->Add(this->btn_aceptar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmb_nivelesActual);
			this->Controls->Add(this->txtr_preguntaActual);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtr_resActual);
			this->Controls->Add(this->btn_volver);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Editar";
			this->Text = L"Editar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int c = 0;
		int b = 0;
	private: System::Void btn_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ dia_ = Convert::ToString(dtp_fechanewe->Value);
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

		String^ nivel_nuevo = Convert::ToString(cmb_nivelesActual->SelectedIndex + 1); // 2 string
		Int32^ id_ = Convert::ToInt32(lbl_ida->Text); //3 int32
		String^ pregunta = txtr_preguntaActual->Text;
		String^ respuesta = txtr_resActual->Text;
		int a = 0;
		try {
			String^ con = "dataSource=localhost; username=root; password=; database=spacemind";

			MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
			sqlConn->Open();
			//Id,Pregunta, Fecha_repaso, Nivel 
			//int id_buscado = User::id;
			String^ sqlQuery = "UPDATE Conceptos SET Fecha_repaso = @fecha, Nivel = @nivel, pregunta = @pregunta, palabra = @palabra WHERE id = @id";
			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
			if (c == 0)
			{
				String^ fecha_actual = lbl_fechaActualA->Text;
				command->Parameters->AddWithValue("@fecha", fecha_actual);
			}
			else
			{
				command->Parameters->AddWithValue("@fecha", nuevo_fecha);
			}

			if (b == 0)
			{
				String^ nivel_actuall = Convert::ToString(lbl_nivelActual->Text);
				command->Parameters->AddWithValue("@nivel", nivel_actuall);
			}
			else
			{
				command->Parameters->AddWithValue("@nivel", nivel_nuevo);
			}
			command->Parameters->AddWithValue("@pregunta", pregunta);
			command->Parameters->AddWithValue("@palabra", respuesta);
			command->Parameters->AddWithValue("id", id_);


			MySqlDataReader^ reader = command->ExecuteReader();

			//String^ res = reader->GetString(4);
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
	private: System::Void btn_volver_Click(System::Object^ sender, System::EventArgs^ e) {
		User::limit_windows = true;
		this->Visible = false;
	}
	private: System::Void cmb_nivelesActual_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		b++;
	}
	private: System::Void dtp_fechanewe_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		c++;
	}
};
}
