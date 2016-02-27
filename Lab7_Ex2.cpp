// Lab 7 Exercise 2
// Percentages of numbers input from a file.
//
// Program by: Evan George

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main()
{

   const string INPUT_FILE_NAME = "numbers.txt";
   ifstream inputFile;
   int totvalue, input;// having the input and total number of values
   int pos, neg, zero;// positive values negative values and zero

   // set values
   neg = 0;
   pos = 0;
   zero = 0;
   totvalue = 0;

   cout << fixed << setprecision(1);

   inputFile.open(INPUT_FILE_NAME); // open input file
   if (!inputFile.fail())
   {
      cout << "Input file is open.\n";

      cout << "\nReading in the numbers.\n\n";

      while (inputFile >> input)
      {
         // checks to see if it fits conditions
         if (input > 0)
         {
            pos = pos+1;
         }
         else if (input < 0)
         {
            neg = neg+1;
         }
         else if (input == 0)
         {
            zero = zero+1;
         }
      }
         totvalue = pos + neg + zero;// finding total number of values
         
         //convert in to 0

         double pos1, neg1, zero1;// the percent values of these things
         
         pos1 = (static_cast<double>(pos) / totvalue) * 100;
         neg1 = (static_cast<double>(neg )/ totvalue) * 100;
         zero1 = (static_cast<double>(zero) / totvalue) * 100;

         // final display
         cout << "The percent of positive values that you have is " << pos1 << "%" << endl;
         cout << "The percent of negative values that you have is " << neg1 << "%" << endl;
         cout << "The percent of zero values that you have is " << zero1 << "%" << endl;
      }

      //Close the input file
      cout << "\nClosing the input file.\n";
      inputFile.close();
    // End if output file was opened
   system("pause");
   return 0;
}