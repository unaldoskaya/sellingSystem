#pragma once
#include "Db.h"
#include "GridButtons.h"
#include "NewSuppliersForm.h"
#include "NewProductForm.h"
namespace SellingSistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{


	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txt_Search;
	private: System::Windows::Forms::DataGridView^  dgwSuppliers;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ürünlerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ürünEkleToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  tedarikçilerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tedarikçiEkleToolStripMenuItem;





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_Search = (gcnew System::Windows::Forms::TextBox());
			this->dgwSuppliers = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ürünlerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ürünEkleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tedarikçilerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tedarikçiEkleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwSuppliers))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(1080, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 26);
			this->button1->TabIndex = 11;
			this->button1->Text = L"YENÝLE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProductForm::button1_Click);
			// 
			// txt_Search
			// 
			this->txt_Search->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_Search->Location = System::Drawing::Point(923, 58);
			this->txt_Search->Name = L"txt_Search";
			this->txt_Search->Size = System::Drawing::Size(151, 26);
			this->txt_Search->TabIndex = 10;
			this->txt_Search->TextChanged += gcnew System::EventHandler(this, &ProductForm::txt_Search_TextChanged);
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
			this->dgwSuppliers->TabIndex = 12;
			this->dgwSuppliers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgwSuppliers_CellClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ürünlerToolStripMenuItem,
					this->tedarikçilerToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1235, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ürünlerToolStripMenuItem
			// 
			this->ürünlerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ürünEkleToolStripMenuItem });
			this->ürünlerToolStripMenuItem->Name = L"ürünlerToolStripMenuItem";
			this->ürünlerToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->ürünlerToolStripMenuItem->Text = L"Ürünler";
			// 
			// ürünEkleToolStripMenuItem
			// 
			this->ürünEkleToolStripMenuItem->Name = L"ürünEkleToolStripMenuItem";
			this->ürünEkleToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ürünEkleToolStripMenuItem->Text = L"Ürün Ekle";
			this->ürünEkleToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::ürünEkleToolStripMenuItem_Click);
			// 
			// tedarikçilerToolStripMenuItem
			// 
			this->tedarikçilerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tedarikçiEkleToolStripMenuItem });
			this->tedarikçilerToolStripMenuItem->Name = L"tedarikçilerToolStripMenuItem";
			this->tedarikçilerToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->tedarikçilerToolStripMenuItem->Text = L"Kursiyer";
			// 
			// tedarikçiEkleToolStripMenuItem
			// 
			this->tedarikçiEkleToolStripMenuItem->Name = L"tedarikçiEkleToolStripMenuItem";
			this->tedarikçiEkleToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->tedarikçiEkleToolStripMenuItem->Text = L"Kursiyer Ekle";
			this->tedarikçiEkleToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::tedarikçiEkleToolStripMenuItem_Click);
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1235, 699);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dgwSuppliers);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_Search);
			this->Name = L"ProductForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ürünler";
			this->Load += gcnew System::EventHandler(this, &ProductForm::SuppliersForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwSuppliers))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SuppliersForm_Load(System::Object^  sender, System::EventArgs^  e) {
		GridButtons::ProductColumns(dgwSuppliers);
		String^ query = "SELECT id, code, name, category, sales_net_price, sales_tax, sales_total_price, purchase_net_price, purchase_tax, purchase_total_price, suppliers, made_by, piece FROM products WHERE status = 1";
		Db::FillGrid(dgwSuppliers, query, "products");

		GridButtons::Buttons(dgwSuppliers);

		
	}


	private: System::Void txt_Search_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		String^ query = "SELECT id, code, name, category, sales_net_price, sales_tax, sales_total_price, purchase_net_price, purchase_tax, purchase_total_price, suppliers, made_by, piece FROM products WHERE status = 1 AND name like '" + txt_Search->Text + "%'";
		Db::FillGrid(dgwSuppliers, query, "products");

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ query = "SELECT id, code, name, category, sales_net_price, sales_tax, sales_total_price, purchase_net_price, purchase_tax, purchase_total_price, suppliers, made_by, piece FROM products WHERE status = 1";
		Db::FillGrid(dgwSuppliers, query, "products");

	}
	private: System::Void dgwSuppliers_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		if (dgwSuppliers->Columns[e->ColumnIndex]->Name == "Sil")
		{
			try
			{
				System::Windows::Forms::DialogResult ansmer = MessageBox::Show("Kaydý Silmek Ýstediðinizden Emin Misiniz?", "UYARI", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (ansmer == System::Windows::Forms::DialogResult::Yes)
				{
					String^ query = "UPDATE products SET status = 0 where id=" + dgwSuppliers->Rows[e->RowIndex]->Cells["id"]->Value->ToString() + "";
					Db::Delete(query);
					dgwSuppliers->Columns->Clear();
					GridButtons::ProductColumns(dgwSuppliers);
					String^ query1 = "SELECT id, code, name, category, sales_net_price, sales_tax, sales_total_price, purchase_net_price, purchase_tax, purchase_total_price, suppliers, made_by, piece FROM products WHERE status = 1";
					Db::FillGrid(dgwSuppliers, query1, "products");
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
			NewProductForm^ uSearch = gcnew NewProductForm();
			uSearch->Id = dgwSuppliers->Rows[e->RowIndex]->Cells["id"]->Value->ToString();
			uSearch->Code = dgwSuppliers->Rows[e->RowIndex]->Cells["code"]->Value->ToString();
			uSearch->Name = dgwSuppliers->Rows[e->RowIndex]->Cells["name"]->Value->ToString();
			uSearch->Category = dgwSuppliers->Rows[e->RowIndex]->Cells["category"]->Value->ToString();
			uSearch->PurchasePrice = dgwSuppliers->Rows[e->RowIndex]->Cells["purchase_net_price"]->Value->ToString();
			uSearch->PurchaseTax = dgwSuppliers->Rows[e->RowIndex]->Cells["purchase_tax"]->Value->ToString();
			uSearch->PurchaseTotal = dgwSuppliers->Rows[e->RowIndex]->Cells["purchase_total_price"]->Value->ToString();
			uSearch->Sales = dgwSuppliers->Rows[e->RowIndex]->Cells["sales_net_price"]->Value->ToString();
			uSearch->SalesTax = dgwSuppliers->Rows[e->RowIndex]->Cells["sales_tax"]->Value->ToString();
			uSearch->SalesTotal = dgwSuppliers->Rows[e->RowIndex]->Cells["sales_total_price"]->Value->ToString();
			uSearch->Suppliers = dgwSuppliers->Rows[e->RowIndex]->Cells["suppliers"]->Value->ToString();
			uSearch->MadeBy = dgwSuppliers->Rows[e->RowIndex]->Cells["made_by"]->Value->ToString();
			uSearch->Piece = dgwSuppliers->Rows[e->RowIndex]->Cells["piece"]->Value->ToString();
			uSearch->ShowDialog();
		}
	}

	private: System::Void ürünEkleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		NewProductForm^ prod = gcnew NewProductForm();
		prod->ShowDialog();
	}
private: System::Void tedarikçiEkleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	NewSuppliersForm^ newSupp = gcnew NewSuppliersForm();
	newSupp->ShowDialog();
}

};
}
