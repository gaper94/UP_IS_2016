#include <iostream>

using namespace std;

int main()
{
   int x,y;
   cin >> x >> y;
   
   if(x != 0 && y == 0) // Точката лежи на оста X
   {
      cout << "The point is on the X axis\n";
   }
   else if( x == 0 && y != 0) // Точката лежи на оста Y
   {
      cout << "The point is on the Y axis\n";
   }
   else if( x == 0 && y == 0) // Точката лежи на центъра на окръжността
   {
      cout << "The point is on the center of the coordinate system\n";
   }
   else // Точката не е на координатните оси
   {
      // Първи квадрант
	  if( x > 0 && y > 0 )
	  {
	     cout << "The point is in the first quadrant\n";
	  }
	  // Втори квадрант
	  else if( x < 0 && y > 0 )
	  {
	     cout << "The point is in the second quadrant\n";
	  }
	  // Трети квадрант
	  else if( x < 0 && y < 0 )
	  {
	     cout << "The point is in the third quadrant\n";
	  }
	  // Четвърти квадрант
	  else
	  {
	     cout << "The point is in the fourth quadrant\n";
	  }
   }

   return 0;
}
