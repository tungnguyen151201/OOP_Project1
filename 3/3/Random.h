#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

class Random
{
private:
	static bool _seeded;
public:
	int nextInt();
	int nextInt(int);
	static int nextInt(int, int);
	Random(void);
};

