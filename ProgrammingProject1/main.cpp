/* Programming Project 1
* Ethan Stephenson
* 09-12-2023
*/
#include <iostream>
using namespace std; // Simplifies the code by not having to use std::cout or std::cin within the code

/* Purpose of code is output the amount of yearly revenue that a YouTube content creator
* could receive at varying amounts of two variables that the user can input: Earning in
 * cents per video view and number of views per day.
*/

int main(){
    //Declaration:
    double cents, views, yearlyRevenue; //Declares the variables used to calculate the yearly revenue, uses doubles since the values that are input and output can be non-integer
    //Input:
    cout << "PROJECT 1"<< endl;
    cout << "INPUT" << endl;
    cout << "  Estimated earning per video view in cents:";
    cin >> cents; //Sets the cents per video view variable to the user input for the yearlyRevenue calculation.
    cout << "  Estimated number of video views per day:" ;
    cin >> views; //Sets the video view per day variable to the user input for the yearlyRevenue calculation.
    //Processing:
    yearlyRevenue = ((cents*.01)*views)*365; //Yearly Revenue = ((Cents per video view converted to dollars by multiplying by .01) * Views per day) * Number of days in the year(365)
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2); //Rounds the decimal places to hundredths
    //Output:
    cout << "OUTPUT" << endl;
    cout << "   Estimated yearly revenue would be $" << yearlyRevenue; //Uses the calculated value of yearlyRevenue to display to the user in dollars the output of their input values
    return 0;
}

