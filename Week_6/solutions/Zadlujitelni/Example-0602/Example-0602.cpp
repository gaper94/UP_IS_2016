#include <iostream>

using namespace std;

int main()
{
    int symbolsToBeEntered;
    do
    {
        cout << "How many symbols to be entered [1, 100]: ";
        cin >> symbolsToBeEntered;
	} while (symbolsToBeEntered < 1 || symbolsToBeEntered > 100);
  
    char symbols[100];
    
    for( int i = 0; i < symbolsToBeEntered; i++)
    {
        cin >> symbols[i];
    }

    bool isPalindrom = true;
	for( int i = 0; i < symbolsToBeEntered/2; i++)
    {
        if( symbols[i] != symbols[symbolsToBeEntered - i - 1] )
        {
            isPalindrom = false;
			break;
		}
	}
    
    if(isPalindrom)
    {
        cout << "Yes\n";
	}
    else
    {
        cout << "No\n";
	}
}
