#include <iostream>

using namespace std;

int main()
{
    int numbersToBeEntered;
    do
    {
        cout << "How many numbers to be entered [1, 100]: ";
        cin >> numbersToBeEntered;
	} while (numbersToBeEntered < 1 || numbersToBeEntered > 100);
  
    int numbers[100];
    
    for( int i = 0; i < numbersToBeEntered; i++)
    {
        cout << "numbers[" << i << "] = ";
        cin >> numbers[i];
    }
    
    int min = numbers[0], max = min;
    
    for( int i = 1; i < numbersToBeEntered; i++)
    {
        min = min > numbers[i] ? numbers[i] : min;
        max = numbers[i] > max ? numbers[i] : max;
    }
    
    cout << "Max = " << max << ", min = " << min << endl;
}
