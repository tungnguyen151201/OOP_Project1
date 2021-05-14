#include "Dice.h"

int Dice::roll()
{
    return Random::nextInt(1, 6);
}
