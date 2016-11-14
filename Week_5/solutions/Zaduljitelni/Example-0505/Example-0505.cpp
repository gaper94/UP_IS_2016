#include <iostream>

using namespace std;

int main()
{
    int enteredNumber, sumOfDigits = 0;
    cin >> enteredNumber;
	while(enteredNumber != 0)
    {
        sumOfDigits += enteredNumber % 10;
        enteredNumber /= 10;
    }
    cout << "Sum of digits is " << sumOfDigits << endl;
}
