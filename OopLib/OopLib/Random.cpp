#include "Random.h"

bool Random::_seeded = 0;
int Random::nextInt()
{
    
    if (_seeded == 0)
    {
        srand(time(NULL));
        _seeded = 1;
    }
    return rand();
}

int Random::nextInt(int ceiling)
{
    if (_seeded == 0)
    {
        srand(time(NULL));
        _seeded = 1;
    }
    return rand() % (ceiling + 1);
}

int Random::nextInt(int left, int right)
{
    if (_seeded == 0)
    {
        srand(time(NULL));
        _seeded = 1;
    }
    return rand() % (right - left + 1) + left;
}

Random::Random(void)
{
    _seeded = 0;
}
