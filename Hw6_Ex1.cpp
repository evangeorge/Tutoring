// Author:     Evan George
// Course:     CS1336.003
// Date:       11/3/15
// Assignment: Lecture Homework #6 Exercise #1
// Compiler:   Visual C++ 2013
// making triangles !!!!

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int length, counter, copy, copy1, total;// for teh length of the trangle a copy of the length and a counter
   counter = 1;

   // get data
   cout << "Please enter a number between 1 and 15:";
   cin >> length;
   copy1 = length;
   // make sure data is good
   while (length < 1 || length > 15)
   {
      cout << "Please enter a number between 1 and 15:";
      cin >> length;
      copy1 = length;
   }

   total = (length*(length + 1)) / 2;
   copy = 0;

   // if it is right justified
   while (copy != total)
   {
      if (copy == length)
      {
         cout << endl;
         length = length - 1;
         copy = 0;
         if (length == 0)
         {
            break;
         }

      }
      cout << "*";
      ++copy;
   }


   // reset some values
   length = copy1;
   counter = 1;
   copy = 0;

   // the triangle right justified
   cout << endl;
   while (copy != total)
   {
      if (copy == length)
      {
         cout << endl;
         length = length - 1;
         copy = 0;
         cout << setw(counter + 1);
         counter++;
         if (length == 0)
         {
            break;
         }

      }
      cout << "*";
      ++copy;
   }

   

  
   
   system("pause");
   return 0;
}