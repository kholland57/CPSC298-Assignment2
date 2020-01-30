
/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 2: salestax.cpp
*/



#include <iostream>
using namespace std;


//This method returns a float that computes the cost added with the tax
float addTax(float taxRate, float cost)
{
  return ((cost * taxRate) + cost);
}


//Main Method
int main(int argc, char **argv )
{
  //Variables declared here
  float taxRate = 0;
  float cost = 0;
  float costWithTax = 0;

//User is prompted for item cost and tax rate, and each are stored in variables
  cout << "Enter the cost of the item : " << endl;
  cin >> cost;

  cout << "Enter the tax rate (decimal)" << endl;
  cin >> taxRate;


//The new cost with tax variable is calculated with the addTax function
  costWithTax = addTax(taxRate, cost);

//The final cost is printed to the user
  cout << "Final Cost : $" << costWithTax << endl;

  return 0;
}
