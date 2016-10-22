#include <iostream>

using namespace std;

const int boardRows = 3;
const int boardColumns = 3;

void drawBoard(const char* board)
{
   for(int i = 0; i < boardRows * boardColumns; i++)
   {
	  if( i % 3 == 0 && i != 0 )
	  {
	     cout << "\n------\n";
	  }
      cout << board[i] << "|";
   }
   cout << "\n------\n";
}

bool isTurnPossible(const char* board, int index)
{
   if( index > 0 && index <= (boardRows * boardColumns) )
   {
      return board[index - 1] == ' ';
   }
   return false;
}

void applyTurn(char* board, int turn, bool isXOnTurn)
{
   board[turn - 1] = isXOnTurn ? 'X' : 'O';
}

bool isGameWon(char* board, bool isXOnTurn)
{
   char playerSymbol = isXOnTurn ? 'X' : 'O';
   bool gameIsWon;
   for( int i = 0; i < boardColumns; i++)
   {
      gameIsWon = true;
      // Check horizontally
      for( int j = 0 ; j < boardRows; j++)
	  {
	     if(board[i*boardRows + j] != playerSymbol)
		 {
		    gameIsWon = false;
		 }
	  }
	  if( gameIsWon ) return true;

      gameIsWon = true;
	  // Check vertically
      for( int j = 0 ; j < boardRows; j++)
	  {
	     if(board[i + j*boardColumns] != playerSymbol)
		 {
		    gameIsWon = false;
		 }
	  }
	  if( gameIsWon ) return true;
   }
   
   // Check diagonals
   if(   ( board[0] == playerSymbol && board[4] == playerSymbol && board[8] == playerSymbol )
      || ( board[2] == playerSymbol && board[4] == playerSymbol && board[6] == playerSymbol )
	 )
   {
      return true;
   }

   return false;
}

int main()
{
   char board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
   int numberOfMovesMade = 0;
   int selectedTurn = 0;
   bool isXOnTurn = true;
   bool gameIsWon = false;
   while( numberOfMovesMade < (boardRows * boardColumns) )
   {
      drawBoard(board);
	  // Prompt for input until it's valid
      while(true)
	  {
         cout << "Въведете позиция на дъската от 1 до 9:";
		 cin >> selectedTurn;
		 if( isTurnPossible(board, selectedTurn) ) break;
	  }
	  applyTurn(board, selectedTurn, isXOnTurn);
	  
	  if( isGameWon(board, isXOnTurn) )
	  {
	     gameIsWon = true;
	     break;
	  }
	  
	  isXOnTurn ^= 1;
	  numberOfMovesMade++;
   }
   drawBoard(board);
   
   if( gameIsWon )
   {
      char winner = isXOnTurn ? 'X' : 'O';
	  cout << "Победител е играча с " << winner << "-те\n";
   }

   return 0;
}
