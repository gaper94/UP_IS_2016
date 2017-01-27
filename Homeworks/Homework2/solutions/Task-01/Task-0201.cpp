#include <iostream>

using namespace std;

void displayHistogram(const char* str)
{
    const int symbolsCount = 127;
    int symbols[symbolsCount] = {0};
    while(*str != '\0')
    {
        symbols[*str]++;
        str++;
    }
    
    for(int i = 0; i < symbolsCount; i++)
    {
        if(symbols[i] != 0)
        {
            cout << "'" << (char)i << "' : " << symbols[i] << (symbols[i] > 1 ? " times" : " time") << endl;
        }
    }
}

int main()
{
    displayHistogram("Happy holidays!");
    return 0;
}
