#include "HcmAddressMock.h"

Address HcmAddressMock::next()
{
	string number = to_string(ran.nextInt(1, 100));
	int i = ran.nextInt(_districtList.size() - 1);
	string district = _districtList[i].getDistrict();
	int j = ran.nextInt(_districtList[i].getWard().size() - 1);
	string ward = _districtList[i].getWard()[j];
	j = ran.nextInt(_districtList[i].getStreet().size() - 1);
	string street = _districtList[i].getStreet()[j];
	Address address(number, street, ward, district, _city);
	return address;
}

HcmAddressMock::HcmAddressMock()
{
	fstream f;
	f.open("address.txt", ios::in);
	while (!f.eof())
	{
		District temp;
		string tempDistrict;
		getline(f, tempDistrict);
		vector<string>wards;
		string count;
		getline(f, count);
		int numberOfWard = stoi(count);
		for (int i = 0; i < numberOfWard; i++)
		{
			string tempWard;
			getline(f, tempWard);
			wards.push_back(tempWard);
		}
		vector<string>streets;
		getline(f, count);
		int numberOfStreet = stoi(count);
		for (int i = 0; i < numberOfStreet; i++)
		{
			string tempStreet;
			getline(f, tempStreet);
			streets.push_back(tempStreet);
		}
		temp.inputDistrict(tempDistrict, wards, streets);
		_districtList.push_back(temp);
	}
	_city = "Ho Chi Minh City";
	f.close();
}
