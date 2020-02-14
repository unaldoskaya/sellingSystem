#pragma once
#include "Db.h"
#include "GridButtons.h"
#include "NewSuppliersForm.h"
#include "NewProductForm.h"
#include "ProductForm.h"
#include "MonthlyRaportForm.h"

namespace SellingSistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SuppliersForm
	/// </summary>
	public ref class SuppliersForm : public System::Windows::Forms::Form
	{
	public:
		SuppliersForm(void)
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
		~SuppliersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgwSuppliers;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txt_Search;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^  �r�nlerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �r�nEkleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �r�nlerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tedarik�ilerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tedarik�iEkleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ayl�kRaporToolStripMenuItem;


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
			this->dgwSuppliers = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_Search = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�r�nlerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�r�nEkleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�r�nlerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tedarik�ilerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tedarik�iEkleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayl�kRaporToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwSuppliers))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgwSuppliers
			// 
			this->dgwSuppliers->AllowUserToAddRows = false;
			this->dgwSuppliers->AllowUserToDeleteRows = false;
			this->dgwSuppliers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgwSuppliers->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgwSuppliers->Location = System::Drawing::Point(0, 90);
			this->dgwSuppliers->Name = L"dgwSuppliers";
			this->dgwSuppliers->ReadOnly = true;
			this->dgwSuppliers->RowHeadersVisible = false;
			this->dgwSuppliers->Size = System::Drawing::Size(1235, 609);
			this->dgwSuppliers->TabIndex = 0;
			this->dgwSuppliers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SuppliersForm::dgwSuppliers_CellClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(1078, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 26);
			this->button1->TabIndex = 11;
			this->button1->Text = L"YEN�LE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SuppliersForm::button1_Click);
			// 
			// txt_Search
			// 
			this->txt_Search->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_Search->Location = System::Drawing::Point(912, 58);
			this->txt_Search->Name = L"txt_Search";
			this->txt_Search->Size = System::Drawing::Size(151, 26);
			this->txt_Search->TabIndex = 10;
			this->txt_Search->TextChanged += gcnew System::EventHandler(this, &SuppliersForm::txt_Search_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�r�nlerToolStripMenuItem,
					this->tedarik�ilerToolStripMenuItem, this->ayl�kRaporToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1235, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �r�nlerToolStripMenuItem
			// 
			this->�r�nlerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�r�nEkleToolStripMenuItem,
					this->�r�nlerToolStripMenuItem1
			});
			this->�r�nlerToolStripMenuItem->Name = L"�r�nlerToolStripMenuItem";
			this->�r�nlerToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->�r�nlerToolStripMenuItem->Text = L"�r�nler";
			// 
			// �r�nEkleToolStripMenuItem
			// 
			this->�r�nEkleToolStripMenuItem->Name = L"�r�nEkleToolStripMenuItem";
			this->�r�nEkleToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�r�nEkleToolStripMenuItem->Text = L"�r�n Ekle";
			this->�r�nEkleToolStripMenuItem->Click += gcnew System::EventHandler(this, &SuppliersForm::�r�nEkleToolStripMenuItem_Click);
			// 
			// �r�nlerToolStripMenuItem1
			// 
			this->�r�nlerToolStripMenuItem1->Name = L"�r�nlerToolStripMenuItem1";
			this->�r�nlerToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->�r�nlerToolStripMenuItem1->Text = L"�r�nler";
			this->�r�nlerToolStripMenuItem1->Click += gcnew System::EventHandler(this, &SuppliersForm::�r�nlerToolStripMenuItem1_Click);
			// 
			// tedarik�ilerToolStripMenuItem
			// 
			this->tedarik�ilerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tedarik�iEkleToolStripMenuItem });
			this->tedarik�ilerToolStripMenuItem->Name = L"tedarik�ilerToolStripMenuItem";
			this->tedarik�ilerToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->tedarik�ilerToolStripMenuItem->Text = L"Kursiyer";
			// 
			// tedarik�iEkleToolStripMenuItem
			// 
			this->tedarik�iEkleToolStripMenuItem->Name = L"tedarik�iEkleToolStripMenuItem";
			this->tedarik�iEkleToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->tedarik�iEkleToolStripMenuItem->Text = L"Kursiyer Ekle";
			this->tedarik�iEkleToolStripMenuItem->Click += gcnew System::EventHandler(this, &SuppliersForm::tedarik�iEkleToolStripMenuItem_Click);
			// 
			// ayl�kRaporToolStripMenuItem
			// 
			this->ayl�kRaporToolStripMenuItem->Name = L"ayl�kRaporToolStripMenuItem";
			this->ayl�kRaporToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->ayl�kRaporToolStripMenuItem->Text = L"Ayl�k Rapor";
			this->ayl�kRaporToolStripMenuItem->Click += gcnew System::EventHandler(this, &SuppliersForm::ayl�kRaporToolStripMenuItem_Click);
			// 
			// SuppliersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1235, 699);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_Search);
			this->Controls->Add(this->dgwSuppliers);
			this->Name = L"SuppliersForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kursiyerler";
			this->Load += gcnew System::EventHandler(this, &SuppliersForm::SuppliersForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwSuppliers))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SuppliersForm_Load(System::Object^  sender, System::EventArgs^  e) {
		GridButtons::Columns(dgwSuppliers);
		String^ query = "SELECT id, company_name, title, address, tax_administration, tax_no, phone, mobile_phone, email FROM suppliers WHERE status = 1";
		Db::FillGrid(dgwSuppliers, query, "suppliers");
		GridButtons::Buttons(dgwSuppliers);
	}
