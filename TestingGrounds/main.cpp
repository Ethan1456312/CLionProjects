#include<iostream>

using namespace std;
void fun(const int mydata[]){
    cout << mydata[0];
}
int* test(){

}
int main(){
    int year[100];
    int i, count = 0;
    for (i=1900; i<2000; i++){
        year[i-1900] = i;
        cout << year[i-1900] << endl;
    }
    int mydata[1];
    fun(mydata);
    cout << mydata;

    return 0;
}