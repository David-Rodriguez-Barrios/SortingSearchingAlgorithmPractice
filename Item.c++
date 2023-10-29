#include <stdio.h>
#include "Item.h"
using namespace std;
template <class T>


Item<T>::Item(T value){
    this->value = value;
}
template <class T>
T Item<T>::getValue(){
    return value;
}
template <class T>
void Item<T>::setValue(T value){
    this->value = value;
}

