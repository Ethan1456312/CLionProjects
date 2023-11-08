/* Ethan Stephenson and Colton Jaros
 * Programming Project 3
 * 09-26-2023
 */

#include <iostream>
using namespace std;
//Declares functions
void kitchen();
void greenhouse();
void medieval();
void computer();
void workshop();
int main() {
    //Declares option
    int option;
    //Outputs options to user
    cout << "Which Room Menu would you like to see?\n";
    cout << "1: Kitchen\n";
    cout << "2: Medieval Room\n";
    cout << "3: Computer Room\n";
    cout << "4: Greenhouse\n";
    cout << "5: Workshop \n";
    //Prompts user to input one of the options above
    cin >> option;
    //Depending on the option selected it will go to the function associated with that option
    switch (option){
        case 1:
            kitchen();
            break;
        case 2:
            medieval();
            break;
        case 3:
            computer();
            break;
        case 4:
            greenhouse();
            break;
        case 5:
            workshop();
            break;
        default:
            cout << "Invalid Option Selected";
    }
    return 0;
}

void kitchen(){
    //Delcares choice
    int choice;
    //Outputs the various choices to the user
    cout << "Room Menu:\n\n";
    cout << "1: Room Diagram with description\n";
    cout << "2: Display current score\n";
    cout << "3: Display a hint for this room\n";
    //Prompts user to input into variable choice
    cin >> choice;
    switch(choice){
        case 1:
            //Square
            //Uses for loops to create the top line of *
            for(int w = 0;w<10; w++) {
                cout << "* ";
            }
            //Creates a * then does spaces until at other side of square then puts another *
            for(int h = 0;h<6; h++){
                cout << "\n*";
                for(int i=0;i<17; i++){
                    cout << " ";
                }
                cout << "*";
            }
            //Creates the bottom line of *
            cout << endl;
            for(int b=0;b<10; b++){
                cout << "* ";
            }
            //Outputs the room description
            cout << "\nYou are standing in a heartwarming kitchen, a giant fridge to the right, a table with a cookbook on it, many drawers, an oven to your left, and a giant door with a cookie-shaped keyhole on it in front of you.";
            break;
        //Current Score
        case 2:
            cout << "DISPLAYING CURRENT SCORE";
            break;
        //Hint
        case 3:
            cout << "DISPLAYING A HINT FOR THE CURRENT ROOM";
            break;
        //Any other response
        default:
            cout << "Invalid Entry";
    }
}

void medieval(){
    //Delcares choice
    int choice;
    //Outputs the various choices to the user
    cout << "Room Menu:\n\n";
    cout << "1: Room Diagram with description\n";
    cout << "2: Display current score\n";
    cout << "3: Display a hint for this room\n";
    //Prompts user to input into variable choice
    cin >> choice;
    switch(choice){
        case 1:
            //Rectangle
            //Uses for loops to create the top line of *
            for(int w = 0;w<10; w++) {
                cout << "* ";
            }
            //Creates a * then does spaces until at other side of square then puts another *
            for(int h = 0;h<10; h++){
                cout << "\n*";
                for(int i=0;i<17; i++){
                    cout << " ";
                }
                cout << "*";
            }
            //Creates the bottom line of *
            cout << endl;
            for(int b=0;b<10; b++){
                cout << "* ";
            }
            //Outputs the description of the room
            cout << "\nYou are inside a castle room, there is a fireplace with a torch above it to your left a spice cabinet, and to your right are five paintings.";
            break;
        //Current Score
        case 2:
            cout << "DISPLAYING CURRENT SCORE";
            break;
        //Hint
        case 3:
            cout << "DISPLAYING A HINT FOR THE CURRENT ROOM";
            break;
        //Any other response
        default:
            cout << "Invalid Entry";
    }

}
void computer(){
    //Declaration
    int choice;
    char space = ' ';
    int x = 7;
    //Output
    cout << "Room Menu:\n\n";
    cout << "1: Room Diagram with description\n";
    cout << "2: Display current score\n";
    cout << "3: Display a hint for this room\n";
    //Input
    cin >> choice;

    switch(choice){
        case 1:
            //Octagon
            //Creates spaces to make the top of the shape in the middle
            for(int i = 0; i <= 3; i++){
                cout << " ";
            }
            //Creates the top line of octagon
            for(int i = 0; i <= 4; i++){
                cout << "* ";
            }
            cout << endl;
            //Creates two downward lines of *
            for(int i = 3; i > 0; i--){
                x = x + 2;
                cout << string(i, space);
                cout << "*";
                cout << string(x, space);
                cout<< "*\n";
            }
            //Creates the middle sides of vertical *
            for(int i = 0; i < 4; i++){
                cout << "*";
                for(int y = 0; y <= 14; y++){
                    cout << " ";
                }
                cout << "*\n";
            }
            x = 15;
            //Creates the angled lines to the bottom side
            for(int i = 1; i < 4; i++){
                x = x - 2;
                cout << string(i, space);
                cout << "*";
                cout << string(x, space);
                cout<< "*\n";
            }
            //Creates the spaces to make the bottom line in the center
            for(int i = 0; i <= 3; i++){
                cout << " ";
            }
            //Creates the bottom side
            for(int i = 0; i <= 4; i++){
                cout << "* ";
            }
            //Output of room description
            cout << "\nYou are in a room full of modern tech, a wall full of monitors on your left, and a safe to your right.";
            break;
        //Current Score
        case 2:
            cout << "DISPLAYING CURRENT SCORE";
            break;
        //Hint
        case 3:
            cout << "DISPLAYING A HINT FOR THE CURRENT ROOM";
            break;
        //Any other entry
        default:
            cout << "Invalid Entry";
    }
}

