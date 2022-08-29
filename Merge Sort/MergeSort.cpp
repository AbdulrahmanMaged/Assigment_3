//
// Created by abdul on 8/23/2022.
//

#include "MergeSort.h"

void MergeSort::mergeSort(std::vector<int> &arr,int start,int end) {

    if (start < end) {

        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);


        merge(arr, start, mid, end);
    }

}

void MergeSort::merge(std::vector<int> &result, int first, int half, int last) {

    // Create arr1 ← A[start..mid] and arr2 ← A[mid+1..end]
    int index1 = half - first + 1;
    int index2 = last - half;

    int arr1[index1], arr2[index2];

    for (int i = 0; i < index1; i++)
        arr1[i] = result[first + i];
    for (int j = 0; j < index2; j++)
        arr2[j] = result[half + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = first;


    while (i < index1 && j < index2) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < index1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < index2) {
        result[k] = arr2[j];
        j++;
        k++;
    }

}
