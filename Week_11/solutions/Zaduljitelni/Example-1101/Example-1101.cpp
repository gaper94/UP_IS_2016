#include <iostream>
using namespace std;

int sumOfDigits(int number)
{
    if(number == 0 ) return 0;
    return number % 10 + sumOfDigits(number/10);
}

int main()
{
    cout << "Sum of digits in 1234 is : " << sumOfDigits(1234) << endl;
    return 0;
}
