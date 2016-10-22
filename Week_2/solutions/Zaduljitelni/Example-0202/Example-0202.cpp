#include <iostream>

using namespace std;

int main()
{
   double amount = 0.0, exchangedAmount = 0.0;
   char currencyCode;
   const double exchangeRateUSD = 1.777;
   const double exchangeRateEUR = 1.956;
   const double exchangeRateGBP = 2.654;
   const double exchangeRateCHF = 1.798;
   cout << "Въведете сума:";
   cin  >> amount;
   cout << "Въведете код на валутата (USD = u, EUR = e, GBP = g, CHF = c):";
   cin  >> currencyCode;
   
   if( currencyCode == 'u' )
   {
      exchangedAmount = amount * exchangeRateUSD;
   }
   else if( currencyCode == 'e' )
   {
      exchangedAmount = amount * exchangeRateEUR;
   }
   else if( currencyCode == 'g' )
   {
      exchangedAmount = amount * exchangeRateGBP;
   }
   else if( currencyCode == 'c' )
   {
      exchangedAmount = amount * exchangeRateCHF;
   }
   cout << "Въведената сума в BGN e:" << exchangedAmount << endl;

   return 0;
}
