#include "Integer.h"

int Integer::gcd(int a, int b)
{
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
