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

	/// <summary>
	/// Summary for SalesForm
	/// </summary>
	public ref class SalesForm : public System::Windows::Forms::Form
	{
	public: property System::String^ UserId
	{
		System::String^ get()
		{
			return lbl_UserId->Text;
		}
		void set(System::String^ text)
		{
			lbl_UserId->Text = text;
		}
	}
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
			return txtCode->Text;
		}
		void set(System::String^ text)
		{
			txtCode->Text = text;
		}
	}
	public: property System::String^ Name
	{
		System::String^ get()
		{
			return txtName->Text;
		}
		void set(System::String^ text)
		{
			txtName->Text = text;
		}
	}
	public: property System::String^ Category
	{
		System::String^ get()
		{
			return txtCategory->Text;
		}
		void set(System::String^ text)
		{
			txtCategory->Text = text;
		}
	}
	public: property System::String^ SalesTotal
	{
		System::String^ get()
		{
			return txtPrice->Text;
		}
		void set(System::String^ text)
		{
			txtPrice->Text = text;
		}
	}
	public: property System::String^ Piece
	{
		System::String^ get()
		{
			return txtStock->Text;
		}
		void set(System::String^ text)
		{
			txtStock->Text = text;
		}
	}
	public:
		SalesForm(void)
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
		~SalesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblId;
	private: System::Windows::Forms::Button^  btnBuy;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^  txtCode;

	private: System::Windows::Forms::Label^  lblCode;
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::Label^  lblCategory;
	private: System::Windows::Forms::Label^  lblSale;
	private: System::Windows::Forms::Label^  lblStock;
	private: System::Windows::Forms::Label^  lblPiece;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtCategory;
	private: System::Windows::Forms::TextBox^  txtPrice;
	private: System::Windows::Forms::TextBox^  txtStock;
	private: System::Windows::Forms::TextBox^  txtPiece;
