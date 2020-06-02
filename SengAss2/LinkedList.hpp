// LinkedList.cpp file
// Created by Keeylan Hume, C3320396
// SENG1120 Assignment 1

#include <sstream>
#include "Node.h"
#include "LinkedList.h"
typedef string data_type;

//Default constructor
template <class value_type>
LinkedList<value_type>::LinkedList(){
    head = NULL;
    tail = NULL;
    current = NULL;
    length = 0;
}
//Destructor for the linkedlist
template <class value_type>
LinkedList<value_type>::~LinkedList() {
        Node<value_type>* temp = head;
        while(temp != NULL) {
            Node<value_type>* nextNode = temp->getNext();
            delete temp;
            temp = nextNode;
        }
}

//
//template <class value_type>
//void LinkedList<value_type>::add_head(const value_type& newData) {
//
//    if (length == 0) {
//
//        head = new Node<value_type>(newData);
//        tail = head;
//        current = head;
//    }
//    else {
//        Node<value_type>* node = new Node<value_type>(newData);
//        node->setPrev(tail);
//        tail->setNext(node);
//        tail = node;
//
//
//    }
//    length++;
//
//
//}



//picks words seperated by a space via the input string and stores in individual nodes
template <class value_type>
void LinkedList<value_type>::add(const value_type &newData) {
   // value_type data = newData;



                                                                    // If its the first node in the linkedlist
                                                                    if(length == 0){
                                                                        //value_type data = newData;
                                                                        Node<value_type>* node = new Node<value_type>(newData);
                                                                        head = node;
                                                                        tail = node;
                                                                        current = node;
                                                                    }
        //If the LinkedList has more then 1 node
        else{
            //value_type data = newData;
            Node<value_type>* node = new Node<value_type>(newData);
            node->setPrev(tail);
            tail->setNext(node);
            tail = node;
        }
        length++;

}


template <class value_type>
int LinkedList<value_type>::getLength() {
    return length;
}

template <class value_type>
const value_type LinkedList<value_type>::getData(){
    value_type data = current->getData();
    current = current->getNext();
    return data;
}

template <class value_type>
void LinkedList<value_type>::resetCurrent() {
    current = head;
}

//Overloaded operator to join lists together
template <class value_type>
LinkedList<value_type>& LinkedList<value_type>::operator += (const LinkedList& l2){
    Node<value_type>* temp = l2.head;
    while(temp != NULL){
       // temp->setData(temp->getData());
        this->add(temp->getData());
        temp = temp->getNext();
    }
    return *this;
}

// NOTE** the remove function doesnt factor in case sensitive words. To test deleting the head node it needs a lowercase t
template <class value_type>
void LinkedList<value_type>::remove() {
    for (current = head; current != NULL; current = current->getNext()) {
        // Runs if the data passed in matches the data of the current node pointed too
             // If the node is the head of the list
             if (current == head) {
                 // If the list only has 1 node
                 if(current == head && current == tail){
                     this->head = NULL;
                     this->tail = NULL;
                     length--;
                     delete current;
                     break;
                 }
                 // If the list has more than 1 node and the data matches the head node
                 else {
                     this->head = this->head->getNext();
                     this->head->setPrev(NULL);
                     current = head;
                     length--;
                 }
             }
             // If the node has nodes either side of it ** using a stack this is redundant
             else if (current->getNext() != NULL && current->getPrev() != NULL) {
                 current->getPrev()->setNext(current->getNext());
                 current->getNext()->setPrev(current->getPrev());
                 delete current;
                 current = head;
                 length--;

               // If the node is the tail of the list
             } else if (current == tail) {
                 this->tail = this->tail->getPrev();
                 this->tail->setNext(NULL);
                 current = head;
                 length--;
                 break;
             }
    }
}

template <class value_type>
int LinkedList<value_type>::count(value_type data) {
    int count = 0;
    for(current = head; current != NULL; current = current->getNext()){
        if(current->getData() == data){
            count++;
        }
    }
    return count;
}

// Overloaded operator to print the data from nodes in the LinkedList
template <class value_type>
ostream& operator << (ostream& os, LinkedList<value_type>& list) {
    list.resetCurrent();
    for (int i = 0; i < list.getLength(); i++) {
        os << list.getData() << " ";
    }

    return os;
}