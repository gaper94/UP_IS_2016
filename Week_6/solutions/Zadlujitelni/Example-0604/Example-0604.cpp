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

	for( int i = 0; i < symbolsToBeEntered; i++)
    {
        char cSym = symbols[i]; 
        if( cSym == 'a' || cSym == 'e' || cSym == 'i' || cSym == 'o' || cSym == 'u' )
        {
            continue;
		}
        cout << cSym;
	}
}