private: System::Windows::Forms::TextBox^  txtTotalPrice;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  lbl_UserId;



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
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->btnBuy = (gcnew System::Windows::Forms::Button());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->lblCode = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblCategory = (gcnew System::Windows::Forms::Label());
			this->lblSale = (gcnew System::Windows::Forms::Label());
			this->lblStock = (gcnew System::Windows::Forms::Label());
			this->lblPiece = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtCategory = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtPiece = (gcnew System::Windows::Forms::TextBox());
			this->txtTotalPrice = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_UserId = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblId->Location = System::Drawing::Point(324, 21);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(20, 19);
			this->lblId->TabIndex = 0;
			this->lblId->Text = L"id";
			this->lblId->Visible = false;
			// 
			// btnBuy
			// 
			this->btnBuy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnBuy->Location = System::Drawing::Point(145, 286);
			this->btnBuy->Name = L"btnBuy";
			this->btnBuy->Size = System::Drawing::Size(130, 30);
			this->btnBuy->TabIndex = 1;
			this->btnBuy->Text = L"SATIN AL";
			this->btnBuy->UseVisualStyleBackColor = true;
			this->btnBuy->Click += gcnew System::EventHandler(this, &SalesForm::btnBuy_Click);
			// 
			// txtCode
			// 
			this->txtCode->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtCode->Location = System::Drawing::Point(145, 44);
			this->txtCode->Name = L"txtCode";
			this->txtCode->ReadOnly = true;
			this->txtCode->Size = System::Drawing::Size(200, 26);
			this->txtCode->TabIndex = 1;
			// 
			// lblCode
			// 
			this->lblCode->AutoSize = true;
			this->lblCode->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblCode->Location = System::Drawing::Point(32, 51);
			this->lblCode->Name = L"lblCode";
			this->lblCode->Size = System::Drawing::Size(89, 19);
			this->lblCode->TabIndex = 3;
			this->lblCode->Text = L"Ürün Kodu : ";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblName->Location = System::Drawing::Point(32, 83);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(75, 19);
			this->lblName->TabIndex = 4;
			this->lblName->Text = L"Ürün Adý : ";
			// 
			// lblCategory
			// 
			this->lblCategory->AutoSize = true;
			this->lblCategory->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblCategory->Location = System::Drawing::Point(32, 115);
			this->lblCategory->Name = L"lblCategory";
			this->lblCategory->Size = System::Drawing::Size(73, 19);
			this->lblCategory->TabIndex = 5;
			this->lblCategory->Text = L"Kategori : ";
			// 
			// lblSale
			// 
			this->lblSale->AutoSize = true;
			this->lblSale->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblSale->Location = System::Drawing::Point(32, 147);
			this->lblSale->Name = L"lblSale";
			this->lblSale->Size = System::Drawing::Size(86, 19);
			this->lblSale->TabIndex = 6;
			this->lblSale->Text = L"Satýþ Fiyatý : ";
			// 
			// lblStock
			// 
			this->lblStock->AutoSize = true;
			this->lblStock->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblStock->Location = System::Drawing::Point(32, 179);
			this->lblStock->Name = L"lblStock";
			this->lblStock->Size = System::Drawing::Size(101, 19);
			this->lblStock->TabIndex = 7;
			this->lblStock->Text = L"Stok Durumu : ";
			// 
			// lblPiece
			// 
			this->lblPiece->AutoSize = true;
			this->lblPiece->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblPiece->Location = System::Drawing::Point(32, 211);
			this->lblPiece->Name = L"lblPiece";
			this->lblPiece->Size = System::Drawing::Size(57, 19);
			this->lblPiece->TabIndex = 8;
			this->lblPiece->Text = L"Adedi : ";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtName->Location = System::Drawing::Point(145, 76);
			this->txtName->Name = L"txtName";
			this->txtName->ReadOnly = true;
			this->txtName->Size = System::Drawing::Size(200, 26);
			this->txtName->TabIndex = 2;
			// 
			// txtCategory
			// 
			this->txtCategory->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtCategory->Location = System::Drawing::Point(144, 108);
			this->txtCategory->Name = L"txtCategory";
			this->txtCategory->ReadOnly = true;
			this->txtCategory->Size = System::Drawing::Size(200, 26);
			this->txtCategory->TabIndex = 3;
			// 
			// txtPrice
			// 
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtPrice->Location = System::Drawing::Point(144, 140);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->ReadOnly = true;
			this->txtPrice->Size = System::Drawing::Size(200, 26);
			this->txtPrice->TabIndex = 11;
			// 
			// txtStock
			// 
			this->txtStock->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtStock->Location = System::Drawing::Point(144, 172);
			this->txtStock->Name = L"txtStock";
			this->txtStock->ReadOnly = true;
			this->txtStock->Size = System::Drawing::Size(200, 26);
			this->txtStock->TabIndex = 12;
			// 
			// txtPiece
			// 
			this->txtPiece->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtPiece->Location = System::Drawing::Point(144, 204);
			this->txtPiece->Name = L"txtPiece";
			this->txtPiece->Size = System::Drawing::Size(200, 26);
			this->txtPiece->TabIndex = 13;
			this->txtPiece->TextChanged += gcnew System::EventHandler(this, &SalesForm::txtPiece_TextChanged);
			this->txtPiece->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SalesForm::txtPiece_KeyPress);
			// 
			// txtTotalPrice
			// 
			this->txtTotalPrice->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtTotalPrice->Location = System::Drawing::Point(144, 233);
			this->txtTotalPrice->Name = L"txtTotalPrice";
			this->txtTotalPrice->ReadOnly = true;
			this->txtTotalPrice->Size = System::Drawing::Size(200, 26);
			this->txtTotalPrice->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(32, 240);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 19);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Toplam Fiyat :";
			// 
			// lbl_UserId
			// 
			this->lbl_UserId->AutoSize = true;
			this->lbl_UserId->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_UserId->Location = System::Drawing::Point(269, 22);
			this->lbl_UserId->Name = L"lbl_UserId";
			this->lbl_UserId->Size = System::Drawing::Size(49, 19);
			this->lbl_UserId->TabIndex = 16;
			this->lbl_UserId->Text = L"Userid";
			this->lbl_UserId->Visible = false;
			// 
			// SalesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 405);
			this->Controls->Add(this->lbl_UserId);
			this->Controls->Add(this->txtTotalPrice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPiece);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtCategory);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblPiece);
			this->Controls->Add(this->lblStock);
			this->Controls->Add(this->lblSale);
			this->Controls->Add(this->lblCategory);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblCode);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->btnBuy);
			this->Controls->Add(this->lblId);
			this->Name = L"SalesForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SalesForm";
			this->Load += gcnew System::EventHandler(this, &SalesForm::SalesForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SalesForm_Load(System::Object^  sender, System::EventArgs^  e) {
		txtPiece->Focus();
	}

private: System::Void txtPiece_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

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
		MessageBox::Show("Sadece rakam girilmelidir!");
	}
}
private: System::Void btnBuy_Click(System::Object^  sender, System::EventArgs^  e) {

	int piece, stock;
	int StrToPiece = ConvertCs::StrToInt(txtPiece->Text, piece);
	int StrToStock = ConvertCs::StrToInt(txtStock->Text, stock);
	int totalStock = StrToStock - StrToPiece;
	if (StrToPiece > StrToStock)
	{
		MessageBox::Show("Ürün stoklarda bulunmamaktadýr!");
	}
	else if (txtPiece->Text == "")
	{
		MessageBox::Show("Lütfen adet sayýsýný giriniz!");
	}
	else
	{
		String^ query = "UPDATE products SET piece = '" + totalStock + "' WHERE id = " + lblId->Text + "";
		String^ insertQuery = "INSERT INTO sales (product_code, product_name, category, total_sales_price, sales_piece, suppliers) " +
			"VALUES ('" + txtCode->Text + "', '" + txtName->Text + "', '" + txtCategory->Text + "', '" + txtTotalPrice->Text + "', '" + txtPiece->Text + "', '" + lbl_UserId->Text + "')";
		Db::Update(query);
		Db::Insert(insertQuery);
		MessageBox::Show("Satýþ iþlemi baþarýyla yapýldý.");
		this->Close();
	}
}
private: System::Void txtPiece_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	double price, piece;
	double totalPrice = ConvertCs::StrToDouble(txtPrice->Text, price);
	double totalPiece= ConvertCs::StrToDouble(txtPiece->Text, piece);
	double totalSalesPrice = totalPrice * totalPiece;
	String^ totalSPrice = Convert::ToString(totalSalesPrice);
	String^ totalSsPrice = Convert::ToString(totalPrice);
	String^ totalSaPrice = Convert::ToString(totalPiece);
	txtTotalPrice->Text = totalSPrice;

}
};
}
