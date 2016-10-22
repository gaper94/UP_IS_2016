#include <iostream>

using namespace std;

int main()
{
   int day, month, year;
   cout << "Въведете дата в следният формат дд-мм-гггг: ";
   cin >> day >> month >> year;
   
  if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
   {
      if( day > 31 )
	  {
	     cout << day << "-" << month << "-" << year << " е навалидна дата\n";
	  }
      else if( day == 31 )
	  {
	     day = 1;
		 if( month == 12 )
		 {
		    year++;
			month = 1;
		 }
		 else
		 {
		    month++;
		 }
	  }
	  else
	  {
	     day++;
	  }
   }
   else if( month == 4 || month == 6 || month == 9 || month == 11 )
   {
     if( day > 30 )
	 {
	    cout << day << "-" << month << "-" << year << " е навалидна дата\n";
	 }
	 else if( day == 30 )
	 {
	    day = 1;
		month++;
	 }
	 else
	 {
	    day++;
	 }
   }
   else if( month == 2 )
   {
      // Една година е високосна когато е изпълнено следното правило:
	  // 1. Година деляща се на числото 4 без остатък е високосна
      // 2. Ако годината дели без остатък на 100, то тя не е високосна
	  // 3. Но ако годината също се дели без остатък на 400, то тя пак е високосна
      bool isLeapYear = ( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 );
	  unsigned char maxNumberOfDaysInMonth = isLeapYear ? 29 : 28;
	  
	  if( day > maxNumberOfDaysInMonth )
	  {
	     cout << day << "-" << month << "-" << year << " е навалидна дата\n";
	  }
	  else if( day == maxNumberOfDaysInMonth )
	  {
	     day = 1;
		 month++;
	  }
	  else
	  {
	     day++;
	  }
   }
   cout << "Следващата дата е: " << day << "-" << month << "-" << year << "\n";

   return 0;
}
