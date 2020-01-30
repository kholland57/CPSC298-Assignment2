
/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 2: intarray.cpp
*/

#include <iostream>

using namespace std;
//Main method
int main(int argc, char **argv) {
//Integers declared here
  int numberArray[10] = {};
  int userNumber = 0;

//The user is prompted to enter 10 numbers, and the forloop reads each input into the array.
  cout << "Please type in 10 numbers, either seperated by a space or new line" << endl;
  for (int i = 0; i < 10 ; ++i)
  {
    cin >> userNumber;
    if (userNumber > 0){
        numberArray[i] = userNumber;
    }
  }

//This cout statement and forloop outputs the contents of the array to the user.
  cout << "These are the numbers entered into the array:" << endl;
  for (int i = 0; i < 10 ; ++i)
  {
    cout << numberArray[i] << ", ";
  }
  cout << endl;


  return 0;
}
