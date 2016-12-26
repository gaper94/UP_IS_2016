#include <iostream>

using std::cout;
using std::endl;

// Podtochka a)
void swap(int *a, int *b)
{
    int temp = *a;
    *a       = *b;
    *b       = temp;
}

// Podtochka b)
void swap(int& a, int& b)
{
    int temp = a;
    a        = b;
    b        = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    cout << "Calling swap function with pointers\n";
    swap(&a, &b);
    cout << "After swap with pointers: a = " << a << ", b = " << b << endl;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    cout << "Calling swap function with references\n";
    swap(a, b);
    cout << "After swap with references: a = " << a << ", b = " << b << endl;
    return 0;
}
