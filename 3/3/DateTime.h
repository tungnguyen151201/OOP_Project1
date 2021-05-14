#pragma once
#include "W1.h"

class DateTime
{
private:
	int _date, _month, _year;
public:
	string toString();
	DateTime(int, int, int);
	static int currentYear();
	static bool isLeapYear(int);
	int Year();
};

