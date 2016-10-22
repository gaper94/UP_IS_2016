#include <iostream>

using namespace std;

int main()
{
   unsigned char day, month; 
   cout << "Въведете рожденната си дата в следният формат дд-мм: ";
   cin >> day >> month;
   
   cout << "Вие сте ";
   if( month == 1 )
   {
      if( day > 20 ) cout << "водолей\n" ; else cout << "козирог\n";
   }
   else if( month == 2 )
   {
      if( day > 20 ) cout << "риби\n" ; else cout << "водолей\n";
   }
   else if( month == 3 )
   {
      if( day > 20 ) cout << "овен\n" ; else cout << "риби\n";
   }
   else if( month == 4 )
   {
      if( day > 20 ) cout << "телец\n" ; else cout << "овен\n";
   }
   else if( month == 5 )
   {
      if( day > 20 ) cout << "близнаци\n" ; else cout << "телец\n";
   }
   else if( month == 6 )
   {
      if( day > 20 ) cout << "рак\n" ; else cout << "близнаци\n";
   }
   else if( month == 7 )
   {
      if( day > 20 ) cout << "лъв\n" ; else cout << "рак\n";
   }
   else if( month == 8 )
   {
      if( day > 20 ) cout << "дева\n" ; else cout << "лъв\n";
   }
   else if( month == 9 )
   {
      if( day > 20 ) cout << "везни\n" ; else cout << "дева\n";
   }
   else if( month == 10 )
   {
      if( day > 20 ) cout << "скорпион\n" ; else cout << "везни\n";
   }
   else if( month == 11 )
   {
      if( day > 20 ) cout << "стрлец\n" ; else cout << "скорпион\n";
   }
   else if( month == 12 )
   {
      if( day > 20 ) cout << "козирог\n" ; else cout << "стрелец\n";
   }

   return 0;
}
