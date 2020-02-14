#include "GridButtons.h"

void GridButtons::Buttons(DataGridView^ dgw)
{
	DataGridViewButtonColumn^ btnclm = gcnew DataGridViewButtonColumn();
	dgw->Columns->Add(btnclm);
	btnclm->HeaderText = "";
	btnclm->Name = "Duzenle";
	btnclm->Text = "Düzenle";
	btnclm->Width = 65;
	btnclm->FlatStyle = FlatStyle::Popup;
	btnclm->DefaultCellStyle->ForeColor = Color::White;
	btnclm->DefaultCellStyle->BackColor = Color::Blue;
	btnclm->UseColumnTextForButtonValue = true;

	DataGridViewButtonColumn^ btnsil = gcnew DataGridViewButtonColumn();
	dgw->Columns->Add(btnsil);
	btnsil->HeaderText = "";
	btnsil->Name = "Sil";
	btnsil->Text = "Sil";
	btnsil->Width = 55;
	btnsil->FlatStyle = FlatStyle::Popup;
	btnsil->DefaultCellStyle->ForeColor = Color::White;
	btnsil->DefaultCellStyle->BackColor = Color::DarkRed;
	btnsil->UseColumnTextForButtonValue = true;
}

void GridButtons::MainButtons(DataGridView^ dgw)
{
	
}

void GridButtons::Columns(DataGridView^ dgw)
{ 
	// id
	DataGridViewTextBoxColumn^ id = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(id);
	id->DataPropertyName = L"id";
	id->HeaderText = L"ID";
	id->Name = L"id";
	id->ReadOnly = true;
 
	// company_name
	DataGridViewTextBoxColumn^ companyName = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(companyName);
	companyName->DataPropertyName = L"company_name";
	companyName->HeaderText = L"Firma Adý";
	companyName->Name = L"company_name";
	companyName->ReadOnly = true;

	// title
	DataGridViewTextBoxColumn^ title = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(title);
	title->DataPropertyName = L"title";
	title->HeaderText = L"Ünvaný";
	title->Name = L"title";
	title->ReadOnly = true;

	// address
	DataGridViewTextBoxColumn^ address = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(address);
	address->DataPropertyName = L"address";
	address->HeaderText = L"Adres";
	address->Name = L"address";
	address->ReadOnly = true;
 
	// tax_administration
	DataGridViewTextBoxColumn^ tax_administration = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(tax_administration);
	tax_administration->DataPropertyName = L"tax_administration";
	tax_administration->HeaderText = L"Vergi Dairesi";
	tax_administration->Name = L"tax_administration";
	tax_administration->ReadOnly = true;

	// tax_no
	DataGridViewTextBoxColumn^ tax_no = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(tax_no);
	tax_no->DataPropertyName = L"tax_no";
	tax_no->HeaderText = L"Vergi Numarasý";
	tax_no->Name = L"tax_no";
	tax_no->ReadOnly = true;
 
	// phone
	DataGridViewTextBoxColumn^ phone = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(phone);
	phone->DataPropertyName = L"phone";
	phone->HeaderText = L"Telefon";
	phone->Name = L"phone";
	phone->ReadOnly = true;
	 
	// mobile_phone
	DataGridViewTextBoxColumn^ mobile_phone = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(mobile_phone);
	mobile_phone->DataPropertyName = L"mobile_phone";
	mobile_phone->HeaderText = L"Cep Telefonu";
	mobile_phone->Name = L"mobile_phone";
	mobile_phone->ReadOnly = true;
	 
	// email
	DataGridViewTextBoxColumn^ email = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(email);
	email->DataPropertyName = L"email";
	email->HeaderText = L"Email";
	email->Name = L"email";
	email->ReadOnly = true;
}

