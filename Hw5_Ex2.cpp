// Author: Evan George
// Course: CS1336.003
// Date: Oct 28th 2015
// Assignment: Lecture Homework #5 Exercise #2
// Compiler: Visual C++ 2013
// Description:
// bar graphs convert of values


#include<iostream>
using namespace std;
int main()
{
   int str1, str2, str3, str4, str5;// stores 1-5
  
   // getting values and make sure it is positive
   cout << "Please enter the sales for store 1: ";
   cin >> str1;

   while (str1 < 0)
   {
      cout << "Please enter a value greater than 0:";
         cin >> str1;
   }
   cout << "Please enter the sales for store 2: ";
   cin >> str2;

   while (str2 < 0)
   {
      cout << "Please enter a value greater than 0:";
      cin >> str2;
   }
   cout << "Please enter the sales for store 3: ";
   cin >> str3;

   while (str3 < 0)
   {
      cout << "Please enter a value greater than 0:";
      cin >> str3;
   }
   cout << "Please enter the sales for store 4: ";
   cin >> str4;

   while (str4 < 0)
   {
      cout << "Please enter a value greater than 0:";
      cin >> str4;
   }
   cout << "Please enter the sales for store 5: ";
   cin >> str5;
   while (str5 < 0)
   {
      cout << "Please enter a value greater than 0:";
      cin >> str5;
   }

   // converting them to  *
   str1 = str1 / 100;
   str2 = str2 / 100;
   str3 = str3 / 100;
   str4 = str4 / 100;
   str5 = str5 / 100;


   // bar graph
   cout << "\n\bBAR GRAPH FOR TODAY'S SALES\b0\n";
   cout << "(Each * counts as $100)" << endl;
   cout << "Store 1:";
   // loop to print *
   do
   {
      cout << "*";

   } while (str1 > 0, str1--);

   cout << "\nStore 2:";
   // loop to print *
   do
   {
      cout << "*";

   } while (str2 > 0, str2--);

   cout << "\nStore 3:";
   // loop to print *
   do
   {
      cout << "*";

   } while (str3 > 0, str3--);
   cout << "\nStore 4:";
   // loop to print *
   do
   {
      cout << "*";

   } while (str4 > 0, str4--);
   cout << "\nStore 5:";
   // loop to print *
   do
   {
      cout << "*";

   } while (str5 > 0, str5--);

   cout << endl;

   system("pause");
   return 0;
} // end function main()