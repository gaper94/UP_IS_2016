#include <iostream>

using namespace std;

int main()
{
   int a;
   cin >> a;
   
   if( ( a % 2 == 0 && a % 3 == 0 ) && ( a % 5 != 0) )
   {
      std::cout << "Числото се дели на 2 и на 3, но не се дели на 5" <<  endl;
   }
   else
   {
      std::cout << "Числото не изпълнява необходимите условия" << endl;
   }

   return 0;
}
