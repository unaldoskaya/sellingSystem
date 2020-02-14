#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class GridButtons
{
public:
	static void Buttons(DataGridView^ dgw);
	static void MainButtons(DataGridView^ dgw);
	static void Columns(DataGridView^ dgw);
	static void MainFormColumns(DataGridView^ dgw);
	static void ProductColumns(DataGridView^ dgw);
	static void MonthlyColumns(DataGridView^ dgw);
	GridButtons();
	~GridButtons();
};

