#include "W1.h"

int RandomYear()
{
	cout << "=================Random Year====================" << endl;
	srand(time(NULL));
	int n = rand() % (20 - 5 + 1) + 5;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int year = rand() % (RAND_MAX - 1900 + 1) + 1900;
		cout << year << " ";
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) count++;
	}
	cout << "\nSo nam nhuan la: " << count << endl;
	return 0;
}

