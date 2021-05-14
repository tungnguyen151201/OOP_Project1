#include "DynamicArray.h"

void DynamicArray::Nhap()
{
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    a = new int[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> a[i];
}

void DynamicArray::Xuat()
{
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

DynamicArray::DynamicArray(void)
{
    n = 1;
    a = new int[n];
    a[0] = 0;
}

DynamicArray::~DynamicArray(void)
{
    delete[] a;
    n = 0;
}

void TestDynamicArray()
{
    cout << "==================Dynamic Array=================" << endl;
    DynamicArray test;
    test.Nhap();
    cout << "Mang vua nhap: ";
    test.Xuat();
}