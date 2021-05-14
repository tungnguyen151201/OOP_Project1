#pragma once
#include "W1.h"
#include "Random.h"
#include "DateTime.h"

class CitizenIdMock
{
private:
	Random _rng;
	vector<string> _cityCodes;
	int _maxAge;
	int _currentYear;
public:
	string next(int, int);
	string lookUp(string);
	CitizenIdMock();
};
