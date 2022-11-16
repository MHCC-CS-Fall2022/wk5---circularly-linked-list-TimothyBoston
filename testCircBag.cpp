/*
 wk5_Circular_linked_list_TBoston.cxx

 Filename:       testCircBag.cpp
 Summary:        Demonstrate definition of a data structure that uses a circularly-linked list to store data
 Specifications: Design, define, implement and test a data structure that uses a circularly-linked list to store data.
                 The bag class will have a tail_ptr that is always either NULL or points to the same node as head_ptr.
                 The functions modified in the bag class are: insert(), print(), head_remove(), erase(), count(), listLength() and listClear()
                 The functions modified in the link-list toolkit are: list_length(), list_head_insert(), list_head_remove(), list_search() and list_clear()
                 Program will then test these functions that manipulate the linked list.
 Test cases:     20 random integers, four 5 integers, six 3 integers.

 Author:         Timothy Boston
 Created:        October 30, 2022
 Summary of Modifications:
 */

#include <iostream>     // Provides cout and cin
#include <cstdlib>      // Provides EXIT_SUCCESS
#include "circBag.h" // With Item defined as an int
#include <time.h>

using namespace std;
using namespace main_savitch_5;

int main( )
{
    srand(time(NULL));
    circBag cb1;
    circBag::size_type manyRemoved;
    circBag::size_type numOfEntries;
    std::size_t length;

    for (int i = 0; i < 20; i++){
        cb1.insert(rand() % 20 + 1);
    }
    for (int i = 0; i < 4; i++){
        cb1.insert(2);
    }
    cout << "Printing data values from the linked list...\n";
    cb1.print();
    cout << "Number of nodes: " << cb1.size() << endl;

    cout << "\nTesting remove_head() function..." << endl;
    cb1.head_remove();
    cb1.print();
    cout << "\nNumber of nodes: " << cb1.size() << endl;

    cout << "\nTesting the erase() function by erasing all 2's from the list..." << endl;
    manyRemoved = cb1.erase(5);
    cb1.print();
    cout << "Number of 2's removed: " << manyRemoved << endl;

    cout << "\nTesting the count function by adding four 6's to the list and counting up\n"
         << "the total number of 6's in the list...\n";
    for (int i = 0; i < 4; i++)
        {
        cb1.insert(6);
        }
    cb1.print();
    numOfEntries = cb1.count(6);
    cout << "Number of 6's in the list: " << numOfEntries << endl;

    cout << "\nTesting the listLength() function...\n";
    length = cb1.listLength();
    cout << "\nList length: " << length << endl;

    cout << "\nTesting the listClear() function...\n";
    cb1.listClear();
    cb1.print();
    cout << "\nNumber of nodes: " << cb1.size() << endl << endl;
    return 0;
}
