// Author:     Evan George
// Course:     CS1336.003
// Date:       11/3/15
// Assignment: Lecture Homework #6 Exercise #2
// Compiler:   Visual C++ 2013
// making a code that reaads input

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main()
{

   const string INPUT_FILE_NAME = "random.txt";
   ifstream inputFile;
   double value, total, sum, average, secondlow, secondhigh;// the values, toal sum average second lowest and highest values
   double large, small;// the largest and smallest values
   large = -100000000000000;
   small = 100000000000000000;
   sum = 0;
   total = 0;
   secondhigh = large;
   secondlow = small;


   cout << fixed << setprecision(1);// set decimal

   //open and search
   inputFile.open(INPUT_FILE_NAME); // open input file
   if (!inputFile.fail())
   {
      cout << "Input file is open.\n";

      cout << "\nReading in the numbers.\n\n";

      while (inputFile >> value)
      {
         total++;
         sum = sum + value;

         // getting largest value
         if (large < value)
         {
            large = value;
         }
         // get smallest value
         if (small > value)
         {
            small = value;
         }

      }
    
      }
   //Close the input file
   inputFile.close();

   inputFile.open(INPUT_FILE_NAME); // open input file
   if (!inputFile.fail())
   {
      // lets find second largest and smallest
      while (inputFile >> value)
      {
         if (value >= secondhigh && secondhigh < large)
         {
            secondhigh = value;
         }
         if (value <= secondlow && secondlow > small)
         {
            secondlow = value;
         }

      }
   }

   // display some values
   average = sum / total;
   cout << "Your number of numbers was:" << total << endl;
   cout << "Your sum was:" << sum << endl;
   cout << "Your average was:" << average << endl;
   cout << "Your largest was:" << large << endl;
   cout << "Your smallest was:" << small << endl;
   cout << "Your second largest was:" << secondhigh << endl;
   cout << "Your second smallest was:" << secondlow << endl;

   

      //Close the input file
      cout << "\nClosing the input file.\n";
      inputFile.close();
      // End if output file was opened
      system("pause");
      return 0;
   }