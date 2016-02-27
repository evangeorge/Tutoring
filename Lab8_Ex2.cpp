// Lab 8 Exercise 2
// Determine if your heart beat rate is within the
// target heart rate.
//
// Program by: Evan George

#include <iomanip>
#include <iostream>

using namespace std;

bool heartcheck(int age, int heartrate)
{
   int targetrate1;// the calculated target rate
   bool stat;
   double min, max;// the minimum and maximum values your rate has to be in.
   // calculations
   targetrate1 = 220 - age;
   min = targetrate1*.6;
   max = targetrate1*.7;


   // range
   if (heartrate >= min&&heartrate <= max)
   {
      stat = true;
   }

   else
   {
      stat = false;
   }

   return stat;
}


int main()
{
   int age, heartrate;// this is the exit sequence and the age input for user, the target rate checker
   age = 0;

   while (age >= 0)
   {
      // get input
      cout << "Please enter your age:";
      cin >> age;

      if (age < 0)
      {
         return 0;
      }

      cout << "Please enter your beats per minute:";
      cin >> heartrate;


      if (heartcheck(age, heartrate))
      {
         cout << "You are in range!!! You ARE healthy!" << endl;
      }
      else
      {
         cout << "You ARE not in range!!!" << endl;
      }


   }


   return 0;
}