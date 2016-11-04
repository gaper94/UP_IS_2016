#include <iostream>

using namespace std;

int main()
{
    int membersCount;
    cin >> membersCount;
    
    int previousMember = 0;
    int currentMember = 1;
    for( int i = 0; i < membersCount; i++)
    {
        cout << currentMember << ' ';
        int tempCurrent = currentMember; // Запазваме текущият член на редицата 
        currentMember += previousMember; // Получаваме следващият член
        previousMember = tempCurrent; // Старият текущ става предишен
    }
}
