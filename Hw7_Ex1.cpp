// Author:     Evan George
// Course:     CS1336.003
// Date:       11/11/15
// Assignment: Lecture Homework #7 Exercise #1
// Compiler:   Visual C++ 2013

// getting prime numbers with functions
bool isprime(int a)
{
   int counter;// a counter
  bool prime;// return if its prime
   counter = 2;

   while (counter < a)// does if divide evenly?
   {
      if (a%counter != 0)
      {
         counter++;
      }
      else// if it does its not prime
      {
         prime = false;
         break;
      }

   }

   if (counter == a)// but if it never does its prime, son!
   {
      prime = true;
   }
   return prime;
}

#include<iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
   const string primefile = "Primeout.txt";// lets make a prime text
   ofstream outputFile;

   outputFile.open(primefile);
   int value,numberline,counter;// counter, all numbers and value wanted of primes
   counter = 0;
   numberline = 2;

   cout << "how many primes do you want?";// get number of primes from the user
   cin >> value;
   if (value > 100 || value < 0)
   {
      cout << "how many primes do you want?( between 0 and 100)";// checks if it fits in our range
      cin >> value;
   }
   while (counter<value)
   {
      if (isprime(numberline))
      {
         cout << setw(5)<<numberline;// prints and sets width
         counter++;
      }
      if (counter % 10 == 0 && isprime(numberline))// after every ten numbers
      {
    
         cout << endl;
       
      }
      numberline++;
      
   }




   cout << endl;
   system("pause");
}