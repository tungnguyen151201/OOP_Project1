#pragma once
#include "W1.h"

class MobileNetwork
{
private:
	string _name;
	vector<string> _prefixes;
public:
	string name();
	vector<string> prefixes();
	MobileNetwork();
	MobileNetwork(string, vector<string>);
};

