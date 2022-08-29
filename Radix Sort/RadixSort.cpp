//
// Created by abdul on 8/23/2022.
//

#include "RadixSort.h"
void RadixSort::radixSort(list & l , list r[]) {

  int i = 1  , j , a  , b;
   int num = max_digit(l);
   while(i<=num)
   {
       while(!l.is_empty())
       {
           a = l.remove() ;
           b = a%pow(10,i);
           b = b/pow(10,i-1);
           r[b].add(a);
       }
       for(j=0;j<10;j++)
       {
           while(!r[j].is_empty())
           {
               a = r[j].remove();
               l.add(a);
           }
       }
       i++;
   }

}

int RadixSort::max_digit(RadixSort::list &l) {
    int a , dig=0 ,i ;
    NodePointer t = l.view_head() ;
    a = t->data ;
    while(t!=NULL)
    {
        if(a < t->data)
            a = t->data ;
        t= t->next ;
    }
    while(a>0)
    {
        a = a/10;
        dig++;
    }
    return dig ;
}

int RadixSort::pow(int a, int b) {
    int ans = 1;
    while(b--)
    {
        ans = ans*a ;
    }
    return ans ;
}



void RadixSort::radixSortAdd() {
    list l  , r[10];
    int cho=1,a;
    while(cho !=0) {
        cout << "Enter a number : \n";
        cin>>a;
        l.add(a);
        cout<<"do you wish to insert another element? , press 1 if yes , 0 otherwise \n";
        cin>>cho;
    }
    cout << "elements before sort is : " ; l.print();
    radixSort(l , r );
    cout << "\nSorted elements : " ; l.print();
}












