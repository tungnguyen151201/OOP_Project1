#include "Random.h"
#include "Dice.h"
#include "W2.h"

int DiceGame()
{
    cout << "==================Dice Game=====================" << endl;
    Dice dice;
    int n = Random::nextInt(5, 20);
    int temp, sum = 0;
    for (int i = 0; i < n; i++)
    {
        temp = dice.roll();
        cout << temp << " ";
        sum += temp;
    }
    cout << "\nTong diem cac diem da gieo: " << sum << endl;
    cout << "Gia tri trung binh cac diem da gieo: " << sum / n << endl;
    return 0;
}

