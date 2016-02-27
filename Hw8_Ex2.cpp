// Author:     Evan George
// Course:     CS1336.003
// Date:       11/3/15
// Assignment: Lecture Homework #8 Exercise #2
// Compiler:   Visual C++ 2013

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

string convertToPigLatin(string instring);

int main()
{
   const string fileinput = "pigLatinIn.txt";
   ifstream inputFile;
   string instring;
   ofstream outfile;
   outfile.open("PigLatinOut.txt");

   inputFile.open(fileinput); // open input file
   if (!inputFile.fail())
   {
      outfile << "English words      " << setw(15) << "Pig-Latin words"<<endl;
      outfile << "_ _ _ _ _ _ _      " << setw(15) << "_ _ _ _ _ _ _ _"<<endl;
      while (inputFile >> instring)
      {
         outfile <<setw(13) <<instring<< setw(21)<<convertToPigLatin(instring)<<endl;
      }
   }

   inputFile.close();
}

string convertToPigLatin(string instring)
{
   string outstring;


   if (instring.at(0) == 'a' || instring.at(0) == 'e')
   {
      outstring = instring + "-way";
   }

   else if (instring.at(0) == 'i' || instring.at(0) == 'o')
   {
      outstring = instring + "-way";
   }

   else if (instring.at(0) == 'u')
   {

      outstring = instring + "-way";
   }
   else
   {
      string frag;// the fragment string with consonants
      string finished;// the final word in pig latin
      for (int i = 0; i < instring.length(); i++)
      {
         char letter = instring[i];
         switch (letter)
         {
            // goes case by case if its a vowel it will put the consonances preceedign it in the back
         case 'a':
         {
            finished = instring.substr(i, instring.length()) + "-" + frag + "ay";
            return finished;   
         }
         case 'e': 
         {
            finished = instring.substr(i, instring.length()) + "-" + frag + "ay";
            return finished;
         }
         case 'i':
         {
            finished = instring.substr(i, instring.length()) + "-" + frag + "ay";
            return finished;
         }
         case 'o':
         {
            finished = instring.substr(i, instring.length()) + "-" + frag + "ay";
            return finished;
         }
         case 'u':
         {
            finished = instring.substr(i, instring.length()) + "-" + frag + "ay";
            return finished;
         }
         default:
            frag = frag + letter;// stores the constances

         }
        
      }
   }

   return outstring;
}