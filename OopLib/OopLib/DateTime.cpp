#include "DateTime.h"

string DateTime::toString()
{
	return to_string(_date) + "/" + to_string(_month) + "/" + to_string(_year);
}

DateTime::DateTime(int a, int b, int c)
{
	_date = a;
	_month = b;
	_year = c;
}

int DateTime::currentYear()
{
	time_t t = time(NULL);
	tm now;
	localtime_s(&now, &t);
	return now.tm_year + 1900;
}

bool DateTime::isLeapYear(int y)
{
	return ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) ? true : false;
}

int DateTime::Year()
{
	return _year;
}
