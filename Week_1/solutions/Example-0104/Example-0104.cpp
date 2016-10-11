#include <iostream>

using namespace std;

int main()
{
   int number, s, d, e;
   cin >> number;
   
   // number = ( s * 100 +  d * 10 + e * 1 )
   e = number % 10; // Вземаме единиците
   number /= 10; // number = number / 10
   
   d = number % 10; // Вземаме деситиците
   number /= 10;

   s = number; // Вземаме стотиците

   if( ( s < d ) && ( d < e) )
   {
      cout << "Numbers are in increasing order\n";
   }
   else
   {
      cout << "Numbers are not in increasing order\n";
   }

   return 0;
}
