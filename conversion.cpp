/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 2: conversion.cpp
*/


#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//This function prompts the user to enter the length in feet and inches
//The two numbers are stored in lengthFeet and lengthInches
void userInput(int& lengthFeet, int& lengthInches)
{

  cout <<"Enter in the length of the object in feet and inches" << endl;
  cout <<"Seperate the number for feet and inches with a space or newline. Type in feet first" << endl;

  cin >> lengthFeet;
  cin >> lengthInches;

}

//This function asks the user if they want to continue computation. If they
//type quit, the program will quit, and if they type anything else
//the program will continue to loop
void continuePrompt()
{
    string quit = " ";
    cout <<"Type exit if you want to quit, else type 'next' to continue" << endl;
    cin >> quit;
    if (quit == "exit")
    {
      exit(-1);
    }
}

/*This function calculates the length in meters and centimeters. The
remainder for the conversion from feet to meters is added to centimeters
*/
void calculate (int lengthFeet, int lengthInches, float& lengthMeters,float& lengthCentimeters )
{
  float remainderMeters = 0;
  lengthMeters = (.3048 * lengthFeet);
  lengthCentimeters = lengthInches * 2.54;

  remainderMeters = fmod(lengthMeters, 1);
  lengthCentimeters = lengthCentimeters + (remainderMeters *100);
  lengthMeters = lengthMeters - remainderMeters;
}

//This method outputs to the user the lenght in meters and centimeters
void output(float lengthMeters, float lengthCentimeters)
{
  cout << "Meters: " << lengthMeters << endl;
  cout  << "Centimeters: "<< lengthCentimeters << endl;
}

//Main method
int main(int argc, char **argv )
{
  //variables declared here, meters and centimeters are floats
  int lengthFeet = 0;
  int lengthInches = 0 ;
  float lengthMeters = 0;
  float lengthCentimeters = 0;

//while true, these functions will run. The continue prompt determins
//when the program will exit.
  while (true)
  {
    userInput(lengthFeet, lengthInches);
    calculate(lengthFeet, lengthInches, lengthMeters, lengthCentimeters);
    output(lengthMeters, lengthCentimeters);
    continuePrompt();
  }

  return 0;
}
