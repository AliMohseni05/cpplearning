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
}