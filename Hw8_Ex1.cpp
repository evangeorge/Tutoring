// Author:     Evan George
// Course:     CS1336.003
// Date:       11/3/15
// Assignment: Lecture Homework #8 Exercise #1
// Compiler:   Visual C++ 2013

#include <string>
#include <iostream>

using namespace std;
int main()
{
   string fun = "C++ Programming is Fun!!";

   cout << "Your string is " << fun<<endl;

   // find tis length
   cout << "Its length is:";
   cout<< fun.length() << endl;

   // getting the single quotes at character index 5
   cout << "Character at index 5: ";
   for (int i = 0; i < fun.length(); i++)// find index 5
   {
      if (i == 5)
      {
         cout << "'";
      }
      if (i == 5)
      {
         cout << fun.at(i);
         cout << "'";
      }

   }

   cout << endl;
   // lets convert the 5th number into its ASCII value

   cout << "The ASCII value for the 5th number is: ";
   
     
     
         int val = static_cast <int> (fun.at(5));
         cout <<"'"<< val << "'";



   cout << endl;

   // print 19 -22
   cout << "The index of 19 to 22 is: ";
   string fragment = fun.substr(19, 22);
   cout << fragment<<endl;

   // find the first 'g'

   int position;
   position = fun.find("g");
   cout << "The index of the first 'g' is: " << position << endl;

   // find second g
   string secondg = fun.substr(fun.find("g")+1, 24);
   position = secondg.find("g") + fun.find("g");
   cout << "The index of the second 'g' is: " << position << endl;

   system("pause");
}