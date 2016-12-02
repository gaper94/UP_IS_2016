#include <iostream>

using namespace std;

int main()
{
    const int matrixSize = 3;
    int matrix[matrixSize][matrixSize] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    for(int i = 0; i < matrixSize; i++)
    {
        int swap = matrix[i][i];
        matrix[i][i] = matrix[i][matrixSize-i-1];
        matrix[i][matrixSize-i-1] = swap;
    }
   
    for(int i = 0; i < matrixSize; i++)
    {
        for(int j = 0; j < matrixSize; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
