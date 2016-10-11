#include <iostream>

using namespace std;

int main()
{
   int number, firstSubNumber, secondSubNumber;
   cin >> number;
   // number = firstSubNumber * 1000 + secondSubNumber
   secondSubNumber = number % 1000;
   number /= 1000;
   firstSubNumber = number;

   if( secondSubNumber > firstSubNumber )
   {
      std::cout << "Second sub-number is bigger then the first sub-number\n";
   }
   else
   {
      std::cout << "First sub-number is either bigger or equal to the first number\n";
   }

   return 0;
}
