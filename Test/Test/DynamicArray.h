#pragma once
#include "W1.h"

class DynamicArray
{
private:
	int n;
	int* a;
public:
	void Nhap();
	void Xuat();
	DynamicArray(void);
	~DynamicArray(void);
};
void TestDynamicArray();

