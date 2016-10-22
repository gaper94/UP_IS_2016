#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double a, b, c;
   cout << "Въведете стойност за коефицента 'а': ";
   cin >> a;
   cout << "Въведете стойност за коефицента 'b': ";
   cin >> b;
   cout << "Въведете стойност за коефицента 'c': ";
   cin >> c;
   double diskriminanta = b*b - (4*a*c);
   double x1 = -1, x2 = -1;

   if( diskriminanta > 0 )
   {
      x1 = (-b + sqrt(diskriminanta)) / (2*a); 
      x2 = (-b - sqrt(diskriminanta)) / (2*a); 
   }
   else if( diskriminanta == 0 )
   {
      x1 = (-b + sqrt(diskriminanta)) / (2*a); 
   }

   if( x1 > 0 && x2 > 0 )
   {
      cout << "Уравнението има 4 корена\n";
   }
   else if( ( x1 > 0 && x2 == 0 ) || ( x1 == 0 && x2 > 0 ) )
   {
      cout << "Уравнението има 3 корена\n";
   }
   else if( ( x1 > 0 && x2 < 0 ) || ( x1 < 0 && x2 > 0 ) )
   {
      cout << "Уравнението има 2 корена\n";
   }
   else if( ( x1 == 0 && x2 < 0 ) || ( x1 < 0 && x2 == 0 ) )
   {
      cout << "Уравнението има 1 корен\n";
   }
   else
   {
      cout << "Уравнението няма корени\n";
   }

   return 0;
}
