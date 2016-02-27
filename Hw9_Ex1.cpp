// Author:     Evan George
// Course:     CS1336.003
// Date:       12/3/15
// Assignment: Lecture Homework #9 Exercise #1
// Compiler:   Visual C++ 2013

#include <iomanip>
#include <iostream>
#include<fstream>
#include<string>

using namespace std;


int searchList(int stdList[], int numElems, int value);//prtype for the search function

int main()
{
   int values[101];// the values we have
   int find[23];// what we are looking for

   //opens files
   const string chfile = "LSTest.txt";
   const string infile = "LSStandard.txt";
   ifstream inputFile;

   // saves numbers we are looking for into an array
   inputFile.open(chfile);//opens
   {
      for (int k = 0; k < 23; k++)
      {
         inputFile >> find[k];
      }
   }

   inputFile.close();//closes

   //searches that file for the data needed
   inputFile.open(infile);//opens
   
   //saves data into an array
      for (int i = 0; i < 100; i++)
      {
         inputFile >> values[i];
      }

      //searches data
      for (int i = 0; i < 22; i++)
      {
         cout << "The number " << i + 1 << "(" << setw(3) << find[i] << "):";
         cout << searchList(values, 100, find[i]);
         cout << '\b';
      }
   

   inputFile.close();//closes

   system("pause");
}

int searchList(int stdList[], int numElems, int value)
{
   for (int i = 0; i < numElems; i++)
   {
      if (stdList[i] == value)// if it matches to value we want then locate index number
      {
         cout << " it was located index " << i << endl;
         return 1;
      }  
   }
      cout << " was not found."<<endl;
      return 1;
}