#pragma once
#include "DateTime.h"
#include "Random.h"

class BirthdayMock
{
private:
	Random _rng;
	int _maxAge;
	int _currentYear;
public:
	BirthdayMock();
	DateTime next();
};

