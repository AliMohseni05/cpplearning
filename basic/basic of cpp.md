# simpel c++ app 
  #include <iostream>
  using namespace std;
  int main()
  {
	cout << "salam ali";
    // by using namespace we cam remove std for each cout "consol output" 
	return 0;
  }

# cout or std::cout
cout                                                    |                   	std::cout
1.	A “namespace std” must be written into the program	|  “std::cout” must be used, if “namespace std” was not declared previously
2.	cout is a predefined object of the ostream class    |	“std::cout” calls the Standard Template/Iostream Library, since “cout” is only defined in the “std” namespace
3.	Declaring the namespace before hand gives
 access to many functions such as cin, cout etc.        | This is just an implicit initialization of the std library performed inside the function, i.e alongwith the main computation 


# what do we have in a Simple c++ program 

 #include <iostream>
 // useing system op 
 using namespace std;
 // a function called main
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

# Comments
// a line Comments
**Multi-Line Comments**
/*  This is just a
  demo program
  that outputs a name */

# variable

A variable has a name and a type of the value it holds. 
To declare a variable use the type followed by the name of the variable.
You can assign a value to the declared variable using the = operator.
A variable can change its value during the program, by being assigned to a new value.
.. we can init variable once time and change the valiue of it.
string x = "a";
  x = "b";
  cout << x;
  x = "c";
  cout << x;
  - All variable names must begin with a letter of the alphabet or an underscore( _ ). 
  - After the initial letter, variable names can contain additional letters, as well as numbers.
  - Blank spaces or special characters are not allowed in variable names.
You can declare multiple variables of the same type by separating them with commas.
You can use the auto keyword to automatically set the type of the variable based on the value it's assigned to.
Remember, that C++ is case sensitive.
When naming your variables, remember that they need to start with a letter or underscore and cannot contain special symbols.


# DataTypes
  - int is used to hold whole numbers (integers) double stores decimals.
  - string is use for hold whole string in "" marke 
  - float is similar to double, but has less precision and requires less memory. You need to prefix the value with the letter 'f' to create floats.
  - char holds a single character.
  -  bool can have one of the following values: true or false. 


# Math
   + is addition
   - is subtraction
   / is division 
     . Dividing integers results in an integer.
   % finds the remainder of a division.

