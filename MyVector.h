
#include <stdio.h>
#include "Item.h"
using namespace std;
template <class T>

class MyVector{
    private:
        Item<T> *arr;
        int size;
        int capacity;
    public:
        MyVector();
        MyVector(int capacity);
        void push_back(T value);
        void pop_back();
        int getSize();
        int getCapacity();
        T at(int index);
        void clear();
        MyVector(const MyVector<T>& v);
        MyVector<T>& operator=(const MyVector<T>& v);
        ~MyVector();

};