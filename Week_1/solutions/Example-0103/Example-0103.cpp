#include <iostream>

using namespace std;

int main()
{
   int a, b, c, discriminant;
   cin >> a >> b >> c;

   // Дискриминантата е равна на b^2 - 4*a*c
   discriminant = b*b - 4*a*c;

   if( discriminant > 0 )
   {
      std::cout << "Уравнението има два реални корена\n";
   }
   else if( discriminant == 0 )
   {
      std::cout << "Уравнението има един реален корен\n";
   }
   else
   {
      std::cout << "Уравнението няма реални корени\n";
   }

   return 0;
}
