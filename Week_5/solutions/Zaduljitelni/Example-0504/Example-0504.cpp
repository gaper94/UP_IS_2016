#include <iostream>

using namespace std;

int main()
{
    int upperBound;
    do
    {
        cout << "Enter upper bound:";
        cin >> upperBound;
    } while( upperBound <= 1 );
    
    for( int i = 1; i <= upperBound; i += 5 )
    {
        cout << i << endl;
	}
}
