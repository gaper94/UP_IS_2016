#include <iostream>

using namespace std;

int main()
{
   const int radius = 5;
   int x,y;
   cin >> x >> y;
   // Имаме окръжност с радиус 5  и център с координати (x1 = 0, x2 = 0)
   // Една точка (x, y) ще лежи в тази окръжност когато е изпълнено следното неравенство
   // (x - x1)^2 + (y-y1)^2 < radius^2
   if( ( (x * x) + (y * y) ) <  radius * radius ) // (x - 0)^2 == x*x
   {
      cout << "The point is in the circle\n";
   }
   else
   {
      cout << "The point is outside the circle\n";
   }

   return 0;
}
