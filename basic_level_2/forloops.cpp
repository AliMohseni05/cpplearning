#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=5;i++) {
        cout << i << endl;
    }

    for(int i=0;i<10;i++) {
        if(i==5) {
            break;
        }
        cout << i << endl;
    }

    for(int i=0;i<10;i++) {
        if(i==5) {
            continue;
        }
        cout << i << endl;
    }

    // Initializing n (value upto which you want to
      // print numbers
    int n = 5;
  
      // Initialization of loop variable
    int i;
    for (i = n; i >= 1; i--){
        cout << i << " ";
    }
    

    
}