#include <iostream>
//
// Created by Destr on 11/8/2023.
//
using namespace std;
#ifndef CUSTOMVECTOR_CUSTOMVECTOR_H
#define CUSTOMVECTOR_CUSTOMVECTOR_H
class customVector {
public:
    customVector();
    void pushBack(int);
    int* ptr;
private:
    void increaseSize();
    void intialization();
    int currentSize;
    int currentIndex;
    int* ptr2;

};
customVector::customVector() {
    currentSize = 16;
    currentIndex = 0;
    ptr = new int[currentSize];
}

void customVector::pushBack(int newValue) {
    if(currentSize < currentIndex){
        increaseSize();
    }
    ptr[currentIndex] = newValue;
    currentIndex++;

}

void customVector::increaseSize() {
    int newSize = currentSize * 2;
    ptr2 = new int[newSize];
    for(int i = 0; i < currentSize; i++)
        ptr2[i] = ptr[i];
    delete [] ptr;
    ptr = new int[newSize];
    for(int i = 0; i <= currentSize; i++)
        ptr[i] = ptr2[i];
    delete [] ptr2;
    currentSize = newSize;
}



#endif //CUSTOMVECTOR_CUSTOMVECTOR_H
