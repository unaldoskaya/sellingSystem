#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

public ref class Db
{
public:
	static MySqlConnection^ Con;
	static MySqlCommand^ cmd;
	static MySqlDataReader^ rd;
	static MySqlDataAdapter^ da;
	static DataTable^ dt;
	static String^ conStr;

public:
	static String^ Conn();
	static String^ Insert(String^ query);
	static String^ Update(String^ query);
	static String^ Delete(String^ query);
	static String^ FillGrid(DataGridView^ dgw, String^ query, String^ tableName);
	static String^ Db::FillMainGrid(DataGridView^ dgw, String^ query, String^ tableName);
	static String^ FillCmb(ComboBox^ cmb, String^ query, String^ tableName);
	static String^ Db::FillMonthRaportGrid(DataGridView^ dgw, String^ query, String^ tableName);
	Db();
	~Db();
};
