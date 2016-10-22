#include <iostream>
#include <iomanip>

using namespace std;

typedef enum
{
  DIRECTION_RIGHT = 0,
  DIRECTION_DOWN,
  DIRECTION_LEFT,
  DIRECTION_UP,
  DIRECTIONS_COUNT,
} DIRECTIONS;

int main()
{
   unsigned short boardSize;
   cin >> boardSize;
   unsigned int** board = new unsigned int*[boardSize];
   for(int i = 0; i < boardSize; i++)
   {
      board[i] = new unsigned int[boardSize];
   }
   
   for(int i = 0; i < boardSize; i++)
   {
      for(int j = 0; j < boardSize; j++)
	  {
	     board[i][j] = 0;
	  }
   }

   int numbersCount = 0;
   DIRECTIONS currentDirection = DIRECTION_RIGHT;
   int currentIdx = 0;
   int movement = 1;
   while(numbersCount < (boardSize * boardSize) )
   {
      board[currentIdx / boardSize][currentIdx % boardSize] = numbersCount + 1;

	  if(    ((((currentIdx % boardSize) + 1 >= boardSize && currentDirection == DIRECTION_RIGHT) || ((currentIdx % boardSize) - 1 < 0 && currentDirection == DIRECTION_LEFT)
	      || (currentIdx + 1) / boardSize >= boardSize)
	      && board[currentIdx / boardSize][currentIdx % boardSize] != 0u )
		  || ( (currentDirection == DIRECTION_RIGHT || currentDirection == DIRECTION_DOWN) && board[(currentIdx + movement)/ boardSize][ (currentIdx + movement)% boardSize] != 0)
		  || ( (currentDirection == DIRECTION_UP || currentDirection == DIRECTION_LEFT) && board[(currentIdx - movement)/ boardSize][ (currentIdx - movement)% boardSize] != 0 ))
	  {
	     currentDirection = (DIRECTIONS)(( currentDirection + 1 ) % DIRECTIONS_COUNT);
	  }
	  
	  if( currentDirection == DIRECTION_RIGHT )
	  {
	     movement = 1;
	     currentIdx++;
	  }
	  else if( currentDirection == DIRECTION_DOWN )
	  {
	     movement = boardSize;
	     currentIdx += boardSize;
	  }
	  else if( currentDirection == DIRECTION_LEFT )
	  {
	     movement = 1;
	     currentIdx--;
	  }
	  else
	  {
	    movement = boardSize;
	    currentIdx -= boardSize;
	  }
	  numbersCount++;
   }

   // Print matrix
   for(int i = 0; i < boardSize; i++)
   {
      for(int j = 0; j < boardSize; j++)
	  {
	     cout << setw(5) << board[i][j];
	  }
	  cout << endl;
   }
   // Deallocate memory
   for(int i = 0; i < boardSize; i++)
   {
      delete[] board[i];
   }
   delete[] board;

   return 0;
}