private: System::Void dgwSuppliers_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	if (dgwSuppliers->Columns[e->ColumnIndex]->Name == "Sil")
	{
		try
		{
			System::Windows::Forms::DialogResult ansmer = MessageBox::Show("Kayd� Silmek �stedi�inizden Emin Misiniz?", "UYARI", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (ansmer == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "UPDATE suppliers SET status = 0 where id=" + dgwSuppliers->Rows[e->RowIndex]->Cells["id"]->Value->ToString() + "";
				Db::Delete(query);
				dgwSuppliers->Columns->Clear();
				GridButtons::Columns(dgwSuppliers);
				String^ query1 = "SELECT id, company_name, title, address, tax_administration, tax_no, phone, mobile_phone, email FROM suppliers WHERE status = 1";
				Db::FillGrid(dgwSuppliers, query1, "suppliers");
				GridButtons::Buttons(dgwSuppliers);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	else if (dgwSuppliers->Columns[e->ColumnIndex]->Name == "Duzenle")
	{
		NewSuppliersForm^ uSearch = gcnew NewSuppliersForm();
		uSearch->Id = dgwSuppliers->Rows[e->RowIndex]->Cells["id"]->Value->ToString();
		uSearch->Title = dgwSuppliers->Rows[e->RowIndex]->Cells["company_name"]->Value->ToString();
		uSearch->Name = dgwSuppliers->Rows[e->RowIndex]->Cells["title"]->Value->ToString();
		uSearch->Address = dgwSuppliers->Rows[e->RowIndex]->Cells["address"]->Value->ToString();
		uSearch->TaxAdministration = dgwSuppliers->Rows[e->RowIndex]->Cells["tax_administration"]->Value->ToString();
		uSearch->TaxNo = dgwSuppliers->Rows[e->RowIndex]->Cells["tax_no"]->Value->ToString();
		uSearch->Phone = dgwSuppliers->Rows[e->RowIndex]->Cells["phone"]->Value->ToString();
		uSearch->Mobile = dgwSuppliers->Rows[e->RowIndex]->Cells["mobile_phone"]->Value->ToString();
		uSearch->Email = dgwSuppliers->Rows[e->RowIndex]->Cells["email"]->Value->ToString();
		uSearch->ShowDialog();
	}
}

private: System::Void txt_Search_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ query = "SELECT id, company_name, title, address, tax_administration, tax_no, phone, mobile_phone, email FROM suppliers WHERE status = 1 AND company_name like '" + txt_Search->Text + "%'";
	Db::FillGrid(dgwSuppliers, query, "suppliers");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ query = "SELECT id, company_name, title, address, tax_administration, tax_no, phone, mobile_phone, email FROM suppliers WHERE status = 1 ";
	Db::FillGrid(dgwSuppliers, query, "suppliers");
}

private: System::Void tedarik�iEkleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	NewSuppliersForm^ supp = gcnew NewSuppliersForm();
	supp->ShowDialog();
}
private: System::Void �r�nEkleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	NewProductForm^ prod = gcnew NewProductForm();
	prod->ShowDialog();
}
private: System::Void �r�nlerToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	ProductForm^ prForm = gcnew ProductForm();
	prForm->ShowDialog();
}
private: System::Void ayl�kRaporToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MonthlyRaportForm^ report = gcnew MonthlyRaportForm();
	report->ShowDialog();
}
};
}
