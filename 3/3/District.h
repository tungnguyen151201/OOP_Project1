#pragma once
#include "W1.h"

class District
{
private:
	string _district;
	vector<string> _ward;
	vector<string> _street;
public:
	void inputDistrict(string, vector<string>, vector<string>);
	string getDistrict();
	vector<string> getWard();
	vector<string> getStreet();
};

