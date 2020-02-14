#include "ConvertCs.h"

double ConvertCs::StrToDouble(String^ str, double dbl)
{
	if (Double::TryParse(str, dbl))
	{
		return dbl;
	}
}

int ConvertCs::StrToInt(String^ str, int arg)
{
	if (int::TryParse(str, arg))
	{
		return arg;
	}
}

ConvertCs::ConvertCs()
{
}

ConvertCs::~ConvertCs()
{
}
