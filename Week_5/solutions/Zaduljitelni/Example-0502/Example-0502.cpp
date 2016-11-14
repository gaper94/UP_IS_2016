#include <iostream>

using namespace std;

int main()
{
    double sum = 0, enteredNumber;
    int enteredNumbersCount = 0;
	do
    {
        cin >> enteredNumber;
        if(enteredNumber != 0)
        {
            sum += enteredNumber;
            enteredNumbersCount++;
		}
	} while(enteredNumber);
   
    if(enteredNumbersCount > 0)
    {
        cout << sum / enteredNumbersCount << '\n';
	}
    else
    {
        cout << "0\n";
    }
}