void GridButtons::MainFormColumns(DataGridView^ dgw)
{
	// id
	DataGridViewTextBoxColumn^ id = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(id);
	id->DataPropertyName = L"id";
	id->HeaderText = L"Column1";
	id->Name = L"id";
	id->ReadOnly = true;
	id->Visible = false;
	
	//code
	DataGridViewTextBoxColumn^ code = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(code);
	code->DataPropertyName = L"code";
	code->HeaderText = L"Ürün Kodu";
	code->Name = L"code";
	code->Width = 100;
	code->ReadOnly = true;

	// name
	DataGridViewTextBoxColumn^ name = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(name);
	name->DataPropertyName = L"name";
	name->HeaderText = L"Ürün Adý";
	name->Name = L"name";
	name->Width = 150;
	name->ReadOnly = true;

	// category
	DataGridViewTextBoxColumn^ category = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(category);
	category->DataPropertyName = L"category";
	category->HeaderText = L"Kategori";
	category->Name = L"category";
	category->Width = 200;
	category->ReadOnly = true;
 
	// sales_total_price
	DataGridViewTextBoxColumn^ sales_total_price = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(sales_total_price);
	sales_total_price->DataPropertyName = L"sales_total_price";
	sales_total_price->HeaderText = L"Fiyat";
	sales_total_price->Name = L"sales_total_price";
	sales_total_price->ReadOnly = true;
	 
	// suppliers
	DataGridViewTextBoxColumn^ suppliers = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(suppliers);
	suppliers->DataPropertyName = L"suppliers";
	suppliers->HeaderText = L"Kursiyer";
	suppliers->Name = L"suppliers";
	suppliers->ReadOnly = true;

	// made_by
	DataGridViewTextBoxColumn^ made_by = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(made_by);
	made_by->DataPropertyName = L"made_by";
	made_by->HeaderText = L"Üretim Yeri";
	made_by->Name = L"made_by";
	made_by->ReadOnly = true;
	 
	// piece
	DataGridViewTextBoxColumn^ piece = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(piece);
	piece->DataPropertyName = L"piece";
	piece->HeaderText = L"Stok Durumu";
	piece->Name = L"piece";
	piece->ReadOnly = true;

	//buttons

	DataGridViewButtonColumn^ btnclm = gcnew DataGridViewButtonColumn();
	dgw->Columns->Add(btnclm);
	btnclm->HeaderText = "Satýþ";
	btnclm->Name = "SatinAl";
	btnclm->Text = "Satýn Al";
	btnclm->Width = 65;
	btnclm->FlatStyle = FlatStyle::Popup;
	btnclm->DefaultCellStyle->ForeColor = Color::White;
	btnclm->DefaultCellStyle->BackColor = Color::Blue;
	btnclm->UseColumnTextForButtonValue = true;
}

