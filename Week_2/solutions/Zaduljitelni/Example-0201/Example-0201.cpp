#include <iostream>

using namespace std;

int main()
{
   int number, desetohilqdni, hilqdni, desetici, edinici;
   cin >> number;

   desetohilqdni = number / 10000;
   hilqdni       = (number / 1000) % 10;
   desetici      = (number / 10) % 10;
   edinici       = number % 10;
   
   if( desetohilqdni == edinici && hilqdni == desetici )
   {
      cout << "Числото е палиндром\n";
   }
   else
   {
      cout << "Числото не е палиндром\n";
   }

   return 0;
}
