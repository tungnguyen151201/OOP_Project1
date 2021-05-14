#include "BirthdayMock.h"

BirthdayMock::BirthdayMock()
{
	_maxAge = 120;
	_currentYear = DateTime::currentYear();
}

DateTime BirthdayMock::next()
{
	int year = _currentYear - _rng.nextInt(_maxAge);
	int month = _rng.nextInt(1, 12);
	int days[] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (DateTime::isLeapYear(year))
	{
		days[2] = 29;
	}
	int day = _rng.nextInt(1, days[month]);
	DateTime birthday(day, month, year);
	return birthday;
}
