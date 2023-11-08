/* Lab Assignment 1
 * Ethan Stephenson
 * 09-05-2023 */

#include <iostream>
//Simplifies code by not having to use std:: before the line output and input commands
using namespace std;
int main(){
    string spell, student;
    int successfulAttempts, attempts;
    double successPrecentage;

    cout << "Name of student: ";
    cin >> student;
    cout << "Name of spell: ";
    cin >> spell;
    cout << "Number of attempts: " ;
    cin >> attempts;
    cout << "Number of Successful Attempts";
    cin >> successfulAttempts;
    cout << student << " has a " << (successfulAttempts/attempts)*100 << "% success rate on " << spell << " spell";
    return 0;
}
