#include <iostream>
#include <cmath>
using namespace std;
double LF_M;
double LB_M;
double RF_M ;
double RB_M;
int theta = 135;
double r = .7071;
double multiplyerFinder(int, int);
int quadrantFinder(double);
void motorMath(double, double, double);
double polarMathX(int, double);
double polarMathY(int, double);
int main(){
    cout << multiplyerFinder(quadrantFinder(theta), theta) << endl;
    motorMath(polarMathY(theta, r), polarMathX(theta, r), 0);
    cout << "LF " << LF_M << endl;
    cout << "LB " << LB_M << endl;
    cout << "RF " << RF_M << endl;
    cout << "RB " << RB_M << endl;
    return 0;
}

double multiplyerFinder(int quadrantAngle, int theta){
    return abs((quadrantAngle-theta)/22.5)+2;
}
double polarMathX(int theta, double r){
    return r* cos(theta*(M_PI/180));
}
double polarMathY(int theta, double r){
    return r* sin(theta*(M_PI/180));
}


int quadrantFinder(double theta){
    int quadrantAngle = 45;
    if(theta >= 0 && theta <= 90)
        return quadrantAngle = 45;
    else if(theta <90 && theta <= 180)
        return quadrantAngle = 135;
    else if(theta > 180 && theta <= 270)
        return quadrantAngle = 225;
    else
        return quadrantAngle = 315;
}

void motorMath(double y, double x, double z){
   LF_M = y+(x+z);
   LB_M = y-(x+z);
   RF_M = y-(x-z);
   RB_M = y+(x-z);
}
