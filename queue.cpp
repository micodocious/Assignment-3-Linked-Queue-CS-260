#include "queue.h"


//construct a linked list
queue::queue() {
    front = nullptr;
    back = nullptr;
    temp;
}


//Add function 
void queue::add(int new_value) {
    //create a new node that will be added into the queue
    node *new_node = new node();
    new_node->value = new_value;
    new_node->next = nullptr;

    //check if queue is empty, if empty make rear and front point to new node
    if(back == nullptr) {
        back = front = new_node;
    }
    //else queue isn't empty, point to new node and advance rear to point to new_node
    else {
        back->next = new_node;
        back = new_node;
    }
}

//Remove the front member
int queue::remove() {
    temp = front;
    if (front == nullptr) {
      return -1;
    }
    if (temp->next != nullptr) {
        temp = temp->next;
        //return front->value;
        free(front);
        front = temp;
    }else {
        //return front ->value;
        front = nullptr;
        back = nullptr;

    }

}

//peeks the front member function. checks if both front and back members have any values, if it does, it moves forward.
int queue::peek_front() {
    /*if(rear != nullptr) {
        return rear->value;
    }
    else {
        return -1;
    }*/
    temp = front;
    if ((front == NULL) && (back == NULL)) {
        return -1;
    }
    while (temp != NULL) {
        return temp->value;
        temp = temp->next;
    }
}

//peeks the back member function. checks if both front and back members have any values, if it does, it identifies the newest member.
int queue::peek_back() {
    temp = back;
    if ((front == NULL) && (back == NULL)) {
        return -1;
    }
    while (temp != NULL) {
        return temp->value;
        temp = temp->next;
    }
}