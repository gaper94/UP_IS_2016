#include <random> // C++ 11
#include <iostream>
using namespace std;

const int diceSize = 6;

unsigned short rollDice()
{
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> unid(1, diceSize);
    return unid(rng);
}

int main()
{
    int numberOfRolls;
    do
    {
        cout << "How many times to roll the dice:";
        cin >> numberOfRolls;
    } while(numberOfRolls < 1);
    
    int statistics[diceSize] = { 0 }; // Init all elements to 0
	for(int i = 0; i < numberOfRolls; i++)
    {
        unsigned short rolledDice = rollDice(); // Return number in the range [1, 6]
        statistics[rolledDice-1]++;
    }

    cout << "From " << numberOfRolls << " number of rolls the statistic is: the following \n";
    
    for( int i = 0; i < diceSize; i++)
    {
        cout << statistics[i] << " times " << i + 1;
        cout << " (" << statistics[i]/(double)numberOfRolls * 100 << ")\n";
    }
}
