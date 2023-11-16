
class customVector {
public:
    customVector();
    void pushBack(int);
    int& operator[](int);
    int* operator=(int);
private:
    void increaseSize();
    void arrayCopy();
    size_t currentSize = 16;
    size_t currentIndex = 0;
    size_t newSize = 0;
    int* ptr2{};
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
    newSize = currentSize * 2;
    arrayCopy();
    currentSize = newSize;
}


void customVector::arrayCopy() {
    ptr2 = new int[newSize];
    memcpy(ptr2, ptr, sizeof(int));
    delete [] ptr;
    ptr = new int[newSize];
    memcpy(ptr, ptr2, sizeof(int));
    delete [] ptr2;
}

