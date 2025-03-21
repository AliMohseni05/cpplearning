

# input in c++  
  The cin &gt;&gt; command is similar to cout &lt;&lt;. It prompts the user for input and stores the entered value in the given variable.
  It is important to use the correct type for the variable that will store the input.


# Conditional statements
  //The if statement allows you to run a specified code if a given condition is true.

  if(condition) {
  //code to run
}

  The following comparison operators may be used to form the condition:

  &lt; less than

  &gt; greater than

  != not equal to

  == equal to

  <b>&lt;=</b> less than or equal to

  &gt;= greater than or equal to
  

You can check for a condition using the if statement.
In case the condition is false, the code in an else statement can be executed.
Here is a generic structure of&nbsp;if-else statements:

if(condition) {
  //some code
} 
else if(condition) {
//some other code
} 
else {
  //some other code
}

# switch
  instade of use if and else if choseing material 
  if it was 1 do this and it was 2 do that 
  in switch must use break after end of every case 
  If you forget to add the break after each case, the program will continue to execute the code in the next case statements, even if their value does not match the variable's value.
  
  ## default
    default works like a eles when non of case was not true it starts working and it doesn't need break

  #include <iostream>
using namespace std;

int main() {
    int choice = 2;
    switch(choice) {
        case 1:
           cout << "Coffee";
           break;
        case 2:
           cout << "Tea";
           break;
        case 3:
           cout << "Water";
           break;
        default:
          cout << "Invalid Choice";
          // it should have out put 
    }
}


The switch statement is a handy way to check for multiple values.

Remember, that each case is followed by a value and a colon.
Each case needs a break statement, or the code of the other cases will continue to get executed. 
The default case can be used to run code if none of the cases match. 


# Combining Conditions
 && -> and  
 || -> or 
 ! -> not
 The AND operator && combines two conditions and checks if both of them are true.
 The OR operator || check if any of the conditions are true.
 The NOT operator ! reverses the condition.
 You can combine and chain conditions using parentheses and logical operators.



# while Loop
  The while loop takes a condition and repeats its statements while the condition is true.

  the while loop:

  The code in the while loop runs as long as the condition is true.
  The ++ and -- operators are used to increase and decrease the value of a variable by one.
  C++ provides shorthand operators to perform mathematical operations on a variable, for example num=num * 5 can be written as num * = 5.
  - The do-while loop is similar to a while loop, but it is guaranteed to run at least once. 
  

  int a = 2;
  int b = 5;
  b -= a;
  b *= 2;
  b--; // b= b - 1
  cout << b;
  // 5


# for Loops 
  The for loop has 3 components in the parentheses:

The first part runs once when we enter the loop and initializes the variable.
The second part is the condition of the loop.
The third part runs every time the loop runs.

The for loop has the following syntax:
for(init; condition; increment) {
   //code
}
C++
 The <b>break</b> statement can be used to stop a loop.
 The <b>continue</b> statement can be used to skip the current iteration of the loop and jump to the next one
  
