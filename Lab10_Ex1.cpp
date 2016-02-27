// CS 1336 lab 10 Ex1
// Arrays
// made by: Evan George

#include <iomanip>
#include <iostream>
using namespace std;

void getvalues(int num[]);
void anti(int num[]);
int main()
{
   int numbers[10];// array for storing numbers

   getvalues(numbers);
   anti(numbers);

   system("pause");
   return 0;
}
void getvalues(int num[])
{
   for (int i = 0; i < 10; i++)
   {
      cout << "Please enter number " << i+1 << ":";
      cin >> num[i];
      cout << endl;
   }
}
void anti(int num[])
{
   int anti[10];
   for (int i = 9; i > -1; i--)
   {
      cout << "The number " << i + 1 << " is " << num[i] << endl;

   }
}