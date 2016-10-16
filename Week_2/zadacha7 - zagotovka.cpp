#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int generateNumber()
{
   std::vector<int> possibleCombinations; 
   for(int i = 1; i <= 5 ; ++i)
   {
      for(int j = 1; j <= 5 ; ++j)
	  {
	     if( i != j )
		 {
		    possibleCombinations.push_back( i*10 + j );
		 }
	  }
   }
   srand(time(NULL));
   return possibleCombinations[rand()%possibleCombinations.size()];
}

int main()
{
   int numberOfAttempts = 0;
   int generatedNumber = generateNumber();
   int enteredNumber = 0;
   bool numberIsGuessed = false;
   
   while( numberOfAttempts < 5 && !numberIsGuessed )
   {
      cin >> enteredNumber;
      
	  // Място за вашият код... 
      
	  ++numberOfAttempts; // numberOfAttempts += 1
   }

   if( numberIsGuessed )
   {
      cout << "Поздравления!\n";
   }
   else
   {
      cout << "Не успяхте да познаете числото в 5 хода\n";
   }
   return 0;
}
