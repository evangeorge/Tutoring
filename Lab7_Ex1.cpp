// Lab 7 Exercise 1
// Display a row of $ characters based on user input
//
// Program by: Evan George

#include <iostream>

using namespace std;

int main()
{
   int dollar, count;// the dollar sings need to print and counter

   count = 0;

   cout << "Enter the next number (1-10):";
   cin >> dollar;

   if (dollar >= 10)
   {
      cout << "Enter a valid number:";
      cin >> dollar;
   }

   if(dollar < 0)
   {
      cout << "Enter a valid number:";
      cin >> dollar;
   }
   while (count < dollar)
   {
      cout << "$";
      count++;
   }

   cout << endl;


   system("pause");
   return 0;
}