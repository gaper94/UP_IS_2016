#include <iostream>

using namespace std;

int main()
{
    const int bufferSize = 10;
    int buffer[bufferSize] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    int currentSize = bufferSize;
    int indexToDelete;
    
    for(int i = 0; i < currentSize; i++)
    {
        cout << buffer[i] << " ";
    }
    cout << endl;
    
    do
    {
        cout << "Enter index to delete:";
        cin >> indexToDelete;
        if(indexToDelete < 0)
        {
            break;
        }

        for(int i = indexToDelete + 1; i < currentSize; i++)
        {
            buffer[i-1] = buffer[i];
        }
        currentSize--;

        for(int i = 0; i < currentSize; i++)
        {
            cout << buffer[i] << " ";
        }
        cout << endl;

    } while(currentSize > 0);
}
