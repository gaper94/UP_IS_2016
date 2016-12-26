#include <iostream>

using namespace std;

// Podtochka a)
void toUppercase(char* src)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *src -= ('a' - 'A');
        }
        src++;
    }
}

// Podtochka b)
void toLowercase(char* src)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *src += ('a' - 'A');
        }
        src++;
    }
}

// Podtochka c)
void replace(char* src, char a, char b)
{
    while(*src != '\0')
    {
        if(*src == a)
        {
            *src = b;
        }
        src++;
    }
}

int main()
{
    char str[20] = "Hello world";
    toUppercase(str);
    cout << str << endl;
    toLowercase(str);
    cout << str << endl;
    replace(str, 'l', '-');
    cout << str << endl;
    return 0;
}
