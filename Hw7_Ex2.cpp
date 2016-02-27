// Author:     Evan George
// Course:     CS1336.003
// Date:       11/11/15
// Assignment: Lecture Homework #7 Exercise #2
// Compiler:   Visual C++ 2013

// getting test scores, average and lowest scores with functions
#include <iostream>
#include <iomanip>

using namespace std;


// to check the validation of the test scores
void getscore(int &test)
{
   cout << "please enter your test score:";
   cin >> test;

   while (test < 0 || test>100)// condition of the score
   {
      cout << "Please enter a REAL test score:";
      cin >> test;
   }

}


int findlowest(int t1, int t2, int t3, int t4, int t5)
{
   int low;// the lowest number
   low = 100;


   // compares the scores to lowest number
   if (t1 < low)
   {
      low = t1;
   }
   if (t2 < low)
   {
      low = t2;
   }
   if (t3 < low)
   {
      low = t3;
   }
   if (t4 < low)
   {
      low = t4;
   }
   if (t5< low)
   {
      low = t5;
   }

   return low;
}

void getaverage(int t1, int t2, int t3, int t4, int t5)
{
   double average;// our average
   int lowest = findlowest(t1, t2, t3, t4, t5);

   cout << showpoint << fixed << setprecision(2);// two decimals

   average = (t1 + t2 + t3 + t4 + t5 - lowest) / 4;

   cout << "\nYour average score is " << average << endl;
}

int main()
{
   int test1, test2, test3, test4, test5;// the tests you have taken

   // the the scores
   getscore(test1);
   getscore(test2);
   getscore(test3);
   getscore(test4);
   getscore(test5);


   // let's get the average
   getaverage(test1, test2, test3, test4, test5);

   // find your lowest score
   cout << "\nYour lowest score is " << findlowest(test1, test2, test3, test4, test5) << endl;


   system("pause");
   return 0;
}