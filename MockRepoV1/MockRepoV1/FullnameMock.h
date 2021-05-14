#pragma once
#include "W1.h"
#include "Random.h"
#include "Fullname.h"

class FullnameMock
{
private:
	Random _rng;
	vector<string> _femaleMiddleNames;
	vector<string> _maleMiddleNames;
	vector<string> _femaleFirstNames;
	vector<string> _maleFirstNames;
	vector<string> _lastNames;
public:
	Fullname next(bool);
	FullnameMock();
};
