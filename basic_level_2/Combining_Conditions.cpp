#include <iostream>
using namespace std;

int main() {
    double temp = 37.5;
    if(temp >= 36 && temp <= 38) {
        // 36 <= temp <= 38
        // this way is use able 
        cout << "OK";
    }
    string city = "LA";
    int price = 78000;

    if((city == "NY" || city == "LA") && price < 100000) {
        cout << "Yes";
    }
}