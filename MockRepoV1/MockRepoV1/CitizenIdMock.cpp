#include "CitizenIdMock.h"

string CitizenIdMock::next(int male, int birthYear)
{
	int i = _rng.nextInt(_cityCodes.size() - 1);
	string cityCode = _cityCodes[i];

	int century = birthYear / 100 + 1;

	//int male = _rng.nextInt(1);
	int gender = (century - 20) * 2 + male;

	//int birthYear = (_currentYear - _rng.nextInt(_maxAge) % 100);
	birthYear %= 100;

	string result;
	result = "" + cityCode + to_string(gender);
	if (birthYear < 10) result += '0';
	result += to_string(birthYear);

	for (int i = 0; i < 6; i++)
		result += to_string(_rng.nextInt(0, 9));
	return result;
}

string CitizenIdMock::lookUp(string code)
{
	fstream f;
	f.open("CityCodes.txt", ios::in);
	string result = "";
	string temp;
	while (1)
	{
		getline(f, temp);
		string temp1 = "";
		temp1 += temp[0];
		temp1 += temp[1];
		temp1 += temp[2];
		if (temp1 == code)
		{
			result = temp.substr(4, temp.length() - 4);
			f.close();
			return result;
		}
	}
	f.close();
	return string("Citicode not found");
}

CitizenIdMock::CitizenIdMock()
{
	_maxAge = 120;
	string temp;
	fstream f;
	f.open("CityCodes.txt", ios::in);
	while (!f.eof())
	{
		getline(f, temp);
		string temp1 = "";
		temp1 += temp[0];
		temp1 += temp[1];
		temp1 += temp[2];
		_cityCodes.push_back(temp1);
	}
	_currentYear = DateTime::currentYear();
}
