#include <iostream>
using namespace std;
int isUpper();
int main(){
    //Tells users how many upper case letter entered
    cout << isUpper();
    return 0;
}

int isUpper(){
    char input[25];  //Creates an array for the input
    int count = 0;  // Declares cout
    cout << "Please enter 25 letters into one line\n";
    cin >> input; // Asks user to enter 25 letters
    cout << input;
    for (int i(0); i < 25; i++) {
        if (isupper(input[i])) { // Uses the isupper function to output true or false depending on the char entered
            count++;
        }
    }
    return count;

}


//cout << upperCase[0] << endl;
//const char upperCase[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

/*for(int i = 0; i < 26; i++){
        for(int p = 0; p < 26; p++){
            if(upperCase[p] == input[i])
                count++;
        }
    }*/


/*
#include <iostream>
using namespace std;
int main(){
    //Declaration of variables
    double num;
    int count = 0;
    //Tells user what code does
    cout << "Input 15 values and this code will tell you how many are positive\n";
    //Loop for determining how many postive
    for(int i = 0; i < 15; i++){
        cout << "Number input " << i + 1 <<endl;
        //User input
        cin >> num;
        //Only if above 0 count the value entered as positive
        if(num > 0) {
            count++;
        }
    }
    //Tells user the output
    cout << "The count of positive numbers was " << count;
    return 0;
}
*/