//
// Created by abdul on 8/23/2022.
//

#ifndef ASSIGMENT_3_RADIXSORT_H
#define ASSIGMENT_3_RADIXSORT_H
#include <vector>
#include <iostream>

using namespace std;

class RadixSort {
    private:
        class Node {
        public:

            //------ Node DATA MEMBERS
            int data;
            Node *next;

            //------ Node OPERATIONS
            //-- Default constrctor: initializes next member to Node()
            Node()
                    : next(0) {}

            //-- Explicit-value constructor:  initializes data member to dataValue
            //--                             and next member to 0
            Node(int dataValue)
                    : data(dataValue), next(0) {}
        }; //--- end of Node class
        //------ DATA MEMBERS
        typedef Node *NodePointer;
        NodePointer first;
        int mySize;
public:
    class list {
    private :
        NodePointer head;
    public :
        list() {
            head = 0;
        }

        void add(int x) {
            NodePointer t = head;
            NodePointer temp = new Node();
            temp->data = x;
            if (t == 0) {
                temp->next = 0;
                head = temp;
            } else {
                while (t->next != 0) {
                    t = t->next;
                }
                temp->next = t->next;
                t->next = temp;
            }
            return;
        }

        int remove() {
            NodePointer t = head;
            int a = t->data;
            head = t->next;
            delete t;
            return a;
        }

        int is_empty() {
            if (head == 0)
                return 1;
            else
                return 0;
        }

        NodePointer view_head() {
            return head;
        }

        void print() {
            NodePointer t = head;
            while (t != 0) {
                cout << t->data << " ";
                t = t->next;
            }
        }
    };
        int max_digit(list &l);
        int pow(int a , int b);
    void radixSort(list & l , list r[]) ;


void radixSortAdd();


};


#endif //ASSIGMENT_3_RADIXSORT_H
