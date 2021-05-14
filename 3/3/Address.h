#pragma once
#include "W1.h"

class Address
{
private:
	string _number, _street, _ward, _district, _city;
public:
	string toString();
	Address(string, string, string, string, string);
};

