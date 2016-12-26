#include <iostream>

using namespace std;

int strLength(const char* src)
{
    int length = 0;
    while(*src != '\0')
    {
        length++;
        src++;
    }
    return length;
}

int main()
{
    cout << "Length of 'Hello world' is " << strLength("Hello World") << endl;
    return 0;
}
