#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a       = *b;
    *b       = temp;
}

void reverse(int* src, int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        swap( (src + i), (src + size - i - 1));   
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5};
    reverse(arr, 5);
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
