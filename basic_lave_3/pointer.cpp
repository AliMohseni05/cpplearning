#include <iostream>
using namespace std;

int main() {
    int num = 42;

    int *p = &num;

    
    // output memory 
    cout << p;

    // output value of the variable
    cout << *p;

    // array 
    int arr[] = {2, 4, 6, 8};

    int *p = arr;

    cout << *p << endl;
    cout << *(p+1) << endl;
    cout << *(p+2) << endl;
    

}