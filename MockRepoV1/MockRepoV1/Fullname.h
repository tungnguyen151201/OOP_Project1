#pragma once
#include "W1.h"

class Fullname
{
private:
	string _firstname;
	string _middlename;
	string _lastname;
public:
	string toString();
	Fullname(string, string, string);
	string firstname();
	string middlename();
	string lastname();
};

