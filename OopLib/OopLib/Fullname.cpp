#include "Fullname.h"

string Fullname::toString()
{
    return _lastname + " " + _middlename + " " + _firstname;
}

Fullname::Fullname(string a, string b, string c)
{
    _firstname = c;
    _middlename = b;
    _lastname = a;
}

string Fullname::firstname()
{
    return _firstname;
}

string Fullname::middlename()
{
    return _middlename;
}

string Fullname::lastname()
{
    return _lastname;
}