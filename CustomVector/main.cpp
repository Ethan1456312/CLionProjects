#include <iostream>
#include "customVector.h"
using namespace std;
int main() {
    int count = 0;
    customVector test;
    for(int p = 0; p <= 20; p++){
        test.pushBack(count*2);
        cout << test[count] << endl;
        count++;
    }
    test.shrinkToSize();
    cout << sizeof(test)/sizeof(int);
    return 0;

}
