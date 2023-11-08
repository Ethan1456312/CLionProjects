/* Ethan Stephenson
 * Exam Programming Question
 * 10-13-2023
 */
#include <iostream>
using namespace std;

int main() {
    //Declares and initializes the variables
  double score;
  int count = 0;
  double sum = 0;
  //Descprition of code
  cout << "In this code you enter in the test scores you want to average then input a negative number to get your output\n";
  do{

      cout << "Enter in a test score:";
      cin >> score;
      //Prevents a negative input to be counted into the sum
      if(score >= 0) {
          sum += score;
          count++;
      }
      cout << endl;
  }while(score>=0);
  cout << "The average score was " << sum/count; //Tells user the average
  return 0;
}
