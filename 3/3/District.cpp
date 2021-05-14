#include "District.h"

void District::inputDistrict(string district, vector<string> ward, vector<string> street)
{
	_district = district;
	_ward = ward;
	_street = street;
}

string District::getDistrict()
{
	return _district;
}

vector<string> District::getWard()
{
	return _ward;
}

vector<string> District::getStreet()
{
	return _street;
}