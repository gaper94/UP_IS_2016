#include <iostream>

using namespace std;

int main()
{
    // Podtochka a)
    int a = 5, b = 12;
    cout << "The bigger of a = 5 and b = 12 is: " << (a > b ? a : b) << endl;
    
    // Podtochka b)
    int c = 15;
    cout << "The bigger of a = 5, b = 12 and c = 15 is: " << ( a > b ? (a > c ? a : c )
                                                            : (b > c ? b : c) ) << endl;
    // Podtochka c)
    int number = 255;
    bool contains2Fifths =   ( number / 100 != 5 && (number / 10) % 10 == 5 && number % 10 == 5)
                          || ( number / 100 == 5 && (number / 10) % 10 != 5 && number % 10 == 5)
                          || ( number / 100 == 5 && (number / 10) % 10 == 5 && number % 10 != 5);
    cout << "Number " << (contains2Fifths ? "contains " : "doesn't contains ") << "exactly 2 fifths\n";
    
    // Podtochka d)
    int n1 = 123, n2 = 321, n3 = 432;
    bool areDifferenNumbers = (n1 != n2 && n2 != n3);
    cout << "The three numbers are " << (areDifferenNumbers ? "" : " not ") << "different\n"; 
    
    // Podtochka e)
    int value = 13;
    bool isDefined = (value != 2 && value != -1);
    cout << "The value is " << (isDefined ? "" : "not ") << "defined for the inequality\n";

    return 0;
}
