#pragma once
#include "Db.h"
#include "GridButtons.h"
namespace SellingSistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MonthlyRaportForm
	/// </summary>
	public ref class MonthlyRaportForm : public System::Windows::Forms::Form
	{
	public:
		MonthlyRaportForm(void)
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
		~MonthlyRaportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgwSuppliers;
	private: System::Windows::Forms::DateTimePicker^  dtBegin;
	private: System::Windows::Forms::DateTimePicker^  dtEnd;
	private: System::Windows::Forms::Button^  btnList;
	private: System::Windows::Forms::Button^  btnAll;
	private: System::Windows::Forms::ComboBox^  cmbSupplier;
	private: System::Windows::Forms::Label^  lblTotal;
	private: System::Windows::Forms::Label^  label1;


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
			this->dtBegin = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnList = (gcnew System::Windows::Forms::Button());
			this->btnAll = (gcnew System::Windows::Forms::Button());
			this->cmbSupplier = (gcnew System::Windows::Forms::ComboBox());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwSuppliers))->BeginInit();
			this->SuspendLayout();
			// 
			// dgwSuppliers
			// 
			this->dgwSuppliers->AllowUserToAddRows = false;
			this->dgwSuppliers->AllowUserToDeleteRows = false;
			this->dgwSuppliers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgwSuppliers->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgwSuppliers->Location = System::Drawing::Point(0, 115);
			this->dgwSuppliers->Name = L"dgwSuppliers";
			this->dgwSuppliers->ReadOnly = true;
			this->dgwSuppliers->RowHeadersVisible = false;
			this->dgwSuppliers->Size = System::Drawing::Size(1257, 411);
			this->dgwSuppliers->TabIndex = 13;
			// 
			// dtBegin
			// 
			this->dtBegin->CustomFormat = L"yyyy-MM-dd HH:mm:ss";
			this->dtBegin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->dtBegin->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtBegin->Location = System::Drawing::Point(37, 27);
			this->dtBegin->Name = L"dtBegin";
			this->dtBegin->Size = System::Drawing::Size(192, 24);
			this->dtBegin->TabIndex = 14;
			// 
			// dtEnd
			// 
			this->dtEnd->CustomFormat = L"yyyy-MM-dd HH:mm:ss";
			this->dtEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->dtEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtEnd->Location = System::Drawing::Point(235, 27);
			this->dtEnd->Name = L"dtEnd";
			this->dtEnd->Size = System::Drawing::Size(200, 24);
			this->dtEnd->TabIndex = 15;
			// 
			// btnList
			// 
			this->btnList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnList->Location = System::Drawing::Point(594, 21);
			this->btnList->Name = L"btnList";
			this->btnList->Size = System::Drawing::Size(100, 30);
			this->btnList->TabIndex = 16;
			this->btnList->Text = L"Listele";
			this->btnList->UseVisualStyleBackColor = true;
			this->btnList->Click += gcnew System::EventHandler(this, &MonthlyRaportForm::btnList_Click);
			// 
			// btnAll
			// 
			this->btnAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnAll->Location = System::Drawing::Point(700, 21);
			this->btnAll->Name = L"btnAll";
			this->btnAll->Size = System::Drawing::Size(100, 30);
			this->btnAll->TabIndex = 18;
			this->btnAll->Text = L"Tümü";
			this->btnAll->UseVisualStyleBackColor = true;
			this->btnAll->Click += gcnew System::EventHandler(this, &MonthlyRaportForm::btnAll_Click);
			// 
			// cmbSupplier
			// 
			this->cmbSupplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->cmbSupplier->FormattingEnabled = true;
			this->cmbSupplier->Location = System::Drawing::Point(456, 25);
			this->cmbSupplier->Name = L"cmbSupplier";
			this->cmbSupplier->Size = System::Drawing::Size(121, 26);
			this->cmbSupplier->TabIndex = 19;
			// 
			// lblTotal
			// 
			this->lblTotal->AutoSize = true;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lblTotal->Location = System::Drawing::Point(33, 72);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(66, 24);
			this->lblTotal->TabIndex = 20;
			this->lblTotal->Text = L"label1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(123, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 24);
			this->label1->TabIndex = 21;
			this->label1->Text = L".TL";
			// 
			// MonthlyRaportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1257, 526);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblTotal);
			this->Controls->Add(this->cmbSupplier);
			this->Controls->Add(this->btnAll);
			this->Controls->Add(this->btnList);
			this->Controls->Add(this->dtEnd);
			this->Controls->Add(this->dtBegin);
			this->Controls->Add(this->dgwSuppliers);
			this->Name = L"MonthlyRaportForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Aylýk Rapor";
			this->Load += gcnew System::EventHandler(this, &MonthlyRaportForm::MonthlyRaportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwSuppliers))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MonthlyRaportForm_Load(System::Object^  sender, System::EventArgs^  e) {
		GridButtons::MonthlyColumns(dgwSuppliers);
		String^ query = "SELECT product_code, product_name, category, total_sales_price, sales_piece, suppliers, sales_Date FROM sales WHERE status = 1";
		Db::FillMonthRaportGrid(dgwSuppliers, query, "sales");
		String^ query1 = "SELECT id, company_name FROM suppliers where status = 1";
		Db::FillCmb(cmbSupplier, query1, "suppliers");
		double sum = 0;
		for (int i = 0; i < dgwSuppliers->Rows->Count; i++) {
			sum += Convert::ToDouble(dgwSuppliers->Rows[i]->Cells[3]->Value);
		}

		lblTotal->Text = Convert::ToString(sum);
	}
	private: System::Void btnList_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String^ query = "SELECT product_code, product_name, category, total_sales_price, sales_piece, suppliers, sales_Date FROM sales WHERE suppliers = '" + cmbSupplier->Text + "' AND sales_date BETWEEN '" + dtBegin->Text + "' AND '"+ dtEnd->Text +"'";
		Db::FillMonthRaportGrid(dgwSuppliers, query, "sales");
		double sum = 0;
		for (int i = 0; i < dgwSuppliers->Rows->Count; i++) {
			sum += Convert::ToDouble(dgwSuppliers->Rows[i]->Cells[3]->Value);
		}
		lblTotal->Text = Convert::ToString(sum);
	}
private: System::Void btnAll_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ query = "SELECT product_code, product_name, category, total_sales_price, sales_piece, suppliers, sales_Date FROM sales WHERE status = 1";
	Db::FillMonthRaportGrid(dgwSuppliers, query, "sales");
	double sum = 0;
	for (int i = 0; i < dgwSuppliers->Rows->Count; i++) {
		sum += Convert::ToDouble(dgwSuppliers->Rows[i]->Cells[3]->Value);
	}

	lblTotal->Text = Convert::ToString(sum);
}
};
}
