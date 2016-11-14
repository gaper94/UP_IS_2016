#include <iostream>

using namespace std;

int main()
{
    unsigned int numbersToBeEntered = 0;
    do
    {
        cout << "How many numbers to be entered:";
        cin >> numbersToBeEntered;
    } while(numbersToBeEntered == 0);
    
    int min, max, enteredNumber;
    cin >> enteredNumber;
    min = max = enteredNumber; // Firs entered digit is both min and max

	for(unsigned int i = 0; i < numbersToBeEntered - 1; i++)
    {
        cin >> enteredNumber;
        min = min > enteredNumber ? enteredNumber : min;
        max = enteredNumber > max ? enteredNumber : max;
    }
    
    cout << "Max is : [" << max << "], Min is [" << min << "]\n";
}
