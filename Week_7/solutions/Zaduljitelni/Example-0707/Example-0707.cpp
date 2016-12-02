#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int m1Rows = 3, m1Columns = 3;
    int m1[m1Rows][m1Columns] = 
    {
        { 1, 2 ,3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    
    const int m2Rows = 3, m2Columns = 3;
    int m2[m2Rows][m2Columns] = 
    {
        { 10, 11 ,12 },
        { 13, 14, 15 },
        { 16, 17, 18 }
    };
    
    // Sum of matrices
    int sumOfMatrices[m1Rows][m1Columns] = { 0 };
   
    cout << "Sum of m1 + m2 is :\n";
    for(int i = 0; i < m1Rows; i++)
    {
        for(int j = 0; j < m1Columns; j++)
        {
            sumOfMatrices[i][j] = (m1[i][j] + m2[i][j]);
            cout << sumOfMatrices[i][j] << " ";
        }
        cout << endl;
    }

    const int m3Rows = 4, m3Columns = 3;
    int m3[m3Rows][m3Columns] = 
    {
        {  1,  2,  3 },
        {  4,  5,  6 },
        {  7,  8,  9 },
        { 10, 11, 12 },
    };
    
    const int m4Rows = 3, m4Columns = 5;
    int m4[m3Rows][m4Columns] = 
    {
        {   1,   2,   3,   4,  5 },
        {   6,   7,   8,   9, 10 },
        {  11,  12,  13,  14, 15 }
    };

    // Product of two matrices
    int productOfMatrices[m3Rows][m4Columns] = { 0 };
    
    for(int i = 0; i < m3Rows; i++)
    {
        for(int j = 0; j < m4Columns; j++)
        {
            for(int k = 0; k < m3Columns; k++)
            {
                productOfMatrices[i][j] += m3[i][k] * m4[k][j];
            }
        }
    }
    
    cout << "\nMultiplication of m3 * m4 is :\n";
    for(int i = 0; i < m3Rows; i++)
    {
        for(int j = 0; j < m4Columns; j++)
        {
            cout << setw(3) <<productOfMatrices[i][j] << " ";
        }
        cout << endl;
    }
}
