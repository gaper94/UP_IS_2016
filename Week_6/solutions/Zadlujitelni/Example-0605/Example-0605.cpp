#include <iostream>

using namespace std;

int main()
{
    int matrixSize;
    do
    {
        cout << "Enter size of the matrix [1, 100]: ";
        cin >> matrixSize;
	} while ( matrixSize < 1 || matrixSize > 100);
  
    int matrix[100][100];
    
    for( int i = 0; i < matrixSize; i++)
    {
        for( int j = 0; j < matrixSize; j++)
        {
            cin >> matrix[i][j];
        }
    }
    
    bool isSymmetric = true;
    for(int i = 0; i < matrixSize; i++)
    {
        for( int j = i; j < matrixSize; j++)
        {
            if( matrix[j][i] != matrix[i][j] )
            {
                isSymmetric = false;
			}
		}
    }

    if(isSymmetric)
    {
        cout << "Yes\n";
	}
    else
    {
        cout << "No\n";
	}
}
