#include <iostream>

using namespace std;

int main()
{
    for(int i = 102; i < 988; i++)
    {
        if(    i / 100 != (i /10) % 10
            && i / 100 != i % 10
            && (i / 10) % 10 != i % 10 )
        {
            cout << i << endl;
        }
    }
    return 0;
}
