#include <iostream>

using namespace std;

int main()
{
    int elements[20] = 
    { 1, 2, 3, 12, 2, 3, 11, 4, 2, 1, 7, 32, 22, 1, 3, 4, 1, 5, 3, 34 };
    
    for(int i = 0; i < 20; i++)
    {
        bool isUnique = true;
        for(int j = i+1; j < 20; j++)
        {
            if(elements[i] == elements[j])
            {
                isUnique = false;
                break;
            }
        }

        if(isUnique)
        {
            cout << elements[i] << " ";
        }
    }
}
