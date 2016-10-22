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
   int tenGenerated = generatedNumber / 10;
   int oneGenerated = generatedNumber % 10;

   while( numberOfAttempts < 5 && !numberIsGuessed )
   {
      cin >> enteredNumber;
      
	  int tenEntered = enteredNumber / 10;
	  int oneEntered = enteredNumber % 10;
      if( tenEntered == tenGenerated && oneEntered == oneGenerated )
	  {
	     numberIsGuessed = true;
	  }
	  else if( tenEntered == oneGenerated && oneEntered == tenGenerated )
	  {
	     cout << "Имате две крави\n";
	  }
	  else if( tenEntered == tenGenerated || oneEntered == oneGenerated )
	  {
	     cout << "Имате един бик\n";
	  }
	  else if( tenEntered == oneGenerated || oneEntered == tenGenerated )
	  {
	     cout << "Имате една крава\n";
	  }
	  else
	  {
	     cout << "Имате нула крави\n";
	  }

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
