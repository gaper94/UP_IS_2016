#include <iostream>
using namespace std;

bool areEqual(const char* str1, const char* str2)
{
    if(   (*str1 == '\0' && *str2 != '\0')
       || (*str1 != '\0' && *str2 == '\0')
       || ( *str1 != *str2) )
    {
        return false;
    }
    else if(*str1 == '\0' && *str2 == '\0')
    {
        return true;
    }
    return areEqual(str1 + 1, str2 + 1) && (*str1 == *str2);
}

#define ARE_EQUAL(str1, str2)                              \
if(areEqual(str1, str2))                                   \
{                                                          \
    cout << str1 << " equals " << str2 << endl;            \
}                                                          \
else                                                       \
{                                                          \
    cout << str1 << " is different from " << str2 << endl; \
}

int main()
{
    ARE_EQUAL("","")
    ARE_EQUAL("", "hi")
    ARE_EQUAL("Hello", "Hello")
    ARE_EQUAL("Hello", "Hi")
    return 0;
}
