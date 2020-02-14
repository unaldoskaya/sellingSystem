#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class ConvertCs
{
public:
	static double StrToDouble(String^ str, double dbl);
	static int StrToInt(String^ str, int arg);
	ConvertCs();
	~ConvertCs();
};

