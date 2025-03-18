//DataTypes

#include <iostream>
using namespace std;

int main() {

  int points = 128;
  // int for number 
  cout << points;
  double temp = 84.2;
  // double for float
  cout << temp;
  float length = 5.31f;
  cout << length;
  //This tells C++ to use the value as a float, instead of double
  //By default, decimal values are of type double.
  //float uses less storage in the memory, but is not as precise as the double type.
  //The best practice is to use double, if you do not have any specific requirements to use float.
  char x = 'H';
  cout << x;
  //just single quotes for the value
  bool online = false;
  cout << online;
  //The bool type can only hold values: either true or false.It is used when working with conditions.
  // it return 0 and 1 as output 

}
