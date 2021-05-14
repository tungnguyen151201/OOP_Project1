#pragma once
#include "W1.h"
#include "MobileNetwork.h"

class Telephone
{
private:
	MobileNetwork _network;
	string _prefix;
	string _numbers;
public:
	MobileNetwork network();
	string number();
	string toString();
	Telephone(MobileNetwork, string, string);
};

