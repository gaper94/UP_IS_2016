#include <iostream>
using namespace std;

int factorial(int number)
{
    if(number == 0) return 1;
    return number * factorial(number - 1);
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        cout << i << "! = " << factorial(i) << endl;
    }
    return 0;
}
