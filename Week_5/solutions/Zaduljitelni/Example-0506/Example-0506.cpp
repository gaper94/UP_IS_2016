#include <iostream>

using namespace std;

int main()
{
    int numbersToBeEntered = 0;
    do
    {
        cout << "How many numbers to be entered (must be bigger than 0): ";
        cin >> numbersToBeEntered;
	} while(numbersToBeEntered < 1);
    
	double countNumbersRange1 = 0; // Range < 200
    double countNumbersRange2 = 0; // Range >= 200 && < 400
    double countNumbersRange3 = 0; // Range >= 400 && < 600
    double countNumbersRange4 = 0; // Range >= 600 && < 800
    double countNumbersRange5 = 0; // Range >= 800
    double enteredNumber;
    
	// Enter numbers
    for( int i = 0; i < numbersToBeEntered; i++)
    {
        cin >> enteredNumber;
        if( enteredNumber < 200.0)
        {
            countNumbersRange1++;
        }
        else if( enteredNumber >= 200.0 && enteredNumber < 400.0 )
        {
            countNumbersRange2++;
        }
        else if( enteredNumber >= 400.0 && enteredNumber < 600.0 )
        {
            countNumbersRange3++;
		}
        else if( enteredNumber >= 600.0 && enteredNumber < 800.0 )
        {
            countNumbersRange4++;
		}
        else
        {
            countNumbersRange5++;
        }
	}

    cout << "Numbers in the range < 200 are " << (countNumbersRange1 ? countNumbersRange1 / numbersToBeEntered * 100 : 0) << " % from all numbers\n";
    cout << "Numbers in the range >= 200 && < 400 are " << (countNumbersRange2 ? countNumbersRange2 / numbersToBeEntered * 100 : 0) << " % from all numbers\n";
    cout << "Numbers in the range >= 400 && < 600 are " << (countNumbersRange3 ? countNumbersRange3 / numbersToBeEntered * 100 : 0) << " % from all numbers\n";
    cout << "Numbers in the range >= 600 && < 800 are " << (countNumbersRange4 ? countNumbersRange4 / numbersToBeEntered * 100 : 0) << " % from all numbers\n";
    cout << "Numbers in the range >= 800  " << (countNumbersRange5 ? countNumbersRange5 / numbersToBeEntered * 100 : 0) << " % from all numbers\n";
}
