#include "Address.h"

string Address::toString()
{
	return _number + " " + _street + ", " + _ward + ", " + _district + ", " + _city;
}

Address::Address(string number, string street, string ward, string district, string city)
{
	_number = number;
	_street = street;
	_ward = ward;
	_district = district;
	_city = city;
}