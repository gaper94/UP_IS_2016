#include <iostream>

using namespace std;

int main()
{
   double x,y;
   cin >> x >> y;

   // Имаме следните две окръжности
   // Окръжност 1 - център (x1 = 0, y1 = 0) и радиус 2
   // Окръжност 2 - център (x2 = 0, y2 = 3) и радиус 1
   // Точката ще лежи в защрихованата област, ако лежи в 
   // окръжност 1 или окръжност 2
   // Ще използваме следното неравенство да определим дали
   // дадена точка принадлежи в окръжността:
   // (x - x1)^2 + (y - y1)^2 < radius^2 , където (x, y) са
   // координатите на въведаната точка, а (x1, y1) са координатите
   // на центъра на окръжността
   const int radiusBiggerCircle  = 2;
   const int radiusSmallerCircle = 1;
   
   // (x - 0)^2 == (x * x)
   bool isInBiggerCircle = (x * x) + (y * y) < radiusBiggerCircle * radiusBiggerCircle; 
   bool isInSmallerCircle= (x * x) + (y - 3)*(y - 3) < radiusSmallerCircle * radiusSmallerCircle;
   
   if( isInBiggerCircle || isInSmallerCircle)
   {
      cout << "The point is in the shaded area\n";
   }
   else
   {
      cout << "The point is not in the shaded area\n";
   }
   return 0;
}
