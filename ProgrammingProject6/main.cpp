#include <iostream>

using namespace std;

class test{
public:
    int x = 5;
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    test test;
    cout << test.x;
    return 0;

}
