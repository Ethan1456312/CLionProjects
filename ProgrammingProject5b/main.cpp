/* Ethan Stephenson
 * Programming Project 5b
 * 11-07-2023
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


//Reads the csv file and sets the country, gdp, and internetUserrate to incode array's and a vector
void arrayDeclaration(ifstream&, string[], double[], vector<double>&);
//Prompts user to enter a name of a country to search for the gdp and internet rate in that country
void countrySearch(const string[], const double[], vector<double>, int);

int lineCount(ifstream&);
int main() {
    //Opens the file of data
    ifstream instream("internetUserRateinCountries.csv");
    if (!instream.is_open())
        throw;
    instream.ignore(10000, '\n');  //Used to disregard the first line of the csv file which is the header information
    //Counts the liens in the code for the dynamic array since I don't specify the length
    int dataLength = lineCount(instream);
    //Since the info can only be read once we need to close then reopen the file to set the values to the array and vector

    instream.close();
    instream.open("internetUserRateinCountries.csv");
    if (!instream.is_open())
        throw;
    //Declares arrays


    double* gdp = new double[dataLength];
    vector<double> internetRate;
    string* country = new string[dataLength];
    //Exits code if file is not opened


    arrayDeclaration(instream, country, gdp, internetRate);
    countrySearch(country, gdp, internetRate, dataLength);


    delete [] gdp;
    delete [] country;
    instream.close();
    return 0;
}


int lineCount(ifstream& instream) {
    int count = 0;
    string temp;
    while (!instream.eof()) {
        getline(instream, temp);
        count++;
    }
    return count;
}


void arrayDeclaration(ifstream& instream, string country[], double gdp[], vector<double>& internetRate){
    int row = 0;
    string temp;
    instream.ignore(10000, '\n');  //Used to disregard the first line of the csv file which is the header information
    //Goes line by line in the file to set each row in the file to the equivalent index in the array
    while (!instream.eof()) {
        getline(instream, country[row], ',');
        getline(instream, temp, ',');
        gdp[row] = stod(temp);
        getline(instream, temp, '\n');
        internetRate.push_back(stod(temp));
        row++;
    }
}


void countrySearch(const string country[], const double gdp[], const vector<double> internetRate, int dataLength){
    int row = 0;
    string userCountry;
    bool dataFound = false;
    char runAgain = 'y';
    while (runAgain == 'y' || runAgain == 'Y') {


        cout << "Input a country name with the capitalization of first letters:\n";


        getline(cin, userCountry, '\n');
        //cin.ignore(100000,'\n');
        while (!dataFound && row < dataLength) {
           //Since there is only one instance of each country it just has to search for the correct row then output that data
            if (userCountry == country[row]) {
                dataFound = true;
                cout << "In " << country[row] << " the GDP per capita is " << gdp[row] << " and the internet user rate is " << internetRate[row] << "%." << endl;
            } else {
                row++;
            }
        }
        if(!dataFound)
            cout<<"No country by that name found" << endl;


        cout << "Would you like to enter in another country?(y/n)\n";
        cin >> runAgain;
        row = 0;
        dataFound = false;
        cin.ignore(1);
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



