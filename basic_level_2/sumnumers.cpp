#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int counter = 0;

    while (n >= 1){ 
        counter += n;
        n--;

    }
    cout << counter;

    
}