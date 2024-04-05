#pragma once

namespace prueba2 {
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Agregar_tarea
	/// </summary>
	public ref class Agregar_tarea : public System::Windows::Forms::Form
	{
	public:
		Agregar_tarea(void)
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
		~Agregar_tarea()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ rtb_tarea;
	private: System::Windows::Forms::ComboBox^ cmb_dia;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_agregar_tarea;
	private: System::Windows::Forms::Button^ btn_salir;
	private: System::Windows::Forms::ComboBox^ cmb_prioridad;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmb_tipotarea;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Agregar_tarea::typeid));
			this->rtb_tarea = (gcnew System::Windows::Forms::RichTextBox());
			this->cmb_dia = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_agregar_tarea = (gcnew System::Windows::Forms::Button());
			this->btn_salir = (gcnew System::Windows::Forms::Button());
			this->cmb_prioridad = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmb_tipotarea = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// rtb_tarea
			// 
			this->rtb_tarea->Location = System::Drawing::Point(67, 56);
			this->rtb_tarea->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->rtb_tarea->Name = L"rtb_tarea";
			this->rtb_tarea->Size = System::Drawing::Size(250, 168);
			this->rtb_tarea->TabIndex = 0;
			this->rtb_tarea->Text = L"";
			// 
			// cmb_dia
			// 
			this->cmb_dia->FormattingEnabled = true;
			this->cmb_dia->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Sunday", L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday", L"Saturday"
			});
			this->cmb_dia->Location = System::Drawing::Point(209, 230);
			this->cmb_dia->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cmb_dia->Name = L"cmb_dia";
			this->cmb_dia->Size = System::Drawing::Size(108, 21);
			this->cmb_dia->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(64, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tarea nueva";
			// 
			// btn_agregar_tarea
			// 
			this->btn_agregar_tarea->Location = System::Drawing::Point(68, 348);
			this->btn_agregar_tarea->Name = L"btn_agregar_tarea";
			this->btn_agregar_tarea->Size = System::Drawing::Size(75, 23);
			this->btn_agregar_tarea->TabIndex = 3;
			this->btn_agregar_tarea->Text = L"Agregar";
			this->btn_agregar_tarea->UseVisualStyleBackColor = true;
			this->btn_agregar_tarea->Click += gcnew System::EventHandler(this, &Agregar_tarea::btn_agregar_tarea_Click);
			// 
			// btn_salir
			// 
			this->btn_salir->Location = System::Drawing::Point(243, 348);
			this->btn_salir->Name = L"btn_salir";
			this->btn_salir->Size = System::Drawing::Size(75, 23);
			this->btn_salir->TabIndex = 4;
			this->btn_salir->Text = L"cancelar";
			this->btn_salir->UseVisualStyleBackColor = true;
			this->btn_salir->Click += gcnew System::EventHandler(this, &Agregar_tarea::btn_salir_Click);
			// 
			// cmb_prioridad
			// 
			this->cmb_prioridad->FormattingEnabled = true;
			this->cmb_prioridad->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->cmb_prioridad->Location = System::Drawing::Point(67, 230);
			this->cmb_prioridad->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cmb_prioridad->Name = L"cmb_prioridad";
			this->cmb_prioridad->Size = System::Drawing::Size(108, 21);
			this->cmb_prioridad->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(64, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Prioridad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(206, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Dia";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(64, 315);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Tipo de tarea";
			// 
			// cmb_tipotarea
			// 
			this->cmb_tipotarea->FormattingEnabled = true;
			this->cmb_tipotarea->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Permanente", L"Temporal" });
			this->cmb_tipotarea->Location = System::Drawing::Point(67, 291);
			this->cmb_tipotarea->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cmb_tipotarea->Name = L"cmb_tipotarea";
			this->cmb_tipotarea->Size = System::Drawing::Size(108, 21);
			this->cmb_tipotarea->TabIndex = 9;
			// 
			// Agregar_tarea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(395, 427);
			this->Controls->Add(this->cmb_tipotarea);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmb_prioridad);
			this->Controls->Add(this->btn_salir);
			this->Controls->Add(this->btn_agregar_tarea);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmb_dia);
			this->Controls->Add(this->rtb_tarea);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Agregar_tarea";
			this->Text = L"Agregar_tarea";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btn_agregar_tarea_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ tarea = rtb_tarea->Text;
			String^ day = Convert::ToString(cmb_dia->SelectedItem);
			int prioridad = Convert::ToInt32(cmb_prioridad->SelectedItem);
			int tipo_tarea = cmb_tipotarea->SelectedIndex;
			
			int a = 0;
			try {
				String^ con = "dataSource=localhost; username=root; password=; database=spacemind";

				MySqlConnection^ sqlConn = gcnew MySqlConnection(con);
				sqlConn->Open();
				//Id,Pregunta, Fecha_repaso, Nivel
				//int id_buscado = User::id;
				String^ sqlQuery = "INSERT INTO tareas (tareas, tareas_ocultas, Dia, Prioridad, Tipo_tarea) VALUES (@tareas, @tareas_ocultas, @Dia, @Prioridad, @Tipo_tarea)";

				MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
				command->Parameters->AddWithValue("@tareas", tarea);
				command->Parameters->AddWithValue("@tareas_ocultas", 0);
				command->Parameters->AddWithValue("@Dia", day);
				command->Parameters->AddWithValue("@Prioridad", prioridad);
				command->Parameters->AddWithValue("@Tipo_tarea", tipo_tarea);
				//0 permanente
				//1 temporal

				MySqlDataReader^ reader = command->ExecuteReader();

				//String^ res = reader->GetString(4);
				a++;


			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			if (a == 1)
			{
				MessageBox::Show("Tarea agregada!");
			}
			

		}
	private: System::Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
	}
};
}
