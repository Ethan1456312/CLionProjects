#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    //Generates the code for the randomizer
    srand((unsigned) time(NULL));
    //Declaration
    int test = (rand() % 10) + 1;
    int total;
    int playAgain;
    int order;
    int userPick;
    bool skipSecondSection = false;
    bool firstCycle = true;
    int randomNumber;

    //Introduction to game
    cout << "Welcome to the 100 Game!\n";
    cout << "In this game you will be competing with a robot to try to reach 100 first.\n";
    while(true){
        //Only runs at beginning of game to select who goes first.
        if(firstCycle) {
            //Asks for input of who goes first
            cout << "Would you like to go first or the robot? 1:Player 2:Robot\n";
            cin >> order;
            //If player goes first then 1st turn is taken
            if (order == 1) {
                cout << "Looks like you are picking first, what number do you want to pick 1-10?\n";
                cin >> total;
                if (total < 1 || total > 10) {
                    cout << "That is not 1-10, you lose your first turn\n";
                    total = 0;
                }
                //If robot goes first
            } else if (order == 2) {
                cout << "Okay, I will go first\n";
                //Incorrect option selected, defaults to robot
            } else {
                cout << "That is not 1 or 2.  I am going to go first then.\n";
            }
            //No longer does first cycle in loop
            firstCycle = false;
        }
        //Before having robot print out it's selection it sees if it can win the game by being between 90 and 100
        if(total >= 90){
            cout << "I pick " << 100 - total << endl;
            cout << "I win!!\n";
            //Asks user if they want to replay then gets input
            cout << "Do you want to play again? 1 = Yes | 2 = No\n";
            cin >> playAgain;
            //Resets values for next game
            if(playAgain == 1){
                total = 0;
                firstCycle = true;


                skipSecondSection = true;
            }
                //Leaves game
            else{
                break;
            }
        }
        //In order to prevent the 2nd portion of the loop from printing and asking for user input
        //I instead put it into an if and will skip it in order to replay the game
        if(!skipSecondSection) {
            //Generates random number
            randomNumber = (rand() % 10) + 1;
            total = randomNumber + total;
            //Outputs number and new total
            cout << "I pick " << randomNumber << endl;
            cout << "New total is " << total << endl;


            //Prompts user to input their number
            cout << "What number do you want to pick 1-10?" << endl;
            cin >> userPick;
            //Forces player to pick a number 1-10 or be stuck in while loop.
            while (userPick < 1 || userPick > 10) {
                cout << "Incorrect Input: Pick a number 1-10\n";
                cin >> userPick;
            }
            total = userPick + total;
            //If user is able to get to or above 100 they win.
            if (total >= 100) {
                cout << "You win nice job!!\n";
                cout << "Do you want to play again? 1 = Yes | 2 = No\n";
                cin >> playAgain;
                //Resets values for replay
                if (playAgain == 1)
                {
                    total = 0;
                    firstCycle = true;
                }
                    //Leaves game
                else {
                    break;
                }
            }
            cout << "New total is " << total << endl;
        }
        skipSecondSection = false;
    }
    return 0;
}



