#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RadixSort.h"
#include "SelectionSort.h"
#include <iostream>
#include <vector>
using namespace std;

void print(std::vector <int> const &a);

int main (){
vector<int> array;
int starter;
cout<<"what tyepe of sort do you want to use\n";
    cout<<"Press 1 for Bubble sort \n";
    cout<<"Press 2 for Selection sort \n";
    cout<<"Press 3 for Insertion sort \n";
    cout<<"Press 4 for Quick sort \n";
    cout<<"Press 5 for Merge sort \n";
    cout<<"Press 6 for Radix sort \n";
    cin>>starter;
    cout<<endl;
    while (starter>6 || starter<1){
        cout <<"invalid choice choose a number between 1 and 6, re-enter please\n";
        cin>>starter;
        cout<<endl;
    }
   if(starter==6){
       cout<<"Radix Sort"<<endl;
       RadixSort r1;
       r1.radixSortAdd();
       cout<<endl;
       cout<<endl;
       return 0;
   }
    int choice=1,item;

    while (choice != 0){
        cout<<"insert a number \n";
        cin>> item;
        array.push_back(item);
        cout<<endl;
        cout<<"do you wish to insert another element? , press 1 if yes , 0 otherwise \n";
        cin>>choice;
        cout<<endl;
        while(choice>1 || choice<0 ){
            cout<<"invalid input , re-enter\n";
            cout<< "enter 1 to insert a new element , 0 otherwise\n";
            cin>>choice;
            cout<<endl;
        }
    }

// bubble sort
    switch (starter) {
        case 1:
            BubbleSort b1;
            cout<<"bubble sort\n"<<"  elements before sort : ";
            print(array);
            cout<<endl;
            b1.bubbleSort(array);
            cout<<"elements after sort :";
            print(array);
            cout<<endl;
            cout<<endl;
            break;
        case 2:
            //selection sort
            cout<<"selection sort\n"<<"elements before sort : ";
            print(array);
            cout<<endl;
            SelectionSort s1;
            s1.selectionSort(array);
            cout<<"elements after sort :";
            print(array);
            cout<<endl;
            cout<<endl;
            break;
        case 3:
            //insertion sort
            cout<<"insertion sort\n"<<"elements before sort : ";
            InsertionSort in1;
            print(array);
            cout<<endl;
            in1.insertionSort(array);
            cout<<"elements after sort :";
            print(array);
            cout<<endl;
            cout<<endl;
            break;
        case 4:
            //Quick sort
            cout<<"Quick sort\n"<<"elements before sort : ";
            print(array);
            cout<<endl;
            QuickSort q1;
            q1.quickSort(array,0,array.size()-1);
            cout<<"elements after sort :";
            print(array);
            cout<<endl;
            cout<<endl;
            break;
        default:
            //Merge Sort
            cout<<"Merge Sort\n"<<"elements before sort : ";
            print(array);
            cout<<endl;
            MergeSort m1;
            m1.mergeSort(array,0,array.size()-1);
            cout<<"elements after sort :";
            print(array);
            cout<<endl;
            cout<<endl;
            break;
    }

}

void print(std::vector <int> const &a) {

    for(int i=0; i < a.size(); i++)
        cout << a.at(i) << ' ';

}