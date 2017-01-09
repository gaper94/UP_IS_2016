#include <iostream>
using namespace std;

void drawTriangle(int number)
{
    if(number > 1)
        drawTriangle(number - 1);

    for(int i = 0;i < number; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    drawTriangle(5);
    return 0;
}
