/* Ethan Stephenson
 * Exam Programming Question
 * 10-13-2023
 */
#include <iostream>

using namespace std;

int main(){
    //Declares Variables
    double num;
    int count = 0;
    cout << "In those code you input 15 numbers and the code will tell you how many were positive\n";
    //Loops 15 times
    for(int i = 0; i < 20; i++){
        cout << "Input Number " << i + 1 << endl;
        cin >> num;   //Prompts user to input their num
        if(num > 0){ //Only if the value is greater than 0 add to count
            count++;
        }
    }
    //Tells user how many positive values they entered
    cout << "The number of positive numbers was " << count;
    return 0;
}