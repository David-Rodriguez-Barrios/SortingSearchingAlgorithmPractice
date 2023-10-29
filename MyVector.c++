#include <stdio.h>
#include "MyVector.h"
using namespace std;


// Default constructor
template <class T>
MyVector<T>::MyVector(){
    arr = new Item<T>[10];
    size = 0;
}

// Copy constructor
template <class T>
MyVector<T>::MyVector(const MyVector<T>& v){
    delete [] arr;
    arr = new Item<T>[v.capacity];
    size = v.size;
    capacity = v.capacity;
    for(int i = 0; i < size; i++){
        arr[i] = v.arr[i];
    }
}

// Destructor
template <class T>
MyVector<T>::~MyVector(){
    delete [] arr;
}

// Assignment operator
template <class T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& v){
    delete [] arr;
    arr = new Item<T>[v.capacity];
    size = v.size;
    capacity = v.capacity;
    for(int i = 0; i < size; i++){
        arr[i] = v.arr[i];
    }
    return *this;
}



template <class T>
MyVector<T>::MyVector(int capacity){
    arr = new Item<T>[capacity];
    size = 0;
}

template <class T>
void MyVector<T>::push_back(T value){
    if(size == capacity){
        Item<T> *temp = new Item<T>[capacity*2];
        for(int i = 0; i < size; i++){
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity *= 2;
    }
    arr[size] = value;
    size++;
}

template <class T>
void MyVector<T>::pop_back(){
    if(size > 0){
        size--;
    }
    Item<T> *temp = new Item<T>[capacity];
    for(int i = 0; i < size; i++){
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
}
template <class T>
int MyVector<T>::getSize(){
    return size;
}
template <class T>
int MyVector<T>::getCapacity(){
    return capacity;
}
template <class T>
T MyVector<T>::at(int index){
    return arr[index].getValue();
}
template <class T>
void MyVector<T>::clear(){
    size = 0;
    Item<T> *temp = new Item<T>[capacity];
    delete[] arr;
    arr = temp;
}


