#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;
    cin >> number;
    int numberCopy = number;
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
        // Имаме числото 12345
        // Първата цифра взимаме като разделим на 10 000 (10) и после вземем остатъка от делението на 10
        // Втората цифра взимаме като разделим на 1 000 (12) и после вземем остатъка от делението на 10
		// Последната цифра взимаме като вземем остатъка от делението на 10 (5) и го разделим на 1
        // Предпоследната цифра взимаме като вземем остатъка от делението на 100 (45) и го разделим на 10
        int firstPart = ( number / (int)pow(10, numberLength - n)) % 10;
        int secondPart = ( number % (int)pow(10, n)) / (int) pow(10, i);
        
		if(firstPart != secondPart)
        {
            isPalindrome = false;
		}
	}

	if(isPalindrome)
    {
        cout << "Числото е палиндром\n";
    }
    else 
    {
        cout << "Числото не е палиндром\n";
    }
}
