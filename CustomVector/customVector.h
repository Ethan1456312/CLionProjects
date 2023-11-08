#include <iostream>
//
// Created by Destr on 11/8/2023.
//
using namespace std;
#ifndef CUSTOMVECTOR_CUSTOMVECTOR_H
#define CUSTOMVECTOR_CUSTOMVECTOR_H
class customVector {
public:
    customVector(){
        intialization();
    }
    void pushBack(int);
    int* ptr;
private:
    void increaseSize();
    void intialization();
    int currentSize;
    int currentIndex;
    int* ptr2;

};
void customVector::intialization(){
    currentSize = 16;
    currentIndex = 0;
    ptr = new int[currentSize];
}
void customVector::pushBack(int newValue) {
    ptr[currentIndex] = newValue;
    currentIndex++;
    if(currentSize-1 < currentIndex){

        increaseSize();
    }
}

void customVector::increaseSize() {

    int newSize = currentSize * 2;
    ptr2 = new int[newSize];
    ptr2 = ptr;
    delete [] ptr;
    ptr = ptr2;
    ptr = new int[newSize];
    cout << ptr[3];
    delete [] ptr2;

    currentSize = newSize;
}



#endif //CUSTOMVECTOR_CUSTOMVECTOR_H
