//
// Created by abdul on 8/23/2022.
//

#include "InsertionSort.h"

void InsertionSort::insertionSort(std::vector<int> &arr) {

    int temp,j;

        for(int i=1;i<arr.size();i++){

            temp=arr[i];
            j=i-1;

            while( arr[j]>temp && j>=0){

                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=temp;
        }

}
