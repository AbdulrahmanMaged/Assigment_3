//
// Created by abdul on 8/23/2022.
//

#include "BubbleSort.h"

void BubbleSort::bubbleSort(std::vector<int> &arr) {
int numCompares=arr.size(),temp=0;

             for(int i =0 ; i< numCompares;i++){
            for(int j=0;j<numCompares-1;j++) {
                if (arr[j] > arr[j + 1]) {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

}
