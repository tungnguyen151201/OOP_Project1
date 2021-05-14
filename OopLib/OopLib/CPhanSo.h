#pragma once
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Integer.h"
using namespace std;

class CPhanSo
{
private:
	int tuso, mauso;
public:
	void random();
	CPhanSo operator+(CPhanSo);
	friend ostream& operator<<(ostream&, CPhanSo&);
	void rutgon();
	CPhanSo(int, int);
};

