
/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 2: zeroboth.cpp
*/


#include <iostream>
#include <fstream>
using namespace std;

//This function takes two integer parameters and changes them to 0.
void zeroBoth(int& numA, int& numB)
{
  numA = 0;
  numB = 0;
}

//Main method declares two variables, and sets them to 0.
int main(int argc, char **argv )
{
  //integers declared here.
  int numA = 0;
  int numB = 0;
//The user is prompted to enter two numbers
  cout << "Enter two numbers, seperated by a space or newline" << endl;
  cin >> numA;
  cin >> numB;
//zeroBoth takes both numbers and sets them to 0.
  zeroBoth(numA,numB);

  cout<< "Both numbers are zeroed : " << endl;
  //the integers are printed to the user
  cout << numA << ", " << numB << endl;

}
