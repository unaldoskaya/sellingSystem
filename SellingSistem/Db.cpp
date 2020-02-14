#include "Db.h"
#include "GridButtons.h"
#include "ConvertCs.h"
String^ Db::Conn()
{
	try
	{
		conStr = "SERVER = 127.0.0.1; port = 3306; DATABASE = sellingsystem; UID = root; PWD = root";
		Con = gcnew MySqlConnection(conStr);
		Con->Open();
	}
	catch (Exception^ se)
	{
		MessageBox::Show(se->Message);
	}

	return "true";
}

String^ Db::Insert(String^ query)
{
	Db::Conn();
	MySqlCommand^ cmd = gcnew MySqlCommand(query, Con);
	cmd->ExecuteNonQuery();
	//MessageBox::Show("Kayýt Baþarýlý!");
	Con->Close();

	return "true";
}

String^ Db::Update(String^ query)
{
	Db::Conn();
	MySqlCommand^ cmd = gcnew MySqlCommand(query, Con);
	cmd->ExecuteNonQuery();
	//MessageBox::Show("Güncelleme Baþarýlý!");
	Con->Close();

	return "true";
}

String^ Db::Delete(String^ query)
{
	Db::Conn();
	MySqlCommand^ cmd = gcnew MySqlCommand(query, Con);
	cmd->ExecuteNonQuery();
	MessageBox::Show("Baþarýyla Silindi!");
	Con->Close();

	return "true";
}

String^ Db::FillGrid(DataGridView^ dgw, String^ query, String^ tableName)
{
	Db::Conn();
	cmd = gcnew MySqlCommand(query, Con);
	da = gcnew MySqlDataAdapter();
	da->SelectCommand = cmd;
	dt = gcnew DataTable();
	da->Fill(dt);
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dgw->DataSource = bSource;
	da->Update(dt);
	Con->Close();

	return "true";
}

String^ Db::FillMainGrid(DataGridView^ dgw, String^ query, String^ tableName)
{
	Db::Conn();
	da = gcnew MySqlDataAdapter(query, Con);
	dt = gcnew System::Data::DataTable();
	da->Fill(dt);
	for each (DataRow^ row in dt->Rows)
	{
		int n = dgw->Rows->Add();
		dgw->Rows[n]->Cells[0]->Value = row["id"]->ToString();
		dgw->Rows[n]->Cells[1]->Value = row["code"]->ToString();
		dgw->Rows[n]->Cells[2]->Value = row["name"]->ToString();
		dgw->Rows[n]->Cells[3]->Value = row["category"]->ToString();
		dgw->Rows[n]->Cells[4]->Value = row["sales_total_price"]->ToString();
		dgw->Rows[n]->Cells[5]->Value = row["suppliers"]->ToString();
		dgw->Rows[n]->Cells[6]->Value = row["made_by"]->ToString();
		dgw->Rows[n]->Cells[7]->Value = row["piece"]->ToString();
	}	
	Db::Con->Close();

	return "true";
}

String^ Db::FillCmb(ComboBox^ cmb, String^ query, String^ tableName)
{
	Db::Conn();
	cmd = gcnew MySqlCommand(query, Con);
	rd = cmd->ExecuteReader();

	while (rd->Read())
	{
		cmb->Items->Add(rd[1]);
	}
	Con->Close();
	return "true";
}

String^ Db::FillMonthRaportGrid(DataGridView^ dgw, String^ query, String^ tableName)
{
	/*Db::Conn();
	da = gcnew MySqlDataAdapter(query, Con);
	dt = gcnew System::Data::DataTable();
	da->Fill(dt);
	for each (DataRow^ row in dt->Rows)
	{
		int n = dgw->Rows->Add();
		dgw->Rows[n]->Cells[0]->Value = row["product_code"]->ToString();
		dgw->Rows[n]->Cells[1]->Value = row["product_name"]->ToString();
		dgw->Rows[n]->Cells[2]->Value = row["category"]->ToString();
		dgw->Rows[n]->Cells[3]->Value = row["total_sales_price"]->ToString();
		dgw->Rows[n]->Cells[4]->Value = row["sales_piece"]->ToString();
		dgw->Rows[n]->Cells[5]->Value = row["suppliers"]->ToString();
		dgw->Rows[n]->Cells[6]->Value = row["sales_Date"]->ToString();
	}
	da->Update(dt);
	Db::Con->Close();*/
	Db::Conn();
	cmd = gcnew MySqlCommand(query, Con);
	da = gcnew MySqlDataAdapter();
	da->SelectCommand = cmd;
	dt = gcnew DataTable();
	da->Fill(dt);
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dgw->DataSource = bSource;
	da->Update(dt);
	Con->Close();

	return "true";
}

Db::Db()
{
}


Db::~Db()
{
}
