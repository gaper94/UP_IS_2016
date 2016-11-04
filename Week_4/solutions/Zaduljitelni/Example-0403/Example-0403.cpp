#include <iostream>

using namespace std;

int main()
{
    int figureSize;
    cin >> figureSize;

    // Триъгълник
    for( int i = 0; i < figureSize; i++)
    {
        for( int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "\n\n";
    
    // Квадрат
	for( int i = 0; i < figureSize; i++)
    {
        for( int j = 0; j < figureSize; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
 
    cout << "\n\n";
    
    // Елха
    for( int i = 0; i < figureSize; i++)
    {
        // Рисуваме лявата част от елхата
        for(int j = 0; j < figureSize - i; j++)
        {
            cout << ' ';
        }
        for(int j = 0; j < i; j++)
        {
            cout << '*';
        }

        cout << '*';

        // Рисуваме дясната част от елхата
        for(int j = 0; j < i; j++)
        {
            cout << '*';
        }
        for(int j = 0; j < figureSize - i; j++)
        {
            cout << ' ';
        }
		cout << '\n';
    }
}
