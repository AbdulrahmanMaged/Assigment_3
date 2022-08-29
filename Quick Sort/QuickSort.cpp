//
// Created by abdul on 8/23/2022.
//

#include "QuickSort.h"

void QuickSort::quickSort(std::vector<int> &arr,int low,int high) {

    if(low < high){

        int splitter = split(arr, low, high);

        // recursively calling the function on left subarray
        quickSort(arr, low, (splitter - 1));

        // recursively calling the function on right subarray
        quickSort(arr, (splitter + 1), high);
    }
}

int QuickSort::split(std::vector<int> &arr, int low , int high) {
    int temp;
    int pivot = arr[high];
    int index= low;

    for (int k=low ; k<= high;k++) {
        if(arr[k]<pivot) {
            temp = arr[k];
            arr[k] = arr[index];
            arr[index] = temp;
            index++;
        }
    }
    temp = arr[high];
    arr[high] = arr[index];
    arr[index] = temp;
    return ( index);
}






