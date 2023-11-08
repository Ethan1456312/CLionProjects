#include <iostream>
using namespace std;

int findLarge();
int findSmall();
int countEven();
bool findEven();

int main() {
    int option;
    cout << "Input which function you want to test. 1 = findLarge 2 = findSmall 3 = countEven 4 = findEven\n";
    cin >> option;
    switch (option) {
        case 1:
            int large;
            large = findLarge();
            cout << "Largest value entered is " << large;
            break;
        case 2:
            int small;
            small = findSmall();
            cout << "Smallest value entered is " << small;
           break;
        case 3:
            int count;
            count = countEven();
            cout << "The number of even integers entered was " << count << endl;
            break;
        case 4:
            bool found;
            found = findEven();
            if(found)
                cout << "An even number was detected\n";
            else
                cout << "No even numbers were entered\n";
            break;
        default:
            cout << "Invalid Entry\n";
            throw;
    }
    return 0;

}

int findLarge(){
    int num, large;
    cout << "Enter Number 1:\n";
    cin >> large;
    for(int i = 0;i<24; i++){
        cout << "Enter number " << i + 2 << ": \n";
        cin >> num;
        if (num > large)
            large = num;
    }
    return large;
}
int findSmall(){
    int num, small;
    cout << "Enter number 1: \n";
    cin >> small;
    for(int i = 1;i<24; i++){
        cout << "Enter number " << i + 1 << ": \n";
        cin >> num;
        if (num < small)
            small = num;
    }
    return small;
}

int countEven(){
    int num, count = 0, even = 0;
    for(int i = 0;i<25; i++){
        cout << "Enter number " << i + 1 << ": \n";
        cin >> num;
        if (num % 2 == 0)
            count = count + 1;
    }
    return count;
}

bool findEven(){
    bool found = false;
    int num = 0;
    cout << "Enter a negative value when you are done entering values to exit and get output\n";
    while(num >= 0){
        cout << "Input Number\n";
        cin >> num;
        if(num%2 == 0 && num >= 0)
            found = true;
    }
    return found;
}
