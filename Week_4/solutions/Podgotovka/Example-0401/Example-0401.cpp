#include <iostream>

using namespace std;

int main()
{
    // Podtochka a)
    int n = 4;
    bool isDefined = ((n != 4) && (n != 2) && (n != 8));
    
    // Podtochka b)
    int a = 1, b = 3;
    int max = a > b ? a : b;
    int min = a > b ? b : a;
    bool isCorrect = ((min*min)% max == 0 );
    
    // Podtochka c)
    double x = 1, y = 10;
    bool isInArea = (   (x*x + y*y) < 9.0
                     && ( x > 2.5 && x > -2.5 )
                     && ( y < 2.0 && y > -2.0 ) );
}
