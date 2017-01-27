#include <iostream>

using namespace std;

void sort(int* src, int srcSize)
{
    for(int i = 0; i < srcSize; i++)
    {
        for(int j = 0; j < srcSize - i - 1; j++)
        {
            if(*(src + j) > *(src + j + 1))
            {
                int temp = *(src + j);
                *(src + j) = *(src + j + 1);
                *(src + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int numbers[] = { 1 , 3, -5, 9, 6 };
    sort(numbers, sizeof(numbers)/ sizeof(numbers[0]));
    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
