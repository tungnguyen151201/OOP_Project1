#pragma once
#include "Address.h"
#include "District.h"
#include "Random.h"

class HcmAddressMock
{
private:
	Random ran;
	vector<District> _districtList;
	string _city;
public:
	Address next();
	HcmAddressMock();
};

