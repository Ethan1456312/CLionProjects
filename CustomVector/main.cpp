#include <iostream>
#include "customVector.h"
using namespace std;
int main() {
    int count = 0;
    customVector test;
    for(int p = 0; p <= 200; p++){
        test.pushBack(count);
        cout << test[count] << endl;
        count++;
    }
    return 0;

}
