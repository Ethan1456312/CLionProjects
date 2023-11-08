/* Ethan Stephenson
 * MadLib Assignment
 * 10-20-2023
 */
#include <iostream>

using namespace std;

//Declares Functions
string askText(string prompt);
void tellStory(string[15]);

int main()
{
    //Creates the array that will store the user entered words
    string input[15];
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";
    //Prompts user to enter in their various nouns, verbs, and other words
    input[0]= askText("Please enter a plural noun:");
    input[1] = askText("Please enter a verb ending in \"ing\":");
    input[2] = askText("Please enter a noun:");
    input[3] = askText("Please enter a noun:");
    input[4] = askText("Please enter a plural noun:");
    input[5] = askText("Please enter a part of the body:");
    input[6] = askText("Please enter a noun:");
    input[7] = askText("Please enter a verb ending in \"ing\":");
    input[8] = askText("Please enter a part of the body(Plural):");
    input[9] = askText("Please enter a verb ending in \"ing\":");
    input[10]= askText("Please enter a noun:");
    input[11] = askText("Please enter a noun:");
    input[12] = askText("Please enter a part of the body:");
    input[13] = askText("Please enter a adverb:");
    input[14] = askText("Please enter a part of the body(Plural):");
    //Runs the function that tells the story for the user
    tellStory(input);
    return 0;
}

//ask text function
string askText(string prompt)
{
    string text;
    cout << prompt << endl;
    cin >> text;
    return text;
}

//tell story function
void tellStory(string input[16])
{
    cout << "\nHere's your story:\n";
    cout << "I was home alone and scared out of my ";
    cout << input[0];
    cout << ".\nI could hear the wind ";
    cout << input[1];
    cout << ", and off in the distance a/an ";
    cout << input[2];
    cout << " was howling.\n";
    cout << "I crossed the room, locked the ";
    cout << input[3];
    cout << ", and climbed into bed, pulling the ";
    cout << input[4];
    cout << " over my ";
    cout << input[5];
    cout <<".\nThen it happened.\nI could hear a/an ";
    cout << input[6];
    cout <<" ";
    cout << input[7];
    cout << " up the stairs.\nMy ";
    cout << input[8];
    cout << " started to chatter and my knees began ";
    cout << input[9];
    cout << ".\nThe ";
    cout << input[10];
    cout << " was thrust open and there was a huge ";
    cout << input[11];
    cout << " with hair all over his ";
    cout << input[12];
    cout << ".\nIt was my father.\n\"Hi, we're home,\" he said ";
    cout << input[13];
    cout << ".\n\"Hope you weren't afraid of staying home alone.\" \"No,\" I said lying through my ";
    cout << input[14];
    cout << ".";
}


/*
Ethan Stephenson
 * MadLib Assignment
 * 10-18-2023

#include <iostream>

using namespace std;


string askText(string prompt);
void tellStory(string pluralNoun1, string verbIng1, string noun1, string noun2,
               string puluralNoun2, string bodyPart, string noun3, string verbIng2, string bodyPart2, string verbIng3, string noun4, string noun5, string bodyPart3, string adverb, string bodyPart4);

int main()
{

    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";
    string pluralNoun1 = askText("Please enter a plural noun:");
    string verbIng1 = askText("Please enter a verb ending in \"ing\":");
    string noun1 = askText("Please enter a noun:");
    string noun2 = askText("Please enter a noun:");
    string pluralNoun2 = askText("Please enter a plural noun:");
    string bodyPart = askText("Please enter a part of the body:");
    string noun3 = askText("Please enter a noun:");
    string verbIng2 = askText("Please enter a verb ending in \"ing\":");
    string bodyPart2 = askText("Please enter a part of the body(Plural):");
    string verbIng3 = askText("Please enter a verb ending in \"ing\":");
    string noun4 = askText("Please enter a noun:");
    string noun5 = askText("Please enter a noun:");
    string bodyPart3 = askText("Please enter a part of the body:");
    string adverb = askText("Please enter a adverb:");
    string bodyPart4 = askText("Please enter a part of the body(Plural):");
    tellStory(pluralNoun1, verbIng1,  noun1,  noun2, pluralNoun2,  bodyPart,  noun3,  verbIng2,  bodyPart2,  verbIng3,  noun4,  noun5,  bodyPart3,  adverb,  bodyPart4);
    return 0;
}

//ask text function
string askText(string prompt)
{
    string text;
    cout << prompt << endl;
    cin >> text;
    return text;
}

//tell story function
void tellStory(string pluralNoun1, string verbIng1, string noun1, string noun2,
               string puluralNoun2, string bodyPart, string noun3, string verbIng2, string bodyPart2, string verbIng3, string noun4, string noun5, string bodyPart3, string adverb, string bodyPart4)
{
    cout << "\nHere's your story:\n";
    cout << "I was home alone and scared out of my ";
    cout << pluralNoun1;
    cout << ".\nI could hear the wind ";
    cout << verbIng1;
    cout << ", and off in the distance a/an ";
    cout << noun1;
    cout << " was howling.\n";
    cout << "I crossed the room, locked the ";
    cout << noun2;
    cout << ", and climbed into bed, pulling the ";
    cout << puluralNoun2;
    cout << " over my ";
    cout << bodyPart;
    cout <<".\nThen it happened.\nI could hear a/an ";
    cout << noun3;
    cout <<" ";
    cout << verbIng2;
    cout << " up the stairs.\nMy ";
    cout << bodyPart2;
    cout << " started to chatter and my knees began ";
    cout << verbIng3;
    cout << ".\nThe ";
    cout << noun4;
    cout << " was thrust open and there was a huge ";
    cout << noun5;
    cout << " with hair all over his ";
    cout << bodyPart3;
    cout << ".\nIt was my father.\n\"Hi, we're home,\" he said ";
    cout << adverb;
    cout << ".\n\"Hope you weren't afraid of staying home alone.\"\"No,\" I said lying through my ";
    cout << bodyPart4;
    cout << ".";
}
*/