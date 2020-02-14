#pragma once
#include "ConvertCs.h"
#include "Db.h"

namespace SellingSistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	/// <summary>
	/// Summary for NewProductForm
	/// </summary>
	public ref class NewProductForm : public System::Windows::Forms::Form
	{
	public: property System::String^ Id
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
	public: property System::String^ Code
	{
		System::String^ get()
		{
			return txt_Code->Text;
		}
		void set(System::String^ text)
		{
			txt_Code->Text = text;
		}
	}
	public: property System::String^ Name
	{
		System::String^ get()
		{
			return txt_name->Text;
		}
		void set(System::String^ text)
		{
			txt_name->Text = text;
		}
	}
	public: property System::String^ Category
	{
		System::String^ get()
		{
			return txt_category->Text;
		}
		void set(System::String^ text)
		{
			txt_category->Text = text;
		}
	}
	public: property System::String^ PurchasePrice
	{
		System::String^ get()
		{
			return txt_purchase_price->Text;
		}
		void set(System::String^ text)
		{
			txt_purchase_price->Text = text;
		}
	}
	public: property System::String^ PurchaseTax
	{
		System::String^ get()
		{
			return lbl_purchase_tax->Text;
		}
		void set(System::String^ text)
		{
			lbl_purchase_tax->Visible = true;
			lbl_purchase_tax->Text = text;
		}
	}
	public: property System::String^ PurchaseTotal
	{
		System::String^ get()
		{
			return lbl_purchase_total->Text;
		}
		void set(System::String^ text)
		{
			lbl_purchase_total->Visible = true;
			lbl_purchase_total->Text = text;
		}
	}
	public: property System::String^ Sales
	{
		System::String^ get()
		{
			return lbl_sales->Text;
		}
		void set(System::String^ text)
		{
			lbl_sales->Visible = true;
			lbl_sales->Text = text;
		}
	}
	public: property System::String^ SalesTax
	{
		System::String^ get()
		{
			return lbl_sales_tax->Text;
		}
		void set(System::String^ text)
		{
			lbl_sales_tax->Visible = true;
			lbl_sales_tax->Text = text;
		}
	}
	public: property System::String^ SalesTotal
	{
		System::String^ get()
		{
			return lbl_sales_total_price->Text;
		}
		void set(System::String^ text)
		{
			lbl_sales_total_price->Visible = true;
			lbl_sales_total_price->Text = text;
		}
	}
	public: property System::String^ Suppliers
	{
		System::String^ get()
		{
			return cmb_suppliers->Text;
		}
		void set(System::String^ text)
		{
			cmb_suppliers->Text = text;
		}
	}
	public: property System::String^ MadeBy
	{
		System::String^ get()
		{
			return txt_madeby->Text;
		}
		void set(System::String^ text)
		{
			txt_madeby->Text = text;
		}
	}
	public: property System::String^ Piece
	{
		System::String^ get()
		{
			return txt_piece->Text;
		}
		void set(System::String^ text)
		{
			txt_piece->Text = text;
		}
	}
	public:
		NewProductForm(void)
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
		~NewProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_Code;
	private: System::Windows::Forms::ComboBox^  cmb_tax;
	private: System::Windows::Forms::Button^  btn_Save;

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  cmb_suppliers;
	private: System::Windows::Forms::TextBox^  txt_category;
	private: System::Windows::Forms::TextBox^  txt_purchase_price;
	private: System::Windows::Forms::TextBox^  txt_madeby;
	private: System::Windows::Forms::TextBox^  txt_piece;
	private: System::Windows::Forms::Label^  lbl_purchase_tax;
	private: System::Windows::Forms::TextBox^  txt_name;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  lbl_purchase_total;
	private: System::Windows::Forms::Label^  lbl_sales_total_price;
	private: System::Windows::Forms::Label^  lbl_sales;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  cmb_sales_rate;
	private: System::Windows::Forms::Label^  lbl_sales_tax;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  lbl_purchase_TL;

	private: System::Windows::Forms::Label^  lblId;
private: System::Windows::Forms::Label^  lbl_purchase_tax_TL;
private: System::Windows::Forms::Label^  lbl_netSales_TL;
private: System::Windows::Forms::Label^  lbl_salesTax_TL;
private: System::Windows::Forms::Label^  lbl_sales_TL;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_Code = (gcnew System::Windows::Forms::TextBox());
			this->cmb_tax = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cmb_suppliers = (gcnew System::Windows::Forms::ComboBox());
			this->txt_category = (gcnew System::Windows::Forms::TextBox());
			this->txt_purchase_price = (gcnew System::Windows::Forms::TextBox());
			this->txt_madeby = (gcnew System::Windows::Forms::TextBox());
			this->txt_piece = (gcnew System::Windows::Forms::TextBox());
			this->lbl_purchase_tax = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lbl_purchase_total = (gcnew System::Windows::Forms::Label());
			this->lbl_sales_total_price = (gcnew System::Windows::Forms::Label());
			this->lbl_sales = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->cmb_sales_rate = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_sales_tax = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lbl_purchase_TL = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lbl_purchase_tax_TL = (gcnew System::Windows::Forms::Label());
			this->lbl_netSales_TL = (gcnew System::Windows::Forms::Label());
			this->lbl_salesTax_TL = (gcnew System::Windows::Forms::Label());
			this->lbl_sales_TL = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(35, 46);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ürün Kodu :";
			// 
			// txt_Code
			// 
			this->txt_Code->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_Code->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_Code->Location = System::Drawing::Point(210, 46);
			this->txt_Code->Margin = System::Windows::Forms::Padding(4);
			this->txt_Code->Name = L"txt_Code";
			this->txt_Code->ReadOnly = true;
			this->txt_Code->Size = System::Drawing::Size(287, 26);
			this->txt_Code->TabIndex = 1;
			// 
			// cmb_tax
			// 
			this->cmb_tax->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->cmb_tax->FormattingEnabled = true;
			this->cmb_tax->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"8", L"18" });
			this->cmb_tax->Location = System::Drawing::Point(210, 185);
			this->cmb_tax->Margin = System::Windows::Forms::Padding(4);
			this->cmb_tax->Name = L"cmb_tax";
			this->cmb_tax->Size = System::Drawing::Size(92, 27);
			this->cmb_tax->TabIndex = 5;
			this->cmb_tax->SelectedIndexChanged += gcnew System::EventHandler(this, &NewProductForm::cmb_tax_SelectedIndexChanged);
			// 
			// btn_Save
			// 
			this->btn_Save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_Save->Location = System::Drawing::Point(399, 469);
			this->btn_Save->Margin = System::Windows::Forms::Padding(4);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(98, 53);
			this->btn_Save->TabIndex = 10;
			this->btn_Save->Text = L"EKLE";
			this->btn_Save->UseVisualStyleBackColor = true;
			this->btn_Save->Click += gcnew System::EventHandler(this, &NewProductForm::btn_Save_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(35, 115);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 19);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Kategori :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(35, 150);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 19);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Alýþ Net Fiyat :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(35, 185);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 19);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Alýþ KDV (%) :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(35, 219);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 19);
			this->label5->TabIndex = 35;
			this->label5->Text = L"KDV Dahil Fiyat :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(35, 353);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 19);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Kursiyer :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(35, 387);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 19);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Üretim Yeri :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(35, 423);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 19);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Adedi :";
			// 
			// cmb_suppliers
			// 
			this->cmb_suppliers->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->cmb_suppliers->FormattingEnabled = true;
			this->cmb_suppliers->Location = System::Drawing::Point(210, 353);
			this->cmb_suppliers->Margin = System::Windows::Forms::Padding(4);
			this->cmb_suppliers->Name = L"cmb_suppliers";
			this->cmb_suppliers->Size = System::Drawing::Size(287, 27);
			this->cmb_suppliers->TabIndex = 7;
			// 
			// txt_category
			// 
			this->txt_category->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_category->Location = System::Drawing::Point(210, 115);
			this->txt_category->Margin = System::Windows::Forms::Padding(4);
			this->txt_category->Name = L"txt_category";
			this->txt_category->Size = System::Drawing::Size(287, 26);
			this->txt_category->TabIndex = 3;
			// 
			// txt_purchase_price
			// 
			this->txt_purchase_price->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_purchase_price->Location = System::Drawing::Point(210, 150);
			this->txt_purchase_price->Margin = System::Windows::Forms::Padding(4);
			this->txt_purchase_price->Name = L"txt_purchase_price";
			this->txt_purchase_price->Size = System::Drawing::Size(92, 26);
			this->txt_purchase_price->TabIndex = 4;
			// 
			// txt_madeby
			// 
			this->txt_madeby->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_madeby->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_madeby->Location = System::Drawing::Point(210, 387);
			this->txt_madeby->Margin = System::Windows::Forms::Padding(4);
			this->txt_madeby->Name = L"txt_madeby";
			this->txt_madeby->Size = System::Drawing::Size(287, 26);
			this->txt_madeby->TabIndex = 8;
			// 
			// txt_piece
			// 
			this->txt_piece->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_piece->Location = System::Drawing::Point(210, 423);
			this->txt_piece->Margin = System::Windows::Forms::Padding(4);
			this->txt_piece->Name = L"txt_piece";
			this->txt_piece->Size = System::Drawing::Size(287, 26);
			this->txt_piece->TabIndex = 9;
			this->txt_piece->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NewProductForm::txt_piece_KeyPress);
			// 
			// lbl_purchase_tax
			// 
			this->lbl_purchase_tax->AutoSize = true;
			this->lbl_purchase_tax->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_purchase_tax->Location = System::Drawing::Point(311, 188);
			this->lbl_purchase_tax->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_purchase_tax->Name = L"lbl_purchase_tax";
			this->lbl_purchase_tax->Size = System::Drawing::Size(53, 19);
			this->lbl_purchase_tax->TabIndex = 17;
			this->lbl_purchase_tax->Text = L"KDV :";
			this->lbl_purchase_tax->Visible = false;
			// 
			// txt_name
			// 
			this->txt_name->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_name->Location = System::Drawing::Point(210, 81);
			this->txt_name->Margin = System::Windows::Forms::Padding(4);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(287, 26);
			this->txt_name->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->Location = System::Drawing::Point(35, 81);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 19);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Ürün Adý :";
			// 
			// lbl_purchase_total
			// 
			this->lbl_purchase_total->AutoSize = true;
			this->lbl_purchase_total->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_purchase_total->Location = System::Drawing::Point(210, 219);
			this->lbl_purchase_total->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_purchase_total->Name = L"lbl_purchase_total";
			this->lbl_purchase_total->Size = System::Drawing::Size(57, 19);
			this->lbl_purchase_total->TabIndex = 20;
			this->lbl_purchase_total->Text = L"KDVli:";
			this->lbl_purchase_total->Visible = false;
			// 
			// lbl_sales_total_price
			// 
			this->lbl_sales_total_price->AutoSize = true;
			this->lbl_sales_total_price->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_sales_total_price->Location = System::Drawing::Point(210, 319);
			this->lbl_sales_total_price->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_sales_total_price->Name = L"lbl_sales_total_price";
			this->lbl_sales_total_price->Size = System::Drawing::Size(131, 19);
			this->lbl_sales_total_price->TabIndex = 25;
			this->lbl_sales_total_price->Text = L"KDV Dahil Fiyat :";
			this->lbl_sales_total_price->Visible = false;
			// 
			// lbl_sales
			// 
			this->lbl_sales->AutoSize = true;
			this->lbl_sales->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_sales->Location = System::Drawing::Point(312, 255);
			this->lbl_sales->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_sales->Name = L"lbl_sales";
			this->lbl_sales->Size = System::Drawing::Size(51, 19);
			this->lbl_sales->TabIndex = 24;
			this->lbl_sales->Text = L"Satýþ :";
			this->lbl_sales->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label12->Location = System::Drawing::Point(35, 319);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(131, 19);
			this->label12->TabIndex = 23;
			this->label12->Text = L"KDV Dahil Fiyat :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label13->Location = System::Drawing::Point(35, 251);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(118, 19);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Satiþ Net Fiyat :";
			// 
			// cmb_sales_rate
			// 
			this->cmb_sales_rate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->cmb_sales_rate->FormattingEnabled = true;
			this->cmb_sales_rate->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"10", L"15", L"20", L"25", L"30", L"35",
					L"40", L"45", L"50"
			});
			this->cmb_sales_rate->Location = System::Drawing::Point(210, 251);
			this->cmb_sales_rate->Margin = System::Windows::Forms::Padding(4);
			this->cmb_sales_rate->Name = L"cmb_sales_rate";
			this->cmb_sales_rate->Size = System::Drawing::Size(92, 27);
			this->cmb_sales_rate->TabIndex = 6;
			this->cmb_sales_rate->SelectedIndexChanged += gcnew System::EventHandler(this, &NewProductForm::cmb_sales_rate_SelectedIndexChanged);
			// 
			// lbl_sales_tax
			// 
			this->lbl_sales_tax->AutoSize = true;
			this->lbl_sales_tax->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_sales_tax->Location = System::Drawing::Point(210, 286);
			this->lbl_sales_tax->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_sales_tax->Name = L"lbl_sales_tax";
			this->lbl_sales_tax->Size = System::Drawing::Size(53, 19);
			this->lbl_sales_tax->TabIndex = 28;
			this->lbl_sales_tax->Text = L"KDV :";
			this->lbl_sales_tax->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label15->Location = System::Drawing::Point(35, 286);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(90, 19);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Satýþ KDV :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(304, 158);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 19);
			this->label9->TabIndex = 29;
			this->label9->Text = L"TL";
			// 
			// lbl_purchase_TL
			// 
			this->lbl_purchase_TL->AutoSize = true;
			this->lbl_purchase_TL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_purchase_TL->Location = System::Drawing::Point(304, 219);
			this->lbl_purchase_TL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_purchase_TL->Name = L"lbl_purchase_TL";
			this->lbl_purchase_TL->Size = System::Drawing::Size(29, 19);
			this->lbl_purchase_TL->TabIndex = 30;
			this->lbl_purchase_TL->Text = L"TL";
			this->lbl_purchase_TL->Visible = false;
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblId->Location = System::Drawing::Point(604, 25);
			this->lblId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(21, 19);
			this->lblId->TabIndex = 36;
			this->lblId->Text = L"id";
			this->lblId->Visible = false;
			// 
			// lbl_purchase_tax_TL
			// 
			this->lbl_purchase_tax_TL->AutoSize = true;
			this->lbl_purchase_tax_TL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_purchase_tax_TL->Location = System::Drawing::Point(380, 194);
			this->lbl_purchase_tax_TL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_purchase_tax_TL->Name = L"lbl_purchase_tax_TL";
			this->lbl_purchase_tax_TL->Size = System::Drawing::Size(29, 19);
			this->lbl_purchase_tax_TL->TabIndex = 37;
			this->lbl_purchase_tax_TL->Text = L"TL";
			this->lbl_purchase_tax_TL->Visible = false;
			// 
			// lbl_netSales_TL
			// 
			this->lbl_netSales_TL->AutoSize = true;
			this->lbl_netSales_TL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_netSales_TL->Location = System::Drawing::Point(380, 255);
			this->lbl_netSales_TL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_netSales_TL->Name = L"lbl_netSales_TL";
			this->lbl_netSales_TL->Size = System::Drawing::Size(29, 19);
			this->lbl_netSales_TL->TabIndex = 38;
			this->lbl_netSales_TL->Text = L"TL";
			this->lbl_netSales_TL->Visible = false;
			// 
			// lbl_salesTax_TL
			// 
			this->lbl_salesTax_TL->AutoSize = true;
			this->lbl_salesTax_TL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_salesTax_TL->Location = System::Drawing::Point(278, 286);
			this->lbl_salesTax_TL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesTax_TL->Name = L"lbl_salesTax_TL";
			this->lbl_salesTax_TL->Size = System::Drawing::Size(29, 19);
			this->lbl_salesTax_TL->TabIndex = 39;
			this->lbl_salesTax_TL->Text = L"TL";
			this->lbl_salesTax_TL->Visible = false;
			// 
			// lbl_sales_TL
			// 
			this->lbl_sales_TL->AutoSize = true;
			this->lbl_sales_TL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_sales_TL->Location = System::Drawing::Point(370, 319);
			this->lbl_sales_TL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_sales_TL->Name = L"lbl_sales_TL";
			this->lbl_sales_TL->Size = System::Drawing::Size(29, 19);
			this->lbl_sales_TL->TabIndex = 40;
			this->lbl_sales_TL->Text = L"TL";
			this->lbl_sales_TL->Visible = false;
			// 
			// NewProductForm
			// 
			this->AcceptButton = this->btn_Save;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 557);
			this->Controls->Add(this->lbl_sales_TL);
			this->Controls->Add(this->lbl_salesTax_TL);
			this->Controls->Add(this->lbl_netSales_TL);
			this->Controls->Add(this->lbl_purchase_tax_TL);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->lbl_purchase_TL);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lbl_sales_tax);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->lbl_sales_total_price);
			this->Controls->Add(this->lbl_sales);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->cmb_sales_rate);
			this->Controls->Add(this->lbl_purchase_total);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lbl_purchase_tax);
			this->Controls->Add(this->txt_piece);
			this->Controls->Add(this->txt_madeby);
			this->Controls->Add(this->txt_purchase_price);
			this->Controls->Add(this->txt_category);
			this->Controls->Add(this->cmb_suppliers);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_Save);
			this->Controls->Add(this->cmb_tax);
			this->Controls->Add(this->txt_Code);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"NewProductForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"";
			this->Text = L"Yeni Ürün";
			this->Load += gcnew System::EventHandler(this, &NewProductForm::NewProductForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cmb_tax_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		double price;
		double tax;
		price = ConvertCs::StrToDouble(txt_purchase_price->Text, price);
		tax = ConvertCs::StrToDouble(cmb_tax->Text, tax);
		double purchase_tax = (price * tax) / 100;
		double purchase_tax_total = purchase_tax + price;
		lbl_purchase_tax->Text = Convert::ToString(Math::Round(purchase_tax, 2));
		lbl_purchase_total->Text = Convert::ToString(Math::Round(purchase_tax_total, 2));
		lbl_purchase_tax->Visible = true;
		lbl_purchase_total->Visible = true;
		lbl_purchase_tax_TL->Visible = true;
		lbl_purchase_TL->Visible = true;
	}
	private: System::Void btn_Save_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if(lblId->Text =="id"){
			
			if (txt_category->Text == "" || txt_Code->Text == "" || txt_madeby->Text == "" || txt_name->Text == "" || txt_piece->Text == "" ||
				txt_purchase_price->Text == "" || !cmb_sales_rate->Items || !cmb_suppliers->Items)
			{
				MessageBox::Show("Lütfen tüm alanlarý doldurunuz!");
				return;
			}
			String^ query = "INSERT INTO products (code, name, category, sales_net_price, sales_tax, sales_total_price, " +
				"purchase_net_price, purchase_tax, purchase_total_price, suppliers, made_by, piece)" +
				"VALUES ('" + txt_Code->Text + "', '" + txt_name->Text + "', '" + txt_category->Text + "', '" + lbl_sales->Text + "', " +
				"'" + lbl_sales_tax->Text + "', '" + lbl_sales_total_price->Text + "', '" + txt_purchase_price->Text + "', '" + lbl_purchase_tax->Text + "'," +
				"'" + lbl_purchase_total->Text + "', '" + cmb_suppliers->Text + "', '" + txt_madeby->Text + "', '" + txt_piece->Text + "')"+
				"ON DUPLICATE KEY UPDATE piece = piece + '" + txt_piece->Text + "'";
			Db::Insert(query);
		}
		else {
			if (txt_category->Text == "" || txt_Code->Text == "" || txt_madeby->Text == "" || txt_name->Text == "" || txt_piece->Text == "" ||
				txt_purchase_price->Text == "" || !cmb_sales_rate->Items || !cmb_suppliers->Items)
			{
				MessageBox::Show("Lütfen tüm alanlarý doldurunuz!");
				return;
			}
			String^ queryUpdate = "INSERT INTO products (code, name, category, sales_net_price, sales_tax, sales_total_price, " +
				"purchase_net_price, purchase_tax, purchase_total_price, suppliers, made_by, piece)" +
				"VALUES ('" + txt_Code->Text + "', '" + txt_name->Text + "', '" + txt_category->Text + "', '" + lbl_sales->Text + "', " +
				"'" + lbl_sales_tax->Text + "', '" + lbl_sales_total_price->Text + "', '" + txt_purchase_price->Text + "', '" + lbl_purchase_tax->Text + "'," +
				"'" + lbl_purchase_total->Text + "', '" + cmb_suppliers->Text + "', '" + txt_madeby->Text + "', '" + txt_piece->Text + "')" +
				"ON DUPLICATE KEY UPDATE piece = piece + '" + txt_piece->Text + "'";
			Db::Insert(queryUpdate);
		}
		this->Close();
		/*txt_category ->Text = "";
		txt_Code->Text = "";
		txt_madeby->Text = "";
		txt_name->Text = "";
		txt_piece->Text = "";
		txt_purchase_price->Text = "";
		lbl->Text = "";
		lbl_purchase_tax->Text = "";
		lbl_purchase_total->Text = "";
		lbl_sales->Text = "";
		lbl_sales_tax->Text = "";
		lbl_sales_total_price->Text = "";
		cmb_sales_rate->Text = "";
		cmb_suppliers->Text = "";
		cmb_tax->Text = "";*/


	}
	private: System::Void cmb_sales_rate_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		double SalePrice;
		double SaleRate;
		double SaleTax;

		SalePrice = ConvertCs::StrToDouble(lbl_purchase_total->Text, SalePrice);
		SaleRate = ConvertCs::StrToDouble(cmb_sales_rate->Text, SaleRate);
		SaleTax = ConvertCs::StrToDouble(cmb_tax->Text, SaleTax);
		double Sales = (SalePrice * SaleRate) / 100;
		double Sales_net = Sales + SalePrice;
		double Sales_tax = (Sales_net*SaleTax) / 100;
		double Sales_total = Sales_net + Sales_tax;
		lbl_sales->Text = Convert::ToString(Math::Round(Sales_net, 2));
		lbl_sales_tax->Text = Convert::ToString(Math::Round(Sales_tax, 2));
		lbl_sales_total_price->Text = Convert::ToString(Math::Round(Sales_total, 2));
		lbl_sales->Visible = true;
		lbl_sales_tax->Visible = true;
		lbl_sales_total_price->Visible = true;
		lbl_netSales_TL->Visible = true;
		lbl_salesTax_TL->Visible = true;
		lbl_sales_TL->Visible = true;
	}
	private: System::Void NewProductForm_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ query = "SELECT id, company_name FROM suppliers where status = 1";
		Db::FillCmb(cmb_suppliers, query, "suppliers");
		if(lblId->Text == "id"){
		Random^ random = gcnew Random();
		DateTime^ date = DateTime::Today;
		txt_Code->Text = date->ToString("yyyy-MM-dd") +"-" + random->Next(1, 99);
		txt_name->Text = "";
		}
		else {

		}
	}
			 
private: System::Void txt_piece_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if ((int)e->KeyChar >= 48 && (int)e->KeyChar <= 57)
	{
		e->Handled = false;//eðer rakamsa  yazdýr.
	}
	else if ((int)e->KeyChar == 8)
	{
		e->Handled = false;//eðer basýlan tuþ backspace ise yazdýr.
	}
	else
	{
		e->Handled = true;//bunlarýn dýþýndaysa hiçbirisini yazdýrma
		MessageBox::Show("Yanlýzca rakam girilmelidir!");
	}
}
};
}
