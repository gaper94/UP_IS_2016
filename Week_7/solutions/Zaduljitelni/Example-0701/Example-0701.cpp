#include <iostream>

using namespace std;

int main()
{
    const int numberOfRows    = 3;
    const int numberOfColumns = 4;
    int matrix[numberOfRows][numberOfColumns] = 
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for(int i = numberOfRows - 1; i >= 0; i--)
    {
        for(int j = numberOfColumns - 1; j >= 0; j--)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
