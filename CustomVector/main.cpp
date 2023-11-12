#include <iostream>
#include "customVector.h"
using namespace std;
int main() {
    int count = 0;
    customVector test;
    for(int p = 0; p <= 100; p++){
        test.pushBack(count);
        cout << test[count] << endl;
        count++;
    }
    cout << test[84];
    return 0;

}
