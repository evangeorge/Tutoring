// Author:     Evan George
// Course:     CS1336.003
// Date:       12/3/15
// Assignment: Lecture Homework #9 Exercise #2
// Compiler:   Visual C++ 2013


#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>

using namespace std;

int main()
{
   char answer[20];//all the answers
   char student[300];//all the student values

   const string chfile = "CorrectAnswers.txt";
   const string infile = "StudentAnswers.txt";
   ifstream inputFile;

   inputFile.open(chfile);//opens
      //save data into array
      for (int k = 0; k < 20; k++)
      {
         inputFile >> answer[k];
      }
   inputFile.close();//closes

   inputFile.open(infile);//opens
   //saves data into an array
   for (int i = 0; i < 220; i++)
   {
      inputFile >> student[i];
   }
   inputFile.close();//closes

   // number of students calc
   const int numberofs = 220 / 20;
   int stunum = 0;
   int range=0;
  

   ofstream myfile;
   myfile.open("Exam_Analysis.txt");
   while (stunum < numberofs)
   {
      int counterans = 0;// a counter for answer
      int counter = 0;
      double  wrong = 0;//obvious
      // first staement for report 
      cout << endl;
      cout << "Report for Student " << stunum + 1 << ":" << endl;
      cout << "______________________" << endl;
      myfile << endl;
      myfile << "Report for Student " << stunum + 1 << ":" << endl;
      myfile << "______________________" << endl;
      for (int i = range; i < (range+19); i++)
      {

         if (answer[counterans] != student[i])
         {
            wrong++;
         }
         counterans++;
      }
      // gets percentage correct
      cout << "Missed " << wrong << " out of 20 for " << ((20 - wrong) * 5) << "% correct." << endl;
      myfile << "Missed " << wrong << " out of 20 for " << ((20 - wrong) * 5) << "% correct." << endl;
    
      // gets questions that were missed
      if (wrong > 0)
      {
         cout << "Questions missed:" << endl;
         myfile << "Questions missed:" << endl;
         counterans = 0;
         for (int i = range; i < (range + 19); i++)
         {

            if (answer[counterans] != student[i])
            {
               cout << (i + 1)-range << "(" << student[i] << "/" << answer[counterans] << ") ";
               myfile << (i + 1)-range << "(" << student[i] << "/" << answer[counterans] << ") ";
               wrong++;
            }
            counterans++;
         }
      }
      // getting highest and lowest
      int high = 0, low = 100;// high and lowest scores
      int stu1, stu2;// getting student numbers

      if (((20 - wrong) * 5)>high || wrong == 0)
      {
         high = ((20 - wrong) * 5);
         stu1 = stunum;
      }

      if (((20 - wrong) * 5)<low)
      {
         low = ((20 - wrong) * 5);
         stu2 = stunum;
      }

      // checks if student passes or fails
      if (((20 - wrong) * 5) <= 69)
      {
         cout << "\nThis student failed.";
         myfile << "\nThis student failed.";
      }
      else
      {
         cout << "\nThis student passed!";
         myfile << "\nThis student passed!";
      }
      cout << endl;
      myfile << endl;
      // resets values
      stunum++;
      range = range + 20;

      if (stunum == 11)
      {
         // display highest adn lowest
         cout << endl;
         cout << "The student with the highest score was student " << stu1 << " with " << high << "%" << endl;
         myfile << "The student with the highest score was student " << stu1 << " with " << high << "%" << endl;
         cout << "The student with the lowest score was student " << stu2 << " with " << low << "%" << endl;
         myfile << "The student with the lowest score was student " << stu2 << " with " << low << "%" << endl;
      }
   }
   myfile.close();

      system("pause");
   }