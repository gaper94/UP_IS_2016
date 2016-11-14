#include <iostream>

using namespace std;

int main()
{
    int girlAge;
    do
    {
        cout << "Enter age: ";
        cin >> girlAge;
    } while(girlAge < 1 || girlAge > 500);

	int laptopPrice;
    do
    {
        cout << "Enter laptop price: ";
	    cin >> laptopPrice;
	} while(laptopPrice < 400 || laptopPrice > 3000);

	int toyPrice;
    do
    {
        cout << "Enter toy price: ";
        cin >> toyPrice;
	} while(toyPrice < 5 || toyPrice > 15);
    
    int availableMoney = 0;
    int currentGiftAmount = 10;
    int numberOfToys = 0;
    for(int i = 0; i < girlAge; i++)
    {
        if(i%2 == 0)
        {
            availableMoney += currentGiftAmount;
            currentGiftAmount += 10;
            availableMoney--;
		}
        else
        {
            numberOfToys++;
		}
    }
    availableMoney += (numberOfToys * toyPrice);
    
    if( availableMoney >= laptopPrice )
    {
        cout << "Lilly have enough money to buy the laptop and she will have more " << (availableMoney - laptopPrice) << " leva" << endl;
    }
    else
    {
        cout << "Lilly needs to spend more " << (laptopPrice - availableMoney) << " leva" << endl;
	}
}
