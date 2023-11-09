
class customVector {
public:
    customVector();
    customVector(int);
    void pushBack(int);
    void shrinkToSize();
    int& operator[](int);
private:
    void increaseSize();
    int currentSize = 16;
    int currentIndex = 0;
    int* ptr2;
    int* ptr;

};
customVector::customVector()
 {
    ptr = new int[currentSize];
}

int& customVector::operator[](int temp) {
    return ptr[temp];
}

void customVector::pushBack(int newValue) {
    try {
        if (currentSize < currentIndex) {
            increaseSize();
        }
        ptr[currentIndex] = newValue;
        currentIndex++;
    }
    catch(std::bad_alloc){
    }

}

void customVector::increaseSize() {
    int newSize = currentSize * 2;
    ptr2 = new int[newSize];
    ptr2 = ptr;
    delete [] ptr;
    ptr = new int[newSize];
    ptr = ptr2;
    delete [] ptr2;
    currentSize = newSize;
}

void customVector::shrinkToSize(){

}