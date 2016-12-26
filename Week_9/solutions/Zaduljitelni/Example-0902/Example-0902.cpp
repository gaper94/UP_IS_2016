#include <iostream>

using namespace std;
// Podtochka a)
void printStraight(int src[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(src + i) << " ";
    }
    cout << endl;
}

// Podtochka b)
void printReverse(int src[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(src + size - i - 1) << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5};
    printStraight(arr, 5);
    printReverse(arr, 5);
    return 0;
}
