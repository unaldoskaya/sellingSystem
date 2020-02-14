#pragma once
#include "MainForm.h"
namespace SellingSistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnlogin;
	protected:
	private: System::Windows::Forms::Label^  lbl_username;
	private: System::Windows::Forms::Label^  lbl_pass;
	private: System::Windows::Forms::TextBox^  txtusername;
	private: System::Windows::Forms::TextBox^  txtpass;
	private: System::Windows::Forms::Button^  btncancel;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  rbtn_manager;
	private: System::Windows::Forms::RadioButton^  rbtn_client;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->btnlogin = (gcnew System::Windows::Forms::Button());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->lbl_pass = (gcnew System::Windows::Forms::Label());
			this->txtusername = (gcnew System::Windows::Forms::TextBox());
			this->txtpass = (gcnew System::Windows::Forms::TextBox());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->rbtn_manager = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn_client = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnlogin
			// 
			this->btnlogin->BackColor = System::Drawing::Color::DarkCyan;
			this->btnlogin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnlogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnlogin->ForeColor = System::Drawing::SystemColors::Control;
			this->btnlogin->Location = System::Drawing::Point(185, 200);
			this->btnlogin->Name = L"btnlogin";
			this->btnlogin->Size = System::Drawing::Size(100, 40);
			this->btnlogin->TabIndex = 3;
			this->btnlogin->Text = L"GÝRÝÞ YAP";
			this->btnlogin->UseVisualStyleBackColor = false;
			this->btnlogin->Click += gcnew System::EventHandler(this, &LoginForm::btnlogin_Click);
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_username->ForeColor = System::Drawing::Color::Firebrick;
			this->lbl_username->Location = System::Drawing::Point(185, 50);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(147, 27);
			this->lbl_username->TabIndex = 7;
			this->lbl_username->Text = L"Kullanýcý Adý : ";
			this->lbl_username->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// lbl_pass
			// 
			this->lbl_pass->AutoSize = true;
			this->lbl_pass->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->lbl_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_pass->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbl_pass->ForeColor = System::Drawing::Color::Firebrick;
			this->lbl_pass->Location = System::Drawing::Point(185, 90);
			this->lbl_pass->Name = L"lbl_pass";
			this->lbl_pass->Size = System::Drawing::Size(76, 27);
			this->lbl_pass->TabIndex = 2;
			this->lbl_pass->Text = L"Þifre :";
			this->lbl_pass->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// txtusername
			// 
			this->txtusername->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->txtusername->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtusername->Location = System::Drawing::Point(340, 50);
			this->txtusername->Name = L"txtusername";
			this->txtusername->Size = System::Drawing::Size(150, 30);
			this->txtusername->TabIndex = 1;
			this->txtusername->Enter += gcnew System::EventHandler(this, &LoginForm::txtusername_Enter);
			// 
			// txtpass
			// 
			this->txtpass->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtpass->Location = System::Drawing::Point(340, 90);
			this->txtpass->Name = L"txtpass";
			this->txtpass->PasswordChar = '*';
			this->txtpass->Size = System::Drawing::Size(150, 30);
			this->txtpass->TabIndex = 2;
			this->txtpass->Enter += gcnew System::EventHandler(this, &LoginForm::txtpass_Enter);
			this->txtpass->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::txtpass_KeyPress);
			// 
			// btncancel
			// 
			this->btncancel->BackColor = System::Drawing::Color::DarkCyan;
			this->btncancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btncancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btncancel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btncancel->ForeColor = System::Drawing::SystemColors::Control;
			this->btncancel->Location = System::Drawing::Point(340, 200);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(100, 40);
			this->btncancel->TabIndex = 4;
			this->btncancel->Text = L"ÇIKIÞ";
			this->btncancel->UseVisualStyleBackColor = false;
			this->btncancel->Click += gcnew System::EventHandler(this, &LoginForm::btncancel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(169, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// rbtn_manager
			// 
			this->rbtn_manager->AutoSize = true;
			this->rbtn_manager->Checked = true;
			this->rbtn_manager->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->rbtn_manager->Location = System::Drawing::Point(185, 150);
			this->rbtn_manager->Name = L"rbtn_manager";
			this->rbtn_manager->Size = System::Drawing::Size(86, 22);
			this->rbtn_manager->TabIndex = 9;
			this->rbtn_manager->TabStop = true;
			this->rbtn_manager->Text = L"Yönetici";
			this->rbtn_manager->UseVisualStyleBackColor = true;
			// 
			// rbtn_client
			// 
			this->rbtn_client->AutoSize = true;
			this->rbtn_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->rbtn_client->Location = System::Drawing::Point(340, 150);
			this->rbtn_client->Name = L"rbtn_client";
			this->rbtn_client->Size = System::Drawing::Size(77, 22);
			this->rbtn_client->TabIndex = 10;
			this->rbtn_client->TabStop = true;
			this->rbtn_client->Text = L"Misafir";
			this->rbtn_client->UseVisualStyleBackColor = true;
			// 
			// LoginForm
			// 
			this->AcceptButton = this->btnlogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->CancelButton = this->btncancel;
			this->ClientSize = System::Drawing::Size(550, 300);
			this->ControlBox = false;
			this->Controls->Add(this->rbtn_client);
			this->Controls->Add(this->rbtn_manager);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->txtpass);
			this->Controls->Add(this->txtusername);
			this->Controls->Add(this->lbl_pass);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->btnlogin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
private: System::Void btncancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void btnlogin_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ user = txtusername->Text;
	String^ pass = txtpass->Text;
	String^ name;
	String^ surname;
	String^ rank;
	String^ id;
	Db::Conn();
	if (this->rbtn_manager->Checked == true)
	{
		this->rbtn_manager->Text = "0";
		String^ query = "SELECT * FROM users WHERE username = '" + user + "' AND pass = '" + pass + "' AND rank = '" + rbtn_manager->Text + "'";
		MySqlCommand^ cmd = gcnew MySqlCommand(query, Db::Con);
		MySqlDataReader^ dr = cmd->ExecuteReader();
		if (dr->Read())
		{
			id = dr[0]->ToString();
			name = dr[1]->ToString();
			surname = dr[2]->ToString();
			rank = dr[6]->ToString();
			this->Hide();
			MainForm^ main = gcnew MainForm();
			//main->UserName = "Hoþgeldiniz, Sn. " + name + " " + surname;
			main->Rank = rank;
			main->ID = id;
			main->ShowDialog();
		}
		else if (this->txtusername->Text == "" || this->txtpass->Text == "")
		{
			MessageBox::Show("Kullanýcý adý veya Þifre boþ býrakýlamaz!!!");
			this->txtusername->Text = "";
			this->txtpass->Text = "";
			rbtn_manager->Text = "Yönetici";
			txtusername->Focus();
		}
		else
		{
			MessageBox::Show("Kullanýcý adý veya Þifre hatalý!!!");
			this->txtusername->Text = "";
			this->txtpass->Text = "";
			rbtn_manager->Text = "Yönetici";
			txtusername->Focus();
		}

		Db::Con->Close();
	}
	else if (this->rbtn_client->Checked == true)
	{
		String^ query1 = "SELECT * FROM users WHERE username = '" + txtusername->Text + "' AND pass = '" + txtpass->Text + "'";
		MySqlCommand^ cmd = gcnew MySqlCommand(query1, Db::Con);
		MySqlDataReader^ dr = cmd->ExecuteReader();

		if (dr->Read())
		{
			id = dr[0]->ToString();
			name = dr[1]->ToString();
			surname = dr[2]->ToString();
			rank = dr[6]->ToString();
			MainForm^ main = gcnew MainForm();
			//main->UserName = "Hoþgeldiniz, Sn. " + name + " " + surname;
			main->ID = id;
			main->Rank = rank;
			this->Hide();
			main->ShowDialog();
		}
		else if (this->txtusername->Text == "" || this->txtpass->Text == "")
		{
			MessageBox::Show("Kullanýcý adý veya Þifre boþ býrakýlamaz!!!");
			this->txtusername->Text = "";
			this->txtpass->Text = "";
			txtusername->Focus();
		}
		else
		{
			MessageBox::Show("Kullanýcý adý veya Þifre hatalý!!!");
			this->txtusername->Text = "";
			this->txtpass->Text = "";
			txtusername->Focus();
		}
		Db::Con->Close();
	}
	
}
private: System::Void txtpass_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	
	txtpass->MaxLength = 4;
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
		MessageBox::Show("Þifreniz yanlýzca rakam ve en fazla 4 karakterden oluþmalýdýr!");
	}
}
private: System::Void txtusername_Enter(System::Object^  sender, System::EventArgs^  e) {
	
	txtusername->Text = txtusername->Text->ToLower();
	txtusername->SelectAll();
}
private: System::Void txtpass_Enter(System::Object^  sender, System::EventArgs^  e) {
	
	txtpass->SelectAll();
}
};
}
