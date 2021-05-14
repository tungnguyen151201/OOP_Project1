#include "CPhanSo.h"
#include "W2.h"

int RandomFraction()
{
	cout << "=================Random Fraction================" << endl;
	srand(time(NULL));
	int n = rand() % (20 - 5 + 1) + 5;
	CPhanSo sum(0, 1);
	CPhanSo ps(0,1);
	for (int i = 0; i < n; i++)
	{
		ps.random();
		ps.rutgon();
		cout << ps << " ";
		sum = sum + ps;
		sum.rutgon();
	}
	cout << endl;
	cout << "Tong cac phan so tren la: " << sum << endl;
	return 0;
}

