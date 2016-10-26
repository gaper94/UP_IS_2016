#include <iostream>

using namespace std;

int main()
{
   char letter;
   cout << "Въведете буква от английската азбука: ";
   cin >> letter;
   
   switch(letter)
   {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
	  {
	     cout << "Гласна буква\n";
		 break;
	  }

	  case 'b':
      case 'c':
      case 'd':
	  case 'f':
	  case 'g':
	  case 'h':
	  case 'j':
	  case 'k':
	  case 'l':
	  case 'm':
	  case 'n':
	  case 'p':
	  case 'q':
	  case 'r':
	  case 's':
	  case 't':
	  case 'v':
	  case 'x':
	  case 'z':
	  {
	     cout << "Съгласна буква\n";
		 break;
	  }
   }
   
   return 0;
}
