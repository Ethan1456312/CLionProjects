#include <iostream>
using namespace std;
int findLarge();
int main() {
    int large = findLarge();
    cout << "Largest Number is: "<< large;

    return 0;
}

int findLarge(){
    int num;
    int large = 0;
    for(int i = 0; i < 25; i++){
        cout << "\nEnter value for number: " << i+1 << endl;
        cin >> num;
        if(num > large) {
            large = num;
        }
    }
    return large;

}
