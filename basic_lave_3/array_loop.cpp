#include <iostream>
using namespace std;

int main() {
    double prices[] = {5.99, 3.2, 9.99, 29.99};

    for(int x=0;x<4;x++) {
        cout << prices[x] << endl;
    }

    double total=0;
    for(int x=0;x<4;x++) {
        total += prices[x];
    }
    cout << total;

    //for-each loop.
    double prices[] = {5.99, 3.2, 9.99, 29.99};

    for(double x: prices) {
        cout << x << endl;
    }

    // for all 
        double prices[] = {5.99, 3.2, 9.99, 29.99};

    for(auto x: prices) {
        cout << x << endl;
    }

}