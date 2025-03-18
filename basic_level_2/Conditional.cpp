#include <iostream>
using namespace std;

int main() {
    int points = 89;
    if(points >= 70) {
        cout << "Success!";
    }


    int grade = 52;
    if(grade >= 75) {
        cout << "Passed!";
    }
    else {
        // else did get () and went with ->{}
        cout << "Failed";
    }

    

    // neste 
    int age = 24;
    if(age >= 65) {
        cout << "Senior";
    }
    else {
        if(age >= 18) {
            cout << "Adult";
        }
        else {
            cout << "Child";
        }
    }

    // esle if 

    int age = 24;
    if(age >= 65) {
        cout << "Senior";
    }
    else if(age >= 18) {
            cout << "Adult";
    }
    else {
        // else did get () and went with ->{}
        cout << "Child";
    }

}