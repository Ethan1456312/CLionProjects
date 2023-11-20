#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Struct to represent the monster in the fight
struct Monster {
    string name;
    int health;
};

// Struct to represent the monster in the fight
struct Player {
    string name;
    int health;
};

// Functions
void instructions();
bool validatePlayerNum(int playerNum, int total);
int genComputerNum(int total);
void game();
void trollFight(); // Prototype for the trollFight function

// Main Function
int main() {
    int play = 1;

    srand((unsigned)time(NULL));

    // Explaining the rules of the game
    instructions();

    // Starting the game
    while (play == 1) {
        game();

        // Starting a new game
        cout << "Do you want to play again? (1 for yes 2 for no): ";
        cin >> play;
    }

    return 0;
}

// Fight Code
void trollFight() {
    // Define the monster
    Monster monster;
    monster.name = "Troll";
    monster.health = 50;

    Player player;
    player.name = "Tom";
    player.health = 20;

    cout << "Do you want to fight the monster? (y/n)" << endl;
    char answer;
    cin >> answer;
    if (answer == 'y') {
        int turn = 1; // Player goes first

        // Start the fight with the monster
        while (monster.health > 0 && player.health > 0) {
            cout << "You attack the " << monster.name << " with your sword." << endl;
            int playerDamage = rand() % 20 + 1; // Generate random damage between 1 and 20 for player
            monster.health -= playerDamage;
            cout << "You deal " << playerDamage << " damage. The " << monster.name << " has " << monster.health
                 << " health left." << endl;

            if (monster.health <= 0) {
                cout << "You defeated the " << monster.name << " and won the game!" << endl;
                return; // Exit the function after winning the fight
            }

            int computerDamage = rand() % 10 + 1; // Generate random damage between 1 and 10 for computer
            player.health -= computerDamage; // Reduce player's health
            cout << "The " << monster.name << " attacks you and deals " << computerDamage << " damage." << endl;
            cout << player.name << " has " << player.health << " health left." << endl; // Update player's health

            if (player.health <= 0) {
                cout << "You are dead... Game Over!" << endl;
                return; // Exit the function if the player's health is zero or less
            }

            cout << "Continue the fight? (y/n): "; // Ask if the user wants to continue the fight
            cin >> answer;
            if (answer == 'n') {
                cout << "You chose to end the fight." << endl;
                return; // Exit the function if the user chooses not to continue
            }
        }
    }
}


// Instruction Function
void instructions() {
    cout << "Let's play a game of 100!\n"
            "In a game of 100, we start with a total of 0\n"
            "and we take turns adding from 1-10 to that "
            "total. Whoever is able to add a number to\n"
            "the total to get 100 wins. Ready?\n\n";
}

// Validate Player Number
bool validatePlayerNum(int playerNum, int total) {
    return ((playerNum >= 1) && (playerNum <= 10) && (total + playerNum <= 100));
}

// Generate Computer Number
int genComputerNum(int total) {
    if (total >= 90) {
        return 100 - total;
    } else {
        return rand() % 10 + 1;
    }
}

// Playing the Game
void game() {
    int turn = 0;
    int playerNum;
    int computerNum;
    int total = 0;

    // Ask who goes first
    cout << "Do you want to go first or should I (1 = you, 2 = me (computer)): ";
    cin >> turn;

    while (total < 100) {
        // Player's turn
        if (turn == 1) {
            cout << "Number you want to add (1-10): ";
            cin >> playerNum;

            // Check to make sure it was a legal play
            if (validatePlayerNum(playerNum, total)) {
                total = total + playerNum;
                cout << "You add " << playerNum << ", total is now " << total << "\n";
                turn = 2;

                if (total > 25) {
                    trollFight(); // Call the trollFight function when total is greater than 25
                }
            } else {
                cout << "Please enter a number between 1 and 10 that won't make the total over 100.\n";
            }
        } else if (turn == 2) { // Computer's turn
            computerNum = genComputerNum(total);
            total = total + computerNum;
            cout << "I add " << computerNum << ", total is now " << total << endl;
            turn = 1;
        } else { // If the bot tries to win if total is above 90
            computerNum = 100 - total;
            total = total + computerNum;
            cout << "I add " << computerNum << ", total is now " << total << endl;
            turn = 1;
        }
    }

    if (turn == 2) { // if the player wins
        cout << "You win!\n";
    } else if (turn == 1) { // if the computer wins
        cout << "Bummer, You lose!\n";
    }
}