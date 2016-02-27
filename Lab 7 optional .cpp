// Lab 7 optional
// making triangles with loops
//
// Program by: Evan George

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int length,counter;
   counter = 1;

   // get data
   cout << "Please enter a number between 4 and 80:";
   cin >> length;

   // make sure data is good
   while (length < 4 || length > 80)
   {
         cout << "Please enter a number between 4 and 80:";
         cin >> length;
   }


   // getting the middle rows
   cout << "*\n";
   while (counter != (length-1))
   {
      cout << "*" << setw(counter+1) << "*\n";
      counter++;
   }

   // final row of triangle
   counter = 0;
   while (counter != length)
   {
      cout << "*";
      counter++;
      
   }
   // finsih the triangle
   cout << endl;

   system("pause");
   return 0;
}