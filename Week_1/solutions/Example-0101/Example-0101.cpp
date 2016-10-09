
#include <iostream>

using namespace std;

int main()
{
   int a, b;
   cin >> a >> b;
   
   // Операторът '%' връща остатъка от делението на две цели числа
   if( a % b == 0 ) // Ако остатъкът от делението е равен на 0, то второто е делител на първото  
   {
      cout << b << " е делител на " << a << endl;
   }
   else
   {
      cout << b << " не е делител на " << a << endl;
   }

   return 0;
}