void greenhouse(){
    //Declaration and setting of variables
    char space = ' ';
    int x = -1;
    int choice;
    //Output
    cout << "Room Menu:\n\n";
    cout << "1: Room Diagram with description\n";
    cout << "2: Display current score\n";
    cout << "3: Display a hint for this room\n";
    //Input
    cin >> choice;
    switch(choice){
        case 1:
            //Irregular Pentagon
            //Creates the spaces before the point of the pentagon
            for(int i = 0; i <= 5; i++){
                cout << " ";
            }
            //Point of the pentagon
            cout << "*\n";
            //Crates the downward angled lines
            for(int i = 5; i > 0; i--){
                x = x +2;
                cout << string(i, space);
                cout << "*";
                cout << string(x, space);
                cout << "*\n";
            }
            //Creates the vertical sides of the pentagon
            for(int i = 0; i <= 3; i++){
                cout << "*";
                for(int y = 0; y <= 10; y++){
                    cout<<" ";
                }
                cout << "*\n";
            }
            //creates the bottom of the pentagon
            for(int i = 0; i <= 6; i++){
                cout << "* ";
            }
            //Outputs the description of room
            cout << "\nYou are in a greenhouse full of lush green plants, a giant arugula ahead of you blocking some kind of piping, wheat to your left, and a weird mechanical object to your right.";
            break;
        //Current Score
        case 2:
            cout << "DISPLAYING CURRENT SCORE";
            break;
        //Hint
        case 3:
            cout << "DISPLAYING A HINT FOR THE CURRENT ROOM";
            break;
        //Any other entry
        default:
            cout << "Invalid Entry";
    }

}
void workshop(){
    //Declaration and setting of variables
    int choice;
    char space = ' ';
    int x = 11;
    //Output
    cout << "Room Menu:\n\n";
    cout << "1: Room Diagram with description\n";
    cout << "2: Display current score\n";
    cout << "3: Display a hint for this room\n";
    //Input
    cin >> choice;
    switch(choice){
        case 1:
            //Trapezoid
            //Creates spaces to make the top of trapezoid in center
            for(int i = 0; i <= 7; i++){
                cout << " ";
            }
            //Creates top side
            for(int i = 0; i < 7; i++){
                cout << "* ";
            }
            cout << endl;
            //Creates the angled lines to the base of the trapezoid
            for(int i = 7; i > 0; i--){
                x = x + 2;
                cout << string(i, space);
                cout << "*";
                cout << string(x, space);
                cout << "*\n";
            }
            //Creates the base of the trapezoid
            for(int i = 0; i < 15; i++){
                cout << "* ";
            }
            //Outputs the description of room
            cout << "\nYou are in a workshop with sawdust that covers the floor.  Tools and a variety of machines scatter the room including a band saw.  In the middle of the room is a wooden pedestal with cut-out shapes sitting on top.";
            break;
        //Current score
        case 2:
            cout << "DISPLAYING CURRENT SCORE";
            break;
        //Hint
        case 3:
            cout << "DISPLAYING A HINT FOR THE CURRENT ROOM";
            break;
        //Any other entry
        default:
            cout << "Invalid Entry";
    }
}