void GridButtons::ProductColumns(DataGridView^ dgw)
{
	// id
	DataGridViewTextBoxColumn^ id = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(id);
	id->DataPropertyName = L"id";
	id->HeaderText = L"ID";
	id->Name = L"id";
	id->Width = 50;
	id->ReadOnly = true;

	// code
	DataGridViewTextBoxColumn^ code = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(code);
	code->DataPropertyName = L"code";
	code->HeaderText = L"Ürün Kodu";
	code->Name = L"code";
	code->ReadOnly = true;

	// name
	DataGridViewTextBoxColumn^ name = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(name);
	name->DataPropertyName = L"name";
	name->HeaderText = L"Ürün Adý";
	name->Name = L"name";
	name->ReadOnly = true;

	// category
	DataGridViewTextBoxColumn^ category = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(category);
	category->DataPropertyName = L"category";
	category->HeaderText = L"Kategori";
	category->Name = L"category";
	category->ReadOnly = true;

	// sales_net_price
	DataGridViewTextBoxColumn^ sales_net_price = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(sales_net_price);
	sales_net_price->DataPropertyName = L"sales_net_price";
	sales_net_price->HeaderText = L"Satýþ Net Fiyatý";
	sales_net_price->Name = L"sales_net_price";
	id->Width = 50;
	sales_net_price->ReadOnly = true;

	// sales_tax
	DataGridViewTextBoxColumn^ sales_tax = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(sales_tax);
	sales_tax->DataPropertyName = L"sales_tax";
	sales_tax->HeaderText = L"Satýþ KDV";
	sales_tax->Name = L"sales_tax";
	id->Width = 50;
	sales_tax->ReadOnly = true;

	// sales_total_price
	DataGridViewTextBoxColumn^ sales_total_price = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(sales_total_price);
	sales_total_price->DataPropertyName = L"sales_total_price";
	sales_total_price->HeaderText = L"Satýþ Fiyatý";
	sales_total_price->Name = L"sales_total_price";
	id->Width = 50;
	sales_total_price->ReadOnly = true;

	// purchase_net_price
	DataGridViewTextBoxColumn^ purchase_net_price = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(purchase_net_price);
	purchase_net_price->DataPropertyName = L"purchase_net_price";
	purchase_net_price->HeaderText = L"Alýþ Net Fiyatý";
	purchase_net_price->Name = L"purchase_net_price";
	purchase_net_price->ReadOnly = true;

	// purchase_tax
	DataGridViewTextBoxColumn^ purchase_tax = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(purchase_tax);
	purchase_tax->DataPropertyName = L"purchase_tax";
	purchase_tax->HeaderText = L"Alýþ KDV";
	purchase_tax->Name = L"purchase_tax";
	id->Width = 50;
	purchase_tax->ReadOnly = true;

	// purchase_total_price
	DataGridViewTextBoxColumn^ purchase_total_price = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(purchase_total_price);
	purchase_total_price->DataPropertyName = L"purchase_total_price";
	purchase_total_price->HeaderText = L"Alýþ Fiyatý";
	purchase_total_price->Name = L"purchase_total_price";
	id->Width = 50;
	purchase_total_price->ReadOnly = true;

	// suppliers
	DataGridViewTextBoxColumn^ suppliers = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(suppliers);
	suppliers->DataPropertyName = L"suppliers";
	suppliers->HeaderText = L"Kursiyer";
	suppliers->Name = L"suppliers";
	suppliers->ReadOnly = true;

	// suppliers
	DataGridViewTextBoxColumn^ made_by = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(made_by);
	made_by->DataPropertyName = L"made_by";
	made_by->HeaderText = L"Üretim Yeri";
	made_by->Name = L"made_by";
	made_by->ReadOnly = true;

	// suppliers
	DataGridViewTextBoxColumn^ piece = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(piece);
	piece->DataPropertyName = L"piece";
	piece->HeaderText = L"Adedi";
	piece->Name = L"piece";
	id->Width = 50;
	piece->ReadOnly = true;
}

void GridButtons::MonthlyColumns(DataGridView^ dgw) {
	// code
	DataGridViewTextBoxColumn^ product_code = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(product_code);
	product_code->DataPropertyName = L"product_code";
	product_code->HeaderText = L"Ürün Kodu";
	product_code->Name = L"product_code";
	product_code->ReadOnly = true;

	// name
	DataGridViewTextBoxColumn^ name = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(name);
	name->DataPropertyName = L"product_name";
	name->HeaderText = L"Ürün Adý";
	name->Name = L"product_name";
	name->ReadOnly = true;

	// category
	DataGridViewTextBoxColumn^ category = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(category);
	category->DataPropertyName = L"category";
	category->HeaderText = L"Kategori";
	category->Name = L"category";
	category->ReadOnly = true;

	// sales_net_price
	DataGridViewTextBoxColumn^ total_sales_price = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(total_sales_price);
	total_sales_price->DataPropertyName = L"total_sales_price";
	total_sales_price->HeaderText = L"Toplam Satýþ Fiyatý";
	total_sales_price->Name = L"total_sales_price";
	total_sales_price->ReadOnly = true;

	// sales_tax
	DataGridViewTextBoxColumn^ sales_piece = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(sales_piece);
	sales_piece->DataPropertyName = L"sales_piece";
	sales_piece->HeaderText = L"Satýþ Adedi";
	sales_piece->Name = L"sales_piece";
	sales_piece->ReadOnly = true;

	// sales_total_price
	DataGridViewTextBoxColumn^ suppliers = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(suppliers);
	suppliers->DataPropertyName = L"suppliers";
	suppliers->HeaderText = L"Kursiyer";
	suppliers->Name = L"suppliers";
	suppliers->ReadOnly = true;

	// purchase_net_price
	DataGridViewTextBoxColumn^ sales_Date = gcnew DataGridViewTextBoxColumn();
	dgw->Columns->Add(sales_Date);
	sales_Date->DataPropertyName = L"sales_Date";
	sales_Date->HeaderText = L"Satýþ Tarihi";
	sales_Date->Name = L"sales_Date";
	sales_Date->ReadOnly = true;
}

GridButtons::GridButtons()
{
}

GridButtons::~GridButtons()
{
}
