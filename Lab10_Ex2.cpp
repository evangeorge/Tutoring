// Lab 10 Exercise 2
// Still more counting
//
// Program by: EvanGeorge

#include<iostream>

using namespace std;

void countnum(int num[]);// counts number of numbers counted
void display(int num[]);// displays how many times a value has been printed
int main()
{
   int numbers[10];// the array we save to
   int counter=0;// a counter

   // getting values
   for (int i = 0; i < 10; i++)
   {
      // get values
      cout << "Please enter 10 numbers between 0-9 or type 10 to exit:";
      cin >> numbers[i];
      counter++;
      if (numbers[i] == 10)
      {
         counter--;
         break;

      }// validation
      while (numbers[i] < 0 || numbers[i] >10)
      {
         cout << "Please enter a valid number between 0-9 or type 10 to exit:";
         cin >> numbers[i];
         counter++;
        if (numbers[i] == 10)
         {
            
            counter = counter - 1;
            break;
         }
      }
      if (numbers[i] == 10)
      {
         counter--;
         break;
      }
   }
   
   cout << endl;
   // counting the numbers
   countnum(numbers);

   cout << endl;
  // display numbers
   display(numbers);
   system("pause");
}

void countnum(int num[])
{
   int disnum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

   // counts the numbers
   for (int i = 0; i < 10; i++)
   {
    // adding one to everytime a number is entered
         switch (num[i])
         {
         case 0:{
            disnum[0] = disnum[0] + 1;
            break; }
         case 1:{
            disnum[1] = disnum[1] + 1;
            break; }
         case 2:{
            disnum[2] = disnum[2] + 1;
            break; }
         case 3:{
            disnum[3] = disnum[3] + 1;
            break; }
         case 4:{
            disnum[4] = disnum[4] + 1;
            break; }
         case 5:{
            disnum[5] = disnum[5] + 1;
            break; }
         case 6:{
            disnum[6] = disnum[6] + 1; 
            break; }
         case 7:{
            disnum[7] = disnum[7] + 1;
            break; }
         case 8:{
            disnum[8] = disnum[8] + 1;
            break; }
         case 9:{
            disnum[9] = disnum[9] + 1;
            break; }
         default:
            break;
         }

   }
   // changes num to be a counter
   for (int i = 0; i < 10; i++)
   {
     num[i]=disnum[i]; 
   }
}

void display(int num[])
{
   for (int i = 0; i < 10; i++)
   {
      // display of numbers
      switch (i)
      {
      case 0:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 1:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 2:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 3:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 4:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 5:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 6:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 7:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 8:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      case 9:{
         cout << "The number " << i << " has been typed in " << num[i] << " time(s)." << endl;
         break; }
      default:
         break;
      }
   }
}