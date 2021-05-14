#include "FullnameMock.h"

Fullname FullnameMock::next(bool male)
{
	int index = _rng.nextInt(_lastNames.size() - 1);
	string last = _lastNames[index];
	string middle = "";
	string first = "";
	if (male)
	{
		index = _rng.nextInt(_maleMiddleNames.size() - 1);
		middle = _maleMiddleNames[index];
		index = _rng.nextInt(_maleFirstNames.size() - 1);
		first = _maleFirstNames[index];
	}
	else
	{
		index = _rng.nextInt(_femaleMiddleNames.size() - 1);
		middle = _femaleMiddleNames[index];
		index = _rng.nextInt(_femaleFirstNames.size() - 1);
		first = _femaleFirstNames[index];
	}
	Fullname result(last, middle, first);
	return result;
}

FullnameMock::FullnameMock()
{
	fstream f1, f2, f3, f4, f5;
	f1.open("LastNames.txt", ios::in);
	while (!f1.eof())
	{
		string temp;
		getline(f1, temp);
		_lastNames.push_back(temp);
	}
	f2.open("FemaleFirstNames.txt", ios::in);
	while (!f2.eof())
	{
		string temp;
		getline(f2, temp);
		_femaleFirstNames.push_back(temp);
	}
	f3.open("MaleFirstNames.txt", ios::in);
	while (!f3.eof())
	{
		string temp;
		getline(f3, temp);
		_maleFirstNames.push_back(temp);
	}
	f4.open("FemaleMiddleNames.txt", ios::in);
	while (!f4.eof())
	{
		string temp;
		getline(f4, temp);
		_femaleMiddleNames.push_back(temp);
	}
	f5.open("MaleMiddleNames.txt", ios::in);
	while (!f5.eof())
	{
		string temp;
		getline(f5, temp);
		_maleMiddleNames.push_back(temp);
	}
	f1.close();
	f2.close();
	f3.close();
	f4.close();
	f5.close();
}
