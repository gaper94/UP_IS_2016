#include <iostream>

using namespace std;

int countInversions(int* src, int srcSize)
{
    int inversionsCount = 0;
    for(int i = 0; i < srcSize; i++)
    {
        for(int j = i + 1; j < srcSize; j++)
        {
            if(*(src + j) < *(src + i))
            {
                inversionsCount++;
            }
        }
    }
    return inversionsCount;
}

int main()
{
    int numbers[] = { 1 , 3, -5, 9, 6 };
    cout << "Number of inversions is: " << countInversions(numbers, sizeof(numbers)/ sizeof(numbers[0])) << endl;
    return 0;
}
