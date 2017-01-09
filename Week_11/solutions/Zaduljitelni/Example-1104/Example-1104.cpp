#include <iostream>
using namespace std;

// Solution 1
void reverseHelper1(int number, int& result, int& multiplier)
{
    if(number == 0) return;
    reverseHelper1(number / 10, result, multiplier);
    result += (number % 10) * multiplier;
    multiplier *= 10;
}

int reverse1(int number)
{
    int result = 0;
    int multiplier = 1;
    reverseHelper1(number, result, multiplier);
    return result;
}

// Solution 2
#include <cmath>

void reverseHelper2(int number, int& result, int power)
{
    if(number == 0) return;
    reverseHelper2(number / 10, result, power - 1);
    result += (number % 10) * (int)pow(10, power - 1);
}

int digLen(int number)
{
    if(number == 0) return 0;
    return 1 + digLen(number / 10);
}

int reverse2(int number)
{
    int result = 0;
    int numberOfDigits = digLen(number);
    reverseHelper2(number, result, numberOfDigits);
    return result;
}

// Solution 3
int reverseHelper3(int number, int power)
{
    if(number == 0) return 0;
    return reverseHelper3(number / 10, power - 1) + ( (number%10) * (int)pow(10, power - 1));
}

int reverse3(int number)
{
    int numberOfDigits = digLen(number);
    return reverseHelper3(number, numberOfDigits);
}

int main()
{
    cout << "Reversed1 of 123 is : " << reverse1(123) << endl;
    cout << "Reversed2 of 456 is : " << reverse2(456) << endl;
    cout << "Reversed3 of 789 is : " << reverse3(789) << endl;
    return 0;
}
