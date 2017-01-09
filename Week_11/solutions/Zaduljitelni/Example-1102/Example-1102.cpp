#include <iostream>
using namespace std;

int recStrlen(const char* src)
{
    if(*src == '\0') return 0;
    return 1 + recStrlen(src + 1);
}

int main()
{
    cout << "The length of 'Passat' is : " << recStrlen("Passat") << endl;
    return 0;
}
