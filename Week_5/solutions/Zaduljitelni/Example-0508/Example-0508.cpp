#include <iostream>

using namespace std;

int main()
{
    int enteredNumber;
    do
    {
        cout << "Enter number in the range [1, 300]: ";
        cin >> enteredNumber;
	} while( enteredNumber < 1 || enteredNumber > 300 );
    
    for( int i = 1111; i < 10000; i++)
    {
        int firstDigit  = i / 1000;
        int secondDigit = (i / 100) % 10;
        int thirdDigit  = (i / 10) % 10;
        int fourthDigit = i % 10;
        if(    enteredNumber % firstDigit  == 0
            && ( secondDigit != 0 && enteredNumber % secondDigit == 0 )
            && ( thirdDigit != 0 && enteredNumber % thirdDigit  == 0 )
            && ( fourthDigit != 0 && enteredNumber % fourthDigit == 0 ) 
          )
        {
            cout << i << " is special number\n";
        }
	}
}
