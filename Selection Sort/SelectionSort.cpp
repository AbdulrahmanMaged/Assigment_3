//
// Created by abdul on 8/23/2022.
//

#include "SelectionSort.h"

void SelectionSort::selectionSort(std::vector<int> &arr) {
int temp=0,index;

    for(int k=0;k<arr.size()-1;k++) {
        index = k;
        for (int i = k + 1; i < arr.size(); i++) {
            if (arr[i] < arr[index]) {
                index = i;
            }
        }
        if (index != k) {
            temp = arr[index];
            arr[index] = arr[k];
            arr[k] = temp;
        }
    }
}
