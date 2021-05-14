#include "CPhanSo.h"

void CPhanSo::random()
{
	tuso = (rand() % 10 + 1) * (rand() % 2 ? 1 : -1);
	mauso = rand() % 10 + 1;
}

CPhanSo CPhanSo::operator+(CPhanSo b)
{
	srand(tuso + 1);
	tuso = tuso * b.mauso + mauso * b.tuso;
	mauso = mauso * b.mauso;
	return *this;
}

void CPhanSo::rutgon()
{
	int ucln = Integer::gcd(tuso, mauso);
	tuso /= ucln;
	mauso /= ucln;
}

CPhanSo::CPhanSo(int x, int y)
{
	tuso = x;
	mauso = y;
}

ostream& operator<<(ostream& os, CPhanSo& b)
{
	os << b.tuso << "/" << b.mauso;
	return os;
}
