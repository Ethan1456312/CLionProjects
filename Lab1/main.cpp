/* Lab Assignment 1
 * Ethan Stephenson
 * 09-05-2023 */

#include <iostream>
//Uses cmath in this code to be able to use the pow and sqrt commands in calculations
#include <cmath>
//Simplifies code by not having to use std:: before the line output and input commands
using namespace std;

//Creates a double exponent function to calculate the input x value that the user enters later
double squared(double num){
    return pow(num,2);
}
//Creates a square root function to calculate the input of x value that user enters later
double squareRoot(double num){
    return sqrt(num);
}

int main() {
    //Declares the x variable for later calculations, set to a double so if the user
    //inputs an integer or a decimal it still functions
    double x;
    //Declares the string variable statements for the text
    string statement1 = "Hello";
    string statement2 = "Enter a number in decimal or integer form:";
    string statement3 = "Your number squared is: ";
    string statement4 = "The square root is: ";
    string statement5 = "Thanks for Using!";
    //"Hello"
    cout << statement1 << endl;
    //"Enter a Number"
    cout << statement2;
    //Prompts user to input a number into the console and sets it to the x variable
    cin >> x;

    //"Your number squared is "
    //Uses the squared() function to apply a power of 2 to the x value that was input
    //Then displays the output number
    cout << statement3 << squared(x)<< endl;
    //"The square root is "
    //Uses the squareRoot() function to apply a square root to the x value that was input
    //Then displays the output number
    cout << statement4 << squareRoot(x)<< endl;
    //"Thanks for Using!;
    cout << statement5 << endl;
    return 0;
}