#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text;
using namespace System::Threading::Tasks;

public ref class ComboboxItem
{
public:
	String^ Text;
	int Value;
	ComboboxItem();
	~ComboboxItem();
};

