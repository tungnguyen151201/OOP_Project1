#include "Util.h"
#include <cmath>

bool Util::isPrime(int x)
{

    if (x == 0 || x == 1) return false;
    if (x == 2) return true;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return false;
    return true;
}

int TestUtil()
{
	cout << "======================Util======================" << endl;
	cout << "Nhap 1 so nguyen: ";
	int n;
	cin >> n;
	if (Util::isPrime(n)) cout << n << " la so nguyen to.\n";
	else cout << n << " khong la so nguyen to.\n";
	return 0;
}
