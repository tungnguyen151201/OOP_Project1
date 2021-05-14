#include "MobileNetwork.h"

string MobileNetwork::name()
{
    return _name;
}

vector<string> MobileNetwork::prefixes()
{
    return _prefixes;
}

MobileNetwork::MobileNetwork()
{
    _name = "Vinaphone";
    _prefixes.push_back("088");
}

MobileNetwork::MobileNetwork(string a, vector<string> b)
{
    _name = a;
    _prefixes = b;
}