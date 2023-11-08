/* Ethan Stephenson
* Programming Project 2
* 09-19-2023 */
#include <iostream>
using namespace std;
//Declaration of Variables and setting of constant variables
const double lessThanTwentyPrice = 0.75; const double betweenTwentyAndNinetyNinePrice = .5; const double hundredOrMorePrice = 0.4;
const double colorPrice = .25; const double mailPrice = .4; const double eMailInvitePrice = .1; const int eMailFee = 20;
double invites, totalInviteCost, colorCost, electronicMailCost, mailCost;
bool eMailConfirmation; bool colorConfirmation; bool mailConfirmation; char yOrN;
//Declares the function used to determine what extras the user wants
bool yesOrNoUserInput(string);
//Purpose of code is to display the total cost of invites that the user sets depending on number of invites and chosen extras
int main() {
    //Input of variables used in calculations
    cout << "How many invites would you like?\n"; cin >> invites;
    colorConfirmation = yesOrNoUserInput("Would you like for the invites to be printed in color?(Y/N)\n");
    mailConfirmation = yesOrNoUserInput("Would you like for the invites to be mailed?(Y/N)\n");
    eMailConfirmation = yesOrNoUserInput("Would you like to receive a electronic version of your invite?(Y/N)\n");
    //Output and calculation of bill
    cout << "Party Invitations, Inc Bill:\n";
    if(invites < 20){ totalInviteCost =  invites * lessThanTwentyPrice;}
    else if(invites >= 20 && invites <= 99){totalInviteCost = invites * betweenTwentyAndNinetyNinePrice;}
    else{totalInviteCost = invites * hundredOrMorePrice;}
    cout << "Amount of invites ordered: "<< invites;
    cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(2);//Limits the amount of decimal places to 2 for all the money outputs
    cout << "\nBase price of invites: $" << totalInviteCost;
    //Only calculates the extra values if the user wants them, and sets them to a variable later used in total cost
    if(colorConfirmation){
        colorCost = invites * colorPrice;
        cout << "\nColored invites cost: $" << colorCost;}
    if(mailConfirmation){
        mailCost = invites * mailPrice;
        cout << "\nMailing of invites cost: $" << mailCost;}
    if(eMailConfirmation){
        electronicMailCost = (invites * eMailInvitePrice) + eMailFee;
        cout << "\nElectronic mailing of invites cost: $" << electronicMailCost;}
    if(!eMailConfirmation && !mailConfirmation && !colorConfirmation){
        cout << "\nNo additional extras";}
    //Outputs total value
    cout << "\nTotal cost of invites: $" << totalInviteCost+electronicMailCost+mailCost+colorCost;
    return 0;}
//Since we do an input of "y" or "n" three times I made it into a function to simplify the code.
bool yesOrNoUserInput(string text){
    bool methodConfirmed;
    cout << text; cin >> yOrN;
    if(yOrN == 'n' || yOrN == 'N'){  methodConfirmed = false;}
    else{methodConfirmed = true;}
    return methodConfirmed; }
