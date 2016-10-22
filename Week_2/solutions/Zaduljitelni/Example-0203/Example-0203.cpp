#include <iostream>

using namespace std;

int main()
{
   double a, b, c;
   cout << "Въедете страна A:";
   cin >> a;
   cout << "Въедете страна B:";
   cin >> b;
   cout << "Въедете страна C:";
   cin >> c;
   
   // Първо да намерим двата катета и хипотенузата
   double katet1, katet2, hipotenuza;
   if( a > b && a > c )
   {
      hipotenuza = a;
	  katet1 = b;
	  katet2 = c;
   }
   else if( b > a && b > c )
   {
      hipotenuza = b;
	  katet1 = a;
	  katet2 = c;
   }
   else
   {
      hipotenuza = c;
	  katet1 = a;
	  katet2 = b;
   }

   if( (a + b > c) && (b + c > a) && (a + c > b) )
   {
      if( a == b && b == c)
	  {
	     cout << "Съществува равностранен триъгълник\n";
	  }
	  else if( a == b || b == c || a == c )
	  {
	     cout << "Съществува равнобедрен триъгълник\n";
	  }
	  else if( (katet1 * katet1 + katet2 * katet2) == hipotenuza * hipotenuza )
	  {
	     cout << "Съществува правоъгълен триъгълник\n";
	  }
	  else
	  {
	     cout << "Съществува разностранен триъгълник\n";
	  }
   }
   else
   {
      cout << "Не съществува такъв триъгълник\n";
   }

   return 0;
}
