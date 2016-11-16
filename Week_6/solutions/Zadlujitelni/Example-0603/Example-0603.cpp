#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numbersToBeEntered;
    do
    {
        cout << "How many numbers to be entered [1, 100]: ";
        cin >> numbersToBeEntered;
	} while (numbersToBeEntered < 1 || numbersToBeEntered > 100);
  
    float numbers[100];
    
    for( int i = 0; i < numbersToBeEntered; i++)
    {
        cout << "numbers[" << i << "] = ";
        cin >> numbers[i];
    }
    
    for( int i = 0; i < numbersToBeEntered; i++)
    {
        if( i == 0 && abs(numbers[i]) > abs(numbers[i+1]) )
        {
            cout << i << ' ';
		}
        else if( i == (numbersToBeEntered - 1) && abs(numbers[i]) > abs(numbers[i-1]) )
        {
            cout << i << ' ';
		}
        else if( abs(numbers[i]) > abs( (numbers[i-1] + numbers[i+1])/2 ) )
        {
            cout << i << ' ';
		}
    }
}
