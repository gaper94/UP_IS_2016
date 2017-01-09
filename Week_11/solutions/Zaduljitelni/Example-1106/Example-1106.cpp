#include <iostream>
using namespace std;

int fib(int number)
{
    if(number == 0) return 0;
    if(number == 1) return 1;
    return fib(number - 1) + fib(number - 2);
}

int main()
{
    for(int i = 1; i < 11; i++)
    {
        cout << fib(i) << ' ';
    }
    cout << endl;
    return 0;
}
