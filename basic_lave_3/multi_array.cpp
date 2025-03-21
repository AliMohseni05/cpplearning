
#include <iostream>
using namespace std;

int main() {
    int seats[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << seats[1][2];

    // for in array 
    int seats2[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };

    for(int i=0;i<2;i++) {
        // next father secnde for 
        for(int j=0;j<3;j++) {
            cout << seats2[i][j] << endl;
        }
    }




}