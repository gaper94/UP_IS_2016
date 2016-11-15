#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Podtochka a)
    int start, end, number;
    cin >> start >> end >> number;
    int printedNumbers = 0; 
    for(int i = start ; i < end ; i++)
    {
        bool isSimple = true;
        for( int j = 2 ; j < (i/2 + 1); j++)
	    {
            if( i % j == 0)
            {
                isSimple = false;
				break;
            }
        }
        if(isSimple)
        {
            cout << i << " is simple\n";
            printedNumbers++;
            if(printedNumbers >= number)
            {
                break;
			}
		}
	}

    // Podtochka b)
    printedNumbers = 0;
    for(int j = start ; j < end ; j++)
    {
	    int numberCopy = j;
	    int numberLength = 0;

		do
	    {
	        numberCopy /= 10;
	        numberLength++;
	    }
	    while( numberCopy != 0 );

	    bool isPalindrome = true;
	    for( int i = 0, n = 1; i < numberLength/2; i++, n++)
	    {
	        int firstPart = ( j / (int)pow(10, numberLength - n)) % 10;
	        int secondPart = ( j % (int)pow(10, n)) / (int) pow(10, i);
	        
			if(firstPart != secondPart)
	        {
	            isPalindrome = false;
			}
		}

		if(isPalindrome)
	    {
	        cout << j <<" is palindrome\n";
            printedNumbers++;

	        if(printedNumbers >= number)
	        {
	            break;
			}
	    }
    }
}
