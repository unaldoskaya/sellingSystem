#pragma once
#include "Db.h"
namespace SellingSistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewSuppliersForm
	/// </summary>
	public ref class NewSuppliersForm : public System::Windows::Forms::Form
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
	public: property System::String^ Title
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
	public: property System::String^ Address
	{
		System::String^ get()
		{
			return txt_adress->Text;
		}
		void set(System::String^ text)
		{
			txt_adress->Text = text;
		}
	}
	public: property System::String^ TaxAdministration
	{
		System::String^ get()
		{
			return txt_taxAdministration->Text;
		}
		void set(System::String^ text)
		{
			txt_taxAdministration->Text = text;
		}
	}
	public: property System::String^ TaxNo
	{
		System::String^ get()
		{
			return txt_taxNo->Text;
		}
		void set(System::String^ text)
		{
			txt_taxNo->Text = text;
		}
	}
	public: property System::String^ Phone
	{
		System::String^ get()
		{
			return txt_phone->Text;
		}
		void set(System::String^ text)
		{
			txt_phone->Text = text;
		}
	}
	public: property System::String^ Mobile
	{
		System::String^ get()
		{
			return txt_mobile->Text;
		}
		void set(System::String^ text)
		{
			txt_mobile->Text = text;
		}
	}
	public: property System::String^ Email
	{
		System::String^ get()
		{
			return txt_email->Text;
		}
		void set(System::String^ text)
		{
			txt_email->Text = text;
		}
	}
	public:
		NewSuppliersForm(void)
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
		~NewSuppliersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txt_Code;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_name;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_adress;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txt_taxAdministration;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt_taxNo;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txt_mobile;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txt_phone;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txt_email;

	private: System::Windows::Forms::Label^  label8;







	private: System::Windows::Forms::Button^  btn_save;
	private: System::Windows::Forms::Label^  lblId;




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
			this->txt_Code = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_adress = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_taxAdministration = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_taxNo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_mobile = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt_Code
			// 
			this->txt_Code->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_Code->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_Code->Location = System::Drawing::Point(212, 43);
			this->txt_Code->Name = L"txt_Code";
			this->txt_Code->Size = System::Drawing::Size(286, 26);
			this->txt_Code->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(37, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Kursiyer Adý :";
			// 
			// txt_name
			// 
			this->txt_name->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_name->Location = System::Drawing::Point(212, 80);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(286, 26);
			this->txt_name->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(37, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ünvaný :";
			// 
			// txt_adress
			// 
			this->txt_adress->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_adress->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_adress->Location = System::Drawing::Point(212, 114);
			this->txt_adress->Name = L"txt_adress";
			this->txt_adress->Size = System::Drawing::Size(286, 26);
			this->txt_adress->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(37, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Adres:";
			// 
			// txt_taxAdministration
			// 
			this->txt_taxAdministration->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_taxAdministration->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_taxAdministration->Location = System::Drawing::Point(212, 152);
			this->txt_taxAdministration->Name = L"txt_taxAdministration";
			this->txt_taxAdministration->Size = System::Drawing::Size(286, 26);
			this->txt_taxAdministration->TabIndex = 4;
			this->txt_taxAdministration->Text = L"TR";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(37, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 19);
			this->label4->TabIndex = 8;
			this->label4->Text = L"IBAN No :";
			// 
			// txt_taxNo
			// 
			this->txt_taxNo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_taxNo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_taxNo->Location = System::Drawing::Point(212, 189);
			this->txt_taxNo->Name = L"txt_taxNo";
			this->txt_taxNo->Size = System::Drawing::Size(286, 26);
			this->txt_taxNo->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(37, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Banka :";
			// 
			// txt_mobile
			// 
			this->txt_mobile->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_mobile->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_mobile->Location = System::Drawing::Point(212, 260);
			this->txt_mobile->Name = L"txt_mobile";
			this->txt_mobile->Size = System::Drawing::Size(286, 26);
			this->txt_mobile->TabIndex = 7;
			this->txt_mobile->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NewSuppliersForm::txt_mobile_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(37, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 19);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Telefon :";
			// 
			// txt_phone
			// 
			this->txt_phone->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txt_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_phone->Location = System::Drawing::Point(212, 226);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(286, 26);
			this->txt_phone->TabIndex = 6;
			this->txt_phone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NewSuppliersForm::txt_phone_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(37, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 19);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Cep Telefonu :";
			// 
			// txt_email
			// 
			this->txt_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txt_email->Location = System::Drawing::Point(212, 295);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(286, 26);
			this->txt_email->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(37, 295);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 19);
			this->label8->TabIndex = 16;
			this->label8->Text = L"E mail :";
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btn_save->Location = System::Drawing::Point(400, 346);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(98, 53);
			this->btn_save->TabIndex = 9;
			this->btn_save->Text = L"EKLE";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &NewSuppliersForm::btn_save_Click);
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblId->Location = System::Drawing::Point(475, 10);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(21, 19);
			this->lblId->TabIndex = 26;
			this->lblId->Text = L"id";
			this->lblId->Visible = false;
			// 
			// NewSuppliersForm
			// 
			this->AcceptButton = this->btn_save;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 477);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_phone);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_mobile);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_taxNo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_taxAdministration);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_adress);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_Code);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"NewSuppliersForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Yeni Kursiyer";
			this->Load += gcnew System::EventHandler(this, &NewSuppliersForm::NewSuppliersForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_save_Click(System::Object^  sender, System::EventArgs^  e) {

		if (lblId->Text == "id")
		{
			if (txt_adress->Text == "" || txt_Code->Text == "" || txt_email->Text == "" || txt_mobile->Text == "" ||
				txt_name->Text == "" || txt_phone->Text == "" || txt_taxAdministration->Text == "" || txt_taxNo->Text == "")
			{
				MessageBox::Show("Ýþaretli tüm alanlarý doldurunuz!");
				txt_Code->Focus();
				return;
			}
			else
			{
				String^ query = "INSERT INTO suppliers (company_name, title, address, tax_administration, tax_no, phone, mobile_phone, email)" +
					" VALUES ('" + txt_Code->Text + "', '" + txt_name->Text + "', '" + txt_adress->Text + "', '" + txt_taxAdministration->Text + "', '" + txt_taxNo->Text + "',"+ 
					"'" + txt_phone->Text + "', '" + txt_mobile->Text + "', '" + txt_email->Text + "')";
				Db::Insert(query);
				txt_adress->Text = "";
				txt_Code->Text = "";
				txt_email->Text = "";
				txt_mobile->Text = "";
				txt_name->Text = "";
				txt_phone->Text = "";
				txt_taxAdministration->Text = "";
				txt_taxNo->Text = "";	
			}
		}
		else
		{
			if (txt_adress->Text == "" || txt_Code->Text == "" || txt_email->Text == "" || txt_mobile->Text == "" ||
				txt_name->Text == "" || txt_phone->Text == "" || txt_taxAdministration->Text == "" || txt_taxNo->Text == "")
			{
				MessageBox::Show("Ýþaretli tüm alanlarý doldurunuz!");
				txt_Code->Focus();
				return;
			}
			String^ query = "UPDATE suppliers SET company_name = '" + txt_Code->Text + "', title = '" + txt_name->Text + "', address = '" + txt_adress->Text + "'," + 
				"tax_administration = '" + txt_taxAdministration->Text + "', tax_no = '" + txt_taxNo->Text + "', phone =  '" + txt_phone->Text + "'," + 
				"mobile_phone = '" + txt_mobile->Text + "', email = '" + txt_email->Text + "' WHERE id = " + lblId->Text + "";
			Db::Update(query);
			txt_adress->Text = "";
			txt_Code->Text = "";
			txt_email->Text = "";
			txt_mobile->Text = "";
			txt_name->Text = "";
			txt_phone->Text = "";
			txt_taxAdministration->Text = "";
			txt_taxNo->Text = "";
		}
	}
private: System::Void NewSuppliersForm_Load(System::Object^  sender, System::EventArgs^  e) {

	txt_name->Text = "";
}
private: System::Void txt_phone_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

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
private: System::Void txt_mobile_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

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
