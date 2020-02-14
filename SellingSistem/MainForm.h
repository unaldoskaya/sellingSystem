#pragma once
#include "NewSuppliersForm.h"
#include "SuppliersForm.h"
#include "NewProductForm.h"
#include "Db.h"
#include "SalesForm.h"
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
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

	public: property System::String^ ID
	{
		System::String^ get()
		{
			return lblId->Text;
		}
		void set(System::String^ text)
		{
			lblId->Text = text;
		}
	}
	public: property System::String^ UserName
	{
		System::String^ get()
		{
			//return lbl_user->Text;
			return "a";
		}
		void set(System::String^ text)
		{
			//lbl_user->Text = text;
		}
	}
	public: property System::String^ Rank
	{
		System::String^ get()
		{
			return lbl_rank->Text;
		}
		void set(System::String^ text)
		{
			lbl_rank->Text = text;
		}
	}
	public:
		void Buttons()
		{
			this->menuStrip1->Visible = false;
		};

	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgw_Main;
	protected:

	private: System::Windows::Forms::Label^  lbl_rank;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;


	private: System::Windows::Forms::ToolStripMenuItem^  �r�nlerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �r�nEkleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tedarik�ilerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tedarik�iEkleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��k��ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  tedarik�ilerToolStripMenuItem1;
	private: System::Windows::Forms::ComboBox^  cmb_Search;
	private: System::Windows::Forms::TextBox^  txt_Search;
	private: System::Windows::Forms::ToolStripMenuItem^  �r�nlerToolStripMenuItem1;
	private: System::Windows::Forms::Label^  lblId;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripMenuItem^  ayl�kRaporToolStripMenuItem;

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
			this->dgw_Main = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_rank = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�r�nlerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�r�nEkleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�r�nlerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tedarik�ilerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tedarik�iEkleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tedarik�ilerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayl�kRaporToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��k��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmb_Search = (gcnew System::Windows::Forms::ComboBox());
			this->txt_Search = (gcnew System::Windows::Forms::TextBox());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_Main))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgw_Main
			// 
			this->dgw_Main->AllowUserToAddRows = false;
			this->dgw_Main->AllowUserToDeleteRows = false;
			this->dgw_Main->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgw_Main->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgw_Main->Location = System::Drawing::Point(0, 113);
			this->dgw_Main->Name = L"dgw_Main";
			this->dgw_Main->ReadOnly = true;
			this->dgw_Main->RowHeadersVisible = false;
			this->dgw_Main->Size = System::Drawing::Size(1084, 598);
			this->dgw_Main->TabIndex = 0;
			this->dgw_Main->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dgw_Main_CellClick);
			// 
			// lbl_rank
			// 
			this->lbl_rank->AutoSize = true;
			this->lbl_rank->Location = System::Drawing::Point(1044, 32);
			this->lbl_rank->Name = L"lbl_rank";
			this->lbl_rank->Size = System::Drawing::Size(28, 13);
			this->lbl_rank->TabIndex = 2;
			this->lbl_rank->Text = L"rank";
			this->lbl_rank->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�r�nlerToolStripMenuItem,
					this->tedarik�ilerToolStripMenuItem, this->ayl�kRaporToolStripMenuItem, this->��k��ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1084, 24);
			this->menuStrip1->TabIndex = 3;
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
			this->�r�nEkleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�r�nEkleToolStripMenuItem_Click);
			// 
			// �r�nlerToolStripMenuItem1
			// 
			this->�r�nlerToolStripMenuItem1->Name = L"�r�nlerToolStripMenuItem1";
			this->�r�nlerToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->�r�nlerToolStripMenuItem1->Text = L"�r�nler";
			this->�r�nlerToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::�r�nlerToolStripMenuItem1_Click);
			// 
			// tedarik�ilerToolStripMenuItem
			// 
			this->tedarik�ilerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tedarik�iEkleToolStripMenuItem,
					this->tedarik�ilerToolStripMenuItem1
			});
			this->tedarik�ilerToolStripMenuItem->Name = L"tedarik�ilerToolStripMenuItem";
			this->tedarik�ilerToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->tedarik�ilerToolStripMenuItem->Text = L"Kursiyer";
			// 
			// tedarik�iEkleToolStripMenuItem
			// 
			this->tedarik�iEkleToolStripMenuItem->Name = L"tedarik�iEkleToolStripMenuItem";
			this->tedarik�iEkleToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->tedarik�iEkleToolStripMenuItem->Text = L"Kursiyer Ekle";
			this->tedarik�iEkleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::tedarik�iEkleToolStripMenuItem_Click);
			// 
			// tedarik�ilerToolStripMenuItem1
			// 
			this->tedarik�ilerToolStripMenuItem1->Name = L"tedarik�ilerToolStripMenuItem1";
			this->tedarik�ilerToolStripMenuItem1->Size = System::Drawing::Size(140, 22);
			this->tedarik�ilerToolStripMenuItem1->Text = L"Kursiyerler";
			this->tedarik�ilerToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::tedarik�ilerToolStripMenuItem1_Click);
			// 
			// ayl�kRaporToolStripMenuItem
			// 
			this->ayl�kRaporToolStripMenuItem->Name = L"ayl�kRaporToolStripMenuItem";
			this->ayl�kRaporToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->ayl�kRaporToolStripMenuItem->Text = L"Ayl�k Rapor";
			this->ayl�kRaporToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ayl�kRaporToolStripMenuItem_Click);
			// 
			// ��k��ToolStripMenuItem
			// 
			this->��k��ToolStripMenuItem->Name = L"��k��ToolStripMenuItem";
			this->��k��ToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->��k��ToolStripMenuItem->Text = L"��k��";
			this->��k��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::��k��ToolStripMenuItem_Click);
			// 
			// cmb_Search
			// 
			this->cmb_Search->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->cmb_Search->FormattingEnabled = true;
			this->cmb_Search->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"�r�n Kodu", L"�r�n Ad�", L"Kategori", L"Fiyat",
					L"�retim Yeri", L"Kursiyer", L"Stok Durumu"
			});
			this->cmb_Search->Location = System::Drawing::Point(523, 78);
			this->cmb_Search->Name = L"cmb_Search";
			this->cmb_Search->Size = System::Drawing::Size(174, 27);
			this->cmb_Search->TabIndex = 4;
			// 
			// txt_Search
			// 
			this->txt_Search->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_Search->Location = System::Drawing::Point(703, 77);
			this->txt_Search->Name = L"txt_Search";
			this->txt_Search->Size = System::Drawing::Size(151, 26);
			this->txt_Search->TabIndex = 5;
			this->txt_Search->TextChanged += gcnew System::EventHandler(this, &MainForm::txt_Search_TextChanged);
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(1023, 32);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(15, 13);
			this->lblId->TabIndex = 6;
			this->lblId->Text = L"id";
			this->lblId->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(860, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 26);
			this->button1->TabIndex = 8;
			this->button1->Text = L"YEN�LE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 711);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->txt_Search);
			this->Controls->Add(this->cmb_Search);
			this->Controls->Add(this->lbl_rank);
			this->Controls->Add(this->dgw_Main);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Anasayfa";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_Main))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void �r�nEkleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	NewProductForm^ addProduct = gcnew NewProductForm();
	addProduct->ShowDialog();
}
private: System::Void tedarik�iEkleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	NewSuppliersForm^ addSuppliers = gcnew NewSuppliersForm();
	addSuppliers->ShowDialog();
}
private: System::Void ��k��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	try
	{
		System::Windows::Forms::DialogResult sonuc = MessageBox::Show("��kmak �stedi�inizden Emin misiniz ?", "UYARI", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (sonuc == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else
		{
			return;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void tedarik�ilerToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	SuppliersForm^ supp = gcnew SuppliersForm();
	supp->ShowDialog();
}
private: System::Void dgw_Main_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	if (dgw_Main->Columns[e->ColumnIndex]->Name == "SatinAl")
	{
		SalesForm^ pSearch = gcnew SalesForm();
		pSearch->UserId = dgw_Main->Rows[e->RowIndex]->Cells["suppliers"]->Value->ToString();
		pSearch->Id = dgw_Main->Rows[e->RowIndex]->Cells["id"]->Value->ToString();
		pSearch->Code = dgw_Main->Rows[e->RowIndex]->Cells["code"]->Value->ToString();
		pSearch->Name = dgw_Main->Rows[e->RowIndex]->Cells["name"]->Value->ToString();
		pSearch->Category = dgw_Main->Rows[e->RowIndex]->Cells["category"]->Value->ToString();
		pSearch->SalesTotal = dgw_Main->Rows[e->RowIndex]->Cells["sales_total_price"]->Value->ToString();
		pSearch->Piece = dgw_Main->Rows[e->RowIndex]->Cells["piece"]->Value->ToString();
		pSearch->ShowDialog();
	}
}
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {

	if (lbl_rank->Text == "1")
	{
		Buttons();
	}
	/*String^ query = "SELECT s.code, SUM(s.stock),p.id, p.code, p.name, p.category, p.sales_total_price, p.made_by, SUM(p.piece), IFNULL(SUM(p.piece) - SUM(s.stock), SUM(p.piece)) AS balance " + 
		"FROM products AS p LEFT JOIN sales AS s ON p.code = s.code" + 
		" WHERE status = 1 GROUP BY p.code";*/
	String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1";
	GridButtons::MainFormColumns(dgw_Main);
	Db::FillMainGrid(dgw_Main, query, "products");

}
private: System::Void btn_exit_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		System::Windows::Forms::DialogResult sonuc = MessageBox::Show("��kmak �stedi�inizden Emin misiniz ?", "UYARI", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (sonuc == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else
		{
			return;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void txt_Search_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	dgw_Main->Rows->Clear();
	//GridButtons::MainFormColumns(dgw_Main);
	if (!cmb_Search->SelectedItem)
	{
		MessageBox::Show("L�tfen arama yapmak istedi�iniz alan� se�iniz!");
		String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1";
		Db::FillMainGrid(dgw_Main, query, "products");
		if (lbl_rank->Text == "1")
		{
			Buttons();
		}
	}
	else if (cmb_Search->SelectedItem->ToString() == "�r�n Kodu")
	{
		String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1 AND code like '" + txt_Search->Text + "%'";
		Db::FillMainGrid(dgw_Main, query, "products");
	}
	else if (cmb_Search->SelectedItem->ToString() == "�r�n Ad�")
	{
		String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1 AND name like '" + txt_Search->Text + "%'";
		Db::FillMainGrid(dgw_Main, query, "products");
	}
	else if (cmb_Search->SelectedItem->ToString() == "Kategori")
	{
		String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1 AND category like '" + txt_Search->Text + "%'";
		Db::FillMainGrid(dgw_Main, query, "products");
	}
	else if (cmb_Search->SelectedItem->ToString() == "Fiyat")
	{
		String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1 AND sales_total_price like '" + txt_Search->Text + "%'";
		Db::FillMainGrid(dgw_Main, query, "products");
	}
	else if (cmb_Search->SelectedItem->ToString() == "�retim Yeri")
	{
		String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1 AND made_by like '" + txt_Search->Text + "%'";
		Db::FillMainGrid(dgw_Main, query, "products");
	}
	else if (cmb_Search->SelectedItem->ToString() == "Stok Durumu")
	{
		String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1 AND piece like '" + txt_Search->Text + "%'";
		Db::FillMainGrid(dgw_Main, query, "products");
	}
	else if (cmb_Search->SelectedItem->ToString() == "Kursiyer")
	{
		String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1 AND suppliers like '" + txt_Search->Text + "%'";
		Db::FillMainGrid(dgw_Main, query, "products");
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	dgw_Main->Rows->Clear();
	String^ query = "SELECT id, code, name, category, sales_total_price, suppliers, made_by, piece FROM products WHERE status = 1";
	Db::FillMainGrid(dgw_Main, query, "products");

}
private: System::Void �r�nlerToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

	ProductForm^ pForm = gcnew ProductForm();
	pForm->ShowDialog();
}
private: System::Void ayl�kRaporToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	MonthlyRaportForm^ raport = gcnew MonthlyRaportForm();
	raport->ShowDialog();
}
};
}
