#include <iostream>
#include <fstream>
#include <string>


using namespace std;


//Reads the provided csv file and sets the values to the string and int array for the
//height, name, and city name of the data
void arrayDeclaration(ifstream&, string[][2], int[]);
//Sorts the data via height from largest to smallest using bubble sorting
void arrayBubbleSorting(int[], string[][2]);
//Prompts user to enter a name of a city to search for the tallest person in
void citySearch(int [], string [][2]);


const int DATA_LENGTH = 100;


int main() {
    //Opens the file of data
    ifstream instream("people-data.csv");
    //Declares arrays
    string stringData[DATA_LENGTH + 1][2];
    int orderedNumbers[DATA_LENGTH + 1];
    //Exits code if file is not opened
    if (!instream.is_open())
        throw;


    arrayDeclaration(instream, stringData, orderedNumbers);
    arrayBubbleSorting(orderedNumbers, stringData);
    citySearch(orderedNumbers, stringData);


    instream.close();
    return 0;
}




void arrayDeclaration(ifstream& instream, string stringData[][2], int orderedNumbers[]){
    int row = 0;
    instream.ignore(10000, '\n');  //Used to disregard the first line of the csv file which is the header information
    //Goes line by line in the file to set each row in the file to the equivalent index in the array
    while (!instream.eof()) {
        getline(instream, stringData[row][0], ',');
        getline(instream, stringData[row][1], ',');
        instream >> orderedNumbers[row];
        row++;
    }
}


void arrayBubbleSorting(int orderedNumbers[], string stringData[][2]){
    int tempHeight;
    string tempCity, tempName;
    //Sorts via bubble sort to set the data from largest to smallest height
    for (int i = 0; i < DATA_LENGTH; i++) {
        for (int p = i + 1; p < DATA_LENGTH; p++) {
            if (orderedNumbers[i] < orderedNumbers[p]) {
                tempHeight = orderedNumbers[i];
                tempCity = stringData[i][1];
                tempName = stringData[i][0];


                orderedNumbers[i] = orderedNumbers[p];
                stringData[i][1] = stringData[p][1];
                stringData[i][0] = stringData[p][0];


                stringData[p][1] = tempCity;
                stringData[p][0] = tempName;
                orderedNumbers[p] = tempHeight;
            }
        }
    }
}


void citySearch(int orderedNumbers[], string stringData[][2]){
    int row = 0;
    string userCity;
    bool dataFound = false;
    char runAgain = 'y';
    while (runAgain == 'y' || runAgain == 'Y') {
        cout << "Input a city name from the options:\n";
        cout << "Hermantown, St_Paul, Hibbing, Duluth, Rochester, Minneapolis, Superior, Hinckley, Cloquet, Virginia\n";
        cin >> userCity;
        while (!dataFound && row < DATA_LENGTH) {
            //Since data is sorted from largest to smallest the first instance of a city will be the largest
            if (userCity == stringData[row][1]) {
                dataFound = true;
                cout << "The tallest person in " << userCity << " is " << stringData[row][0] << " at a height of "
                     << orderedNumbers[row] << "cm.\n";
            } else {
                row++;
            }
        }


        cout << "Would you like to enter in another city?(y/n)\n";
        cin >> runAgain;
        row = 0;
        dataFound = false;
    }
}


//Testing Code Sorting
/*
   for (int i = 0; i < 100; i++) {
       cout << orderedNumbers[i] << " ";
       cout << stringData[i][0] << " ";
       cout << stringData[i][1] << endl;
   }
   */



