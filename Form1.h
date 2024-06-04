#pragma once
#include "ArbolBinario.h"

namespace ArbolBinario_D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		ArbolBinario^ Arbol = gcnew ArbolBinario();
		System::ComponentModel::Container^ components;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ InsertRaiz;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ TextinsertR;
	private: System::Windows::Forms::Button^ InsertIzquierda;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TextPadre;
	private: System::Windows::Forms::TextBox^ TextHijo;
	private: System::Windows::Forms::Button^ ElimDerecha;
	private: System::Windows::Forms::Button^ ElimIzquierda;
	private: System::Windows::Forms::Button^ InsertDerecha;
	private: System::Windows::Forms::Button^ Post_Orden;
	private: System::Windows::Forms::Button^ Entre_Orden;
	private: System::Windows::Forms::Button^ Pre_Orden;
	private: System::Windows::Forms::TextBox^ TextOrden;

	
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TextinsertR = (gcnew System::Windows::Forms::TextBox());
			this->InsertRaiz = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->ElimDerecha = (gcnew System::Windows::Forms::Button());
			this->ElimIzquierda = (gcnew System::Windows::Forms::Button());
			this->InsertDerecha = (gcnew System::Windows::Forms::Button());
			this->InsertIzquierda = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextPadre = (gcnew System::Windows::Forms::TextBox());
			this->TextHijo = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->TextOrden = (gcnew System::Windows::Forms::TextBox());
			this->Post_Orden = (gcnew System::Windows::Forms::Button());
			this->Entre_Orden = (gcnew System::Windows::Forms::Button());
			this->Pre_Orden = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TextinsertR);
			this->groupBox1->Controls->Add(this->InsertRaiz);
			this->groupBox1->Location = System::Drawing::Point(592, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(320, 130);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// TextinsertR
			// 
			this->TextinsertR->Location = System::Drawing::Point(177, 55);
			this->TextinsertR->Name = L"TextinsertR";
			this->TextinsertR->Size = System::Drawing::Size(116, 22);
			this->TextinsertR->TabIndex = 1;
			// 
			// InsertRaiz
			// 
			this->InsertRaiz->Location = System::Drawing::Point(27, 47);
			this->InsertRaiz->Name = L"InsertRaiz";
			this->InsertRaiz->Size = System::Drawing::Size(117, 38);
			this->InsertRaiz->TabIndex = 0;
			this->InsertRaiz->Text = L"Insertar Raíz";
			this->InsertRaiz->UseVisualStyleBackColor = true;
			this->InsertRaiz->Click += gcnew System::EventHandler(this, &Form1::InsertRaiz_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->ElimDerecha);
			this->groupBox2->Controls->Add(this->ElimIzquierda);
			this->groupBox2->Controls->Add(this->InsertDerecha);
			this->groupBox2->Controls->Add(this->InsertIzquierda);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->TextPadre);
			this->groupBox2->Controls->Add(this->TextHijo);
			this->groupBox2->Location = System::Drawing::Point(468, 201);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(572, 258);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// ElimDerecha
			// 
			this->ElimDerecha->Location = System::Drawing::Point(322, 159);
			this->ElimDerecha->Name = L"ElimDerecha";
			this->ElimDerecha->Size = System::Drawing::Size(122, 41);
			this->ElimDerecha->TabIndex = 7;
			this->ElimDerecha->Text = L"Eliminar Derecha";
			this->ElimDerecha->UseVisualStyleBackColor = true;
			this->ElimDerecha->Click += gcnew System::EventHandler(this, &Form1::ElimDerecha_Click);
			// 
			// ElimIzquierda
			// 
			this->ElimIzquierda->Location = System::Drawing::Point(94, 158);
			this->ElimIzquierda->Name = L"ElimIzquierda";
			this->ElimIzquierda->Size = System::Drawing::Size(126, 42);
			this->ElimIzquierda->TabIndex = 6;
			this->ElimIzquierda->Text = L"Eliminar Izquierda";
			this->ElimIzquierda->UseVisualStyleBackColor = true;
			this->ElimIzquierda->Click += gcnew System::EventHandler(this, &Form1::ElimIzquierda_Click);
			// 
			// InsertDerecha
			// 
			this->InsertDerecha->Location = System::Drawing::Point(326, 86);
			this->InsertDerecha->Name = L"InsertDerecha";
			this->InsertDerecha->Size = System::Drawing::Size(141, 50);
			this->InsertDerecha->TabIndex = 5;
			this->InsertDerecha->Text = L"Insertar Derecha";
			this->InsertDerecha->UseVisualStyleBackColor = true;
			this->InsertDerecha->Click += gcnew System::EventHandler(this, &Form1::InsertDerecha_Click);
			// 
			// InsertIzquierda
			// 
			this->InsertIzquierda->Location = System::Drawing::Point(94, 86);
			this->InsertIzquierda->Name = L"InsertIzquierda";
			this->InsertIzquierda->Size = System::Drawing::Size(130, 40);
			this->InsertIzquierda->TabIndex = 4;
			this->InsertIzquierda->Text = L"Insertar Izquierda";
			this->InsertIzquierda->UseVisualStyleBackColor = true;
			this->InsertIzquierda->Click += gcnew System::EventHandler(this, &Form1::InsertIzquierda_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(354, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Hijo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(133, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Padre";
			// 
			// TextPadre
			// 
			this->TextPadre->Location = System::Drawing::Point(124, 44);
			this->TextPadre->Name = L"TextPadre";
			this->TextPadre->Size = System::Drawing::Size(100, 22);
			this->TextPadre->TabIndex = 1;
			// 
			// TextHijo
			// 
			this->TextHijo->Location = System::Drawing::Point(344, 44);
			this->TextHijo->Name = L"TextHijo";
			this->TextHijo->Size = System::Drawing::Size(100, 22);
			this->TextHijo->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->TextOrden);
			this->groupBox3->Controls->Add(this->Post_Orden);
			this->groupBox3->Controls->Add(this->Entre_Orden);
			this->groupBox3->Controls->Add(this->Pre_Orden);
			this->groupBox3->Location = System::Drawing::Point(325, 465);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(871, 213);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// TextOrden
			// 
			this->TextOrden->Location = System::Drawing::Point(306, 105);
			this->TextOrden->Name = L"TextOrden";
			this->TextOrden->Size = System::Drawing::Size(463, 22);
			this->TextOrden->TabIndex = 3;
			// 
			// Post_Orden
			// 
			this->Post_Orden->Location = System::Drawing::Point(99, 158);
			this->Post_Orden->Name = L"Post_Orden";
			this->Post_Orden->Size = System::Drawing::Size(127, 40);
			this->Post_Orden->TabIndex = 2;
			this->Post_Orden->Text = L"Post-Orden";
			this->Post_Orden->UseVisualStyleBackColor = true;
			this->Post_Orden->Click += gcnew System::EventHandler(this, &Form1::Post_Orden_Click);
			// 
			// Entre_Orden
			// 
			this->Entre_Orden->Location = System::Drawing::Point(99, 95);
			this->Entre_Orden->Name = L"Entre_Orden";
			this->Entre_Orden->Size = System::Drawing::Size(127, 42);
			this->Entre_Orden->TabIndex = 1;
			this->Entre_Orden->Text = L"Entre-Orden";
			this->Entre_Orden->UseVisualStyleBackColor = true;
			this->Entre_Orden->Click += gcnew System::EventHandler(this, &Form1::Entre_Orden_Click);
			// 
			// Pre_Orden
			// 
			this->Pre_Orden->Location = System::Drawing::Point(99, 41);
			this->Pre_Orden->Name = L"Pre_Orden";
			this->Pre_Orden->Size = System::Drawing::Size(127, 39);
			this->Pre_Orden->TabIndex = 0;
			this->Pre_Orden->Text = L"Pre-Orden";
			this->Pre_Orden->UseVisualStyleBackColor = true;
			this->Pre_Orden->Click += gcnew System::EventHandler(this, &Form1::Pre_Orden_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1380, 709);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void InsertRaiz_Click(System::Object^ sender, System::EventArgs^ e) {
		TextinsertR->Focus();

		Arbol->InsertarRaiz(gcnew TNodoArbol(TextinsertR->Text));
		InsertRaiz->Enabled = false;
	

	}
private: System::Void InsertIzquierda_Click(System::Object^ sender, System::EventArgs^ e) {
	TNodoArbol^ a = gcnew TNodoArbol(TextHijo->Text);
	Arbol->InsertarIzq(a, Arbol->buscar(TextPadre->Text));
}
private: System::Void InsertDerecha_Click(System::Object^ sender, System::EventArgs^ e) {
	TNodoArbol^ a = gcnew TNodoArbol(TextHijo->Text);
	Arbol->InsertarDer(a, Arbol->buscar(TextPadre->Text));
}
private: System::Void ElimIzquierda_Click(System::Object^ sender, System::EventArgs^ e) {
	Arbol->EliminarIzquierdo(Arbol->buscar(TextPadre->Text));
	TextPadre->Clear();
	TextHijo->Clear();
	TextOrden->Clear();
}
private: System::Void ElimDerecha_Click(System::Object^ sender, System::EventArgs^ e) {
	Arbol->EliminarDerecho(Arbol->buscar(TextPadre->Text));
	TextPadre->Clear();
	TextHijo->Clear();
	TextOrden->Clear();
}
private: System::Void Pre_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
	TextOrden->ResetText();
	TextOrden->Text = Arbol->PreOrden1();
}
private: System::Void Entre_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
	TextOrden->ResetText();
	TextOrden->Text = Arbol->EntreOrden(Arbol->raiz);
}
private: System::Void Post_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
	TextOrden->ResetText();
	TextOrden->Text = Arbol->PosOrden(Arbol->raiz);
}
};
}
