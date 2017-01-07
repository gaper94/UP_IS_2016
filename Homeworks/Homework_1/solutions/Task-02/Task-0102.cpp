#include <iostream>

using namespace std;

int main()
{
    char symbol = 'c';
    if(symbol >= 'a' && symbol <= 'z')
    {
        cout << "Small letter\n";
    }
    else if(symbol >= 'A' && symbol <= 'Z')
    {
        cout << "Big letter\n";
    }
    else if(symbol >= '0' && symbol <= '9')
    {
        cout << "Digit\n";
    }
    else
    {
        cout << "Other symbol\n";
    }
    return 0;
}
