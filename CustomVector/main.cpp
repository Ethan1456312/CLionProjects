#include <iostream>
#include "customVector.h"
using namespace std;
int main() {
    int count = 0;
    customVector test;
    for(int p = 0; p <= 1000; p++){
        test.pushBack(count);
        cout << test.ptr[count] << endl;
        count++;
    }


    return 0;

}
