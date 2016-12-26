#include <iostream>

using namespace std;

void max(int* src, int size, int* max)
{
    *max = src[0];
    for( int i = 0; i < size; i++)
    {
        if(src[i] > *max)
        {
            *max = src[i];
        }
    }
}

int main()
{
    int arr[] = { 1, 232, 3, 42, 5};
    int maxElem;
    max(arr, 5, &maxElem);
    cout << "Max is " << maxElem << endl;
    return 0;
}
