
/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 2: 2darray.cpp
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  //Integers declared here
  int a[4][5];
  int numRows = 4;
  int numColumns = 5;
  int value;


//The user is asked to enter 5 numbers per line
  cout << "Enter 20 numbers. (Type 5 numbers each on four lines)" << endl;
//This for loop increments per column per row, and stores the users value in the array
  for (int i = 0; i < numRows; i++){
      for (int j = 0; j < numColumns; j++)
      {
         cin >> value;
         a[i][j] = value;
      }
   }

//This for loop prints out the numbers by row and column in array a
   for (int b = 0; b < numRows; b++){
       for (int c = 0; c < numColumns; c++)
       {
          cout << a[b][c] << ", ";
       }
    }
    cout << endl;
  return 0;
}
