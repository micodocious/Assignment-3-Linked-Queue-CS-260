/*
Assignment 3
Mico Santiago
CS 260 Data Structures

We are creating a linked list queue by with the features of add, remove, peek front and peek back. 
It achieves all the requirements for this assignment seen in the reamme. This assignment was achieved with help from
the mini lectures. The way the instructor architected the assignment made it easy to follow and learn the fundamentals
of how to make this data structure i.e. creating a node that has and the value and address and moving it down the queue.

*/

#include <iostream>
#include "queue.cpp"

using std::cout;
using std::cin;
using std::endl;


int main(int argc, char **argv) {
    queue *my_queue = new queue();

    //peek at empty list of
    cout << "Front " << my_queue->peek_front();
    cout << " back" << my_queue->peek_back() << endl;
    //add values at the end of the queue and peek as we go to
    my_queue->add(1);
    cout << "Front " << my_queue->peek_front();
    cout << " back " << my_queue->peek_back() << endl;
    my_queue->add(2);
    cout << "Front " << my_queue->peek_front();
    cout << " back " << my_queue->peek_back() << endl;
    my_queue->add(3);
    cout << "Front " << my_queue->peek_front();
    cout << " back " << my_queue->peek_back() << endl;
    //remove values and peek as we go
    my_queue->remove();
    cout << "Front " << my_queue->peek_front();
    cout << " back " << my_queue->peek_back() << endl;
    my_queue->remove();
    cout << "Front " << my_queue->peek_front();
    cout << " back " << my_queue->peek_back() << endl;
    my_queue->remove();
    cout << "Front " << my_queue->peek_front();
    cout << " back " << my_queue->peek_back() << endl;
    my_queue->remove();
    cout << "Front " << my_queue->peek_front();
    cout << " back " << my_queue->peek_back() << endl;
    

    return 0;


}


