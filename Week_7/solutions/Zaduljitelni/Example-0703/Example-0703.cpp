#include <iostream>

using namespace std;

int main()
{
    int decimalNumber = 134;
    // To binary
    char binaryNumber[32] = { 0 }; // int is 32 bit number
    int currentPosition = 31; // Write the binary number from the back
    while(decimalNumber != 0)
    {
        binaryNumber[currentPosition--] = decimalNumber % 2 == 0 ? '0' : '1';
        decimalNumber /= 2;
    }
    
    for( int i = 0; i < 32; i++)
    {
        cout << binaryNumber[i];
    }
    cout << endl;

    // To octal
    char octalNumber[32] = { 0 };
    currentPosition = 31;
    decimalNumber = 32;
    while(decimalNumber != 0)
    {
        octalNumber[currentPosition--] = 48 + decimalNumber % 8; // 48 is ASCII zero
        decimalNumber /= 8;
    }
    
    for( int i = 0; i < 32; i++)
    {
        cout << octalNumber[i];
    }
    cout << endl;
    
    // To hex
    char hexNumber[32] = { 0 };
    currentPosition = 31;
    decimalNumber = 64;
    while(decimalNumber != 0)
    {
        hexNumber[currentPosition--] = 
		decimalNumber % 16 >= 10 ? 65 + (decimalNumber % 16) % 10 // 65 is big 'A' letter
                                 : 48 + decimalNumber % 16;          // 48 is ASCII zero
        decimalNumber /= 16;
    }
    
    for( int i = 0; i < 32; i++)
    {
        cout << hexNumber[i];
    }
    cout << endl;

}
