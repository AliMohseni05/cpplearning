# cout
cout                                                    |                   	std::cout
1.	A “namespace std” must be written into the program	|  “std::cout” must be used, if “namespace std” was not declared previously
2.	cout is a predefined object of the ostream class    |	“std::cout” calls the Standard Template/Iostream Library, since “cout” is only defined in the “std” namespace
3.	Declaring the namespace before hand gives
 access to many functions such as cin, cout etc.        | This is just an implicit initialization of the std library performed inside the function, i.e alongwith the main computation 


 # a Simple c++ program 

 #include <iostream>
 using namespace std;

  a function called main

  int main() { }
  
  all of my program will be here and computer runs this part
  Curly brackets { } indicate the beginning and end of a function,
  which can also be called the **function's body**.

Remember the following important points:

The #include statement is used to add a header file to the program.
The using command is used to tell the program which namespace to use.
To use the cout command, you need to include the &lt;iostream&gt; header and use the std namespace.
The starting point of C++ programs is the function called main, which includes the code that you want to run.
The endl command is used to add a new line to the output.

# variable

A variable has a name and a type of the value it holds. 
To declare a variable use the type followed by the name of the variable.
You can assign a value to the declared variable using the = operator.
A variable can change its value during the program, by being assigned to a new value.

string x = "a";
  x = "b";
  cout << x;
  x = "c";
  cout << x;

# DataTypes
  - int is used to hold whole numbers (integers) double stores decimals.
  - string is use for hold whole string in "" marke 
  - float is similar to double, but has less precision and requires less memory. You need to prefix the value with the letter 'f' to create floats.
  - char holds a single character.
  -  bool can have one of the following values: true or false. 


# Math

