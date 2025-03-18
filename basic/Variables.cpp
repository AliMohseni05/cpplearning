#include <iostream>
using namespace std;
//Variables

int main() {
  string message = "Welcome";
  message = "Bienvenue";
  // we must make a Variables 
  // after that use them and we can change them 
  string x = "a";
  x = "b";
  cout << x;
  x = "c";
  cout << x;

  int x2=8, y=2;
  // make 2 Variables at same time and they have type
  cout << x2 + y;
  cout << message;

  auto x3 = 4;
  auto y3 = 3.37; 
  auto z3 = "hello"; 
  cout << x3 << " " << y3 << " " << z3;
  //The auto keyword allows you to set the type of the variable based on its value.
  //When using the auto keyword, the variable must be assigned a value during declaration, else you will get an error.
  // C++ is case-sensitive. myvariable != MYVARIABLE
  // All variable names must begin with a letter of the alphabet or an underscore( _ )
  

}