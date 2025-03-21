# Arrays
Imagine working on a shopping app. Your program will need to store and work with multiple products and their prices. 

Instead of creating separate variables for each price, we can use an array to store all values!



Awesome! Here are some key points about arrays:

Arrays allow to store multiple values in a single variable.

When creating an array, we need to provide the type of the items and the size of the array, like this:

int numbers[15];
C++
Array items are accessed using their indexes, placed in square brackets. The first item has the index 0.

You can also create an array with values using the following syntax, initializing its values:

int numbers[] = {1, 2, 3, 4, 5};
C++
In the next lesson we will learn how to loop over the values of an array and make calculations. 


## array loop
  Now you know how to loop over arrays.

You can use a for loop to loop over an array.

For example, for an array called arr of 5 items:

for(int x=0;x<5; x++) {
   //current item is arr[x]
}
C++
Another way to loop over arrays is the for-each loop:

for(auto x: arr) {
  //current item is x
}

C++
The auto keyword automatically takes the type of the item's value.

We will learn about multidimensional arrays in the next lesson!


# Multidimensional Array
  int seats[2][3] = {{1, 2, 3}, {4, 5, 6}};
  Arrays with multiple dimensions are simply arrays that contain other arrays.

  The number of square brackets match the dimension of the array, for example [][] denotes a 2-dimensional array.

  To access the items of the array, specify the row index in the first square brackets, followed by the column index in the second.


# Pointers 
The address of a variable can be accessed using the & operator

    int num = 42;

    int *p = &num;

    // out memory 
    cout << p;
    // out put the valivu
    cout << *p;


int num = 42;

    int *p = &num;

    *p = 8;

    cout << num;

We have changed the value of a variable using the pointer. 

*p is basically an alias for num, meaning that they represent the same thing. When you change the value of *p, num is also changed, and vice-e-versa, changing num will also change the value of *p

Lesson Takeaways
Pointers might seem confusing at first, but don't worry, you'll get the hang of it! Here are the key takeaways:

A pointer is a variable that stores the memory address of another variable.
It is declared using a * and the type of the value it points to, for example: int *p;
The memory address of a variable can be accessed using the & operator, and assigned to a pointer, for example: int *p = &num;
The value of a memory address can be accessed using the * operator, for example *p is the value stored at the address that p points to.
A pointer can also be assigned to an array and be used to access the elements of the array, by simply incrementing the pointer.
We learned about pointers, because they are used for dynamic memory allocation, which we will cover in the next lesson!



