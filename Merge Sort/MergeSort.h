//
// Created by abdul on 8/23/2022.
//

#ifndef ASSIGMENT_3_MERGESORT_H
#define ASSIGMENT_3_MERGESORT_H


#include <vector>

class MergeSort {

public:
    void mergeSort(std::vector<int>& arr,int start,int end);

private:
    void merge(std::vector<int> &result ,int First, int half, int last);

};


#endif //ASSIGMENT_3_MERGESORT_H
