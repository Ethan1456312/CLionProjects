#include <iostream>
using namespace std;
void generateGrid();
void intialGridPrint();
void playerMovementInput();
void newGridGeneration();
const int startY = 2, startX = 2, gridX = 20, gridY = 10, cordinateXMax = gridX -1, cordinateYMax = gridY-1;
int movementX = startX, movementY = startY;

string direction;
string grid[gridX][gridY];


int main(){
    cout << "In this game you move around a \"X\" around a grid, type L to leave\n";
    generateGrid();
    intialGridPrint();
    while(true) {
        playerMovementInput();
        if(direction == "L" || direction == "l")
            break;
        newGridGeneration();
    }
    return 0;
}

void generateGrid(){
    for(int y = 0; y< gridY; y++){
        for(int x = 0; x <  gridX; x++){
            grid[y][x] = " *";
        }
    }
}

void intialGridPrint(){
    for (int y = 0; y < gridY; y++) {
        for (int x = 0; x < gridX; x++) {
            if (x == startX && y == startY) {
                cout << " X";
            } else{
                cout << grid[y][x];
            }
        }
        cout << endl;
    }
    cout << endl << endl;
}

void playerMovementInput(){
    cout << "Which direction do you want to move? W = Up, A = Left, D = Right, S = Down\n";
    cin >> direction;
    if(direction == "L" || direction == "l")
        cout << "Thanks for playing!\n";
    else if (direction == "W" || direction == "w")
        movementY--;
    else if (direction == "S" || direction == "s")
        movementY++;
    else if (direction == "d" || direction == "D")
        movementX++;
    else if (direction == "a" || direction == "A")
        movementX--;
    else
        cout << "Invalid entry no movement\n";

    if(movementY > cordinateYMax)
        movementY--;
    else if(movementY < 0)
        movementY++;
    if(movementX > cordinateXMax)
        movementX--;
    else if(movementX < 0)
        movementX++;
}

void newGridGeneration() {
    for (int y = 0; y < gridY; y++) {
        for (int x = 0; x < gridX; x++) {
            if (x == movementX && y == movementY) {
                cout << " X";
            } else {
                cout << grid[y][x];
            }
        }
        cout << endl;
    }

}