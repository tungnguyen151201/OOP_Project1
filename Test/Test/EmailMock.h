#pragma once
#include "W1.h"
#include "FullnameMock.h"

class EmailMock
{
private:
	Random _rng;
	vector<string> _domains;
	FullnameMock _nameStore;
public:
	string next();
	string next(Fullname);
	void toLowerCase(string&);
	EmailMock();
};

