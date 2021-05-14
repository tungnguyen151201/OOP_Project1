#include "Telephone.h"

MobileNetwork Telephone::network()
{
    return _network;
}
string Telephone::number()
{
    return _prefix + _numbers;
}

string Telephone::toString()
{
    return _network.name() + ": " + this->number();
}

Telephone::Telephone(MobileNetwork a, string b, string c)
{
    _network = a;
    _prefix = b;
    _numbers = c;
}