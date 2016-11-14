#include <iostream>

using namespace std;

int main()
{
    int numbersToBePrinted;
    cout << "How many numbers to be shown:";
    cin >> numbersToBePrinted;
    bool isFinished = false;
    int numberOfPrintedNumbers = 0;

	for(int i = 1; i < 10 && !isFinished; i++)
    {
        for( int j = 0; j < 10; j++)
        {
            if( i == j ) continue;
            
            cout << (i*10 + j) << endl;
            numberOfPrintedNumbers++;
            if( numberOfPrintedNumbers >= numbersToBePrinted )
            {
                isFinished = true;
				break; // Break only inner loop
			}
        }
    }
}
