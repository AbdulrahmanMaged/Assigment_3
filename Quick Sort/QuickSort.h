//
// Created by abdul on 8/23/2022.
//

#ifndef ASSIGMENT_3_QUICKSORT_H
#define ASSIGMENT_3_QUICKSORT_H


#include <vector>

class QuickSort {
public:
    void quickSort(std::vector<int> &arr, int low,int high);


private:
    int split(std::vector<int> &arr,int low ,int high);

};


#endif //ASSIGMENT_3_QUICKSORT_H
