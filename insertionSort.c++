#include <stdio.h>
using namespace std;
#include "insertionSort.h"

template<typename T>

void insertionSort<T>::Sort(T arr[]) {
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
template<typename T>
void Sort(char arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n-1; i++) { // iterate through the list n-1 times O(n^2)
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) { // swap if the element is greater than the next element
                swap<T>(&arr[j], &arr[j+1]);
            }
        }
    }
}

    //     // TODO Auto-generated method stub
    //     // Insertion sort works by iterating through the array until u find the first value where the new desired insertion value reaches a value that is greater than itself, this has to asssume the
    //     // the array is already in order
    //     // for(int i=0; i<src.size(); i++){
            
    //     // }
    //     for(int i=1; i<src.size(); i++){ // i is the index of the item we are trying to insert
    //         Item<E> temp = src.get(i); // temp is the item we are trying to insert
    //         int j = i-1; // j is the index of the item we are comparing to which is the one right before it 
    //         while(j>=0 && src.get(j).getItem().compareTo(temp.getItem())>=0){ // if the item before it we are comparing it to is greater than the current item then we will swap them around
    //             src.set(j+1, src.get(j)); // the one in front is then set to the one behind it
    //             j--;
    //         }
    //         src.set(j+1, temp);
    //     }
    // }