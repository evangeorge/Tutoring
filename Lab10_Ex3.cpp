// Lab 10 Ex3
//
//counting names
// by:Evan George

#include <iostream>
#include <string>

using namespace std;

int get(string name[],int &num);// lets get the names prototype
void display(string name[], int num);// displays names

int main()
{
   string names[10];// the array for the names
   int numofname=0;// number of names

   get(names,numofname);
   display(names, numofname);
   
   system("pause");
}

int get(string name[],int &num)
{
   int counter=0;
   for (int i = 0; i < 8; i++)
   {
      cout << "Please type in a name:";
      cin >> name[i];
      counter++;
   }
   num = counter;
   return counter;
}

void display(string name[], int num)
{
   for (int i = 0; i < num; i++)
   {
      cout << "Name " << i + 1 << " is " << name[i] << endl;
   }

}