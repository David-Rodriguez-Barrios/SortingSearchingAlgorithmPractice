#include <stdio.h>
using namespace std;
#include "bubbleSort.h"



template <typename T>
void bubbleSort<T>::Sort(T arr[]) {
    n= sizeof(arr)/sizeof(arr[0]);
    // O(n^2) time complexity since it has to go through it n-1 times and then n-2 times and so on so make sure that the array is in order 
    for(int i = 0; i < n-1; i++) { // iterate through the list n-1 times O(n^2)
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) { // swap if the element is greater than the next element
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
}

// Specialiation for char type might have to change to something more useful later like a String or a special comparator
template<>
void bubbleSort<char>::Sort(char arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n-1; i++) { // iterate through the list n-1 times O(n^2)
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) { // swap if the element is greater than the next element
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }
}