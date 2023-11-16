#include <iostream>
#include "customVector.h"
using namespace std;
int main() {
    int count = 0;
    int size;
    customVector test;
    for(int p = 0; p <= 20; p++){
        test.pushBack(count);
        cout << test[count] << endl;
        count++;
    }
    size = sizeof(test)/sizeof(int);
    cout << size;

    return 0;

}
