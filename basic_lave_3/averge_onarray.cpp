#include <iostream>
using namespace std;

int main() {
    
    int ages[] = {19, 24, 36, 45, 56, 52, 21, 27, 24, 34, 29, 60, 40, 42, 45, 47, 22, 30, 34, 20, 18, 26, 51, 43, 47, 39, 22, 34, 56, 52, 21, 27, 24, 37, 19, 24, 36, 45, 44, 49, 23, 25, 19, 40, 29, 60, 40, 42, 45, 47, 61, 30, 19, 43, 47, 39, 41, 46, 29, 24, 21, 25, 28};
    
    int size = 63;
    
    int *p = ages;
    int tsum =0 ;
    
    
    for(int i=0;i<size;i++) {
        tsum = tsum + *(p+i);
        //cout << *p << endl;
        //p++;
    }
    int avreg;
    avreg = tsum/size;
    //cout << tsum << endl;
    cout << avreg << endl;
}