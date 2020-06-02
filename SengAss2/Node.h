//Node.h file
// Created by Keeylan Hume, C3320396
// SENG1120 Assignment 1

#ifndef SENG1120_NODE_H
#define SENG1120_NODE_H

#include <cstdlib>
#include <string>

using namespace std;


template <class value_type>
class Node {
public:

    //typedef string data_type;

        //constructor adding data
        Node(const value_type& newData);

        Node();

        //Pre-condition - Sets next node
        //Post-condition - Sets next node

        void setNext(Node* nextLink);

        //Pre-condition - Sets prev node
        //Post-condition - Sets prev node

        void setPrev(Node* prevLink);

        //Pre-condition - Sets data
        //Post-condition - Sets data

        void setData(const value_type& newData);

        //Pre-condition - Returns data
        //Post-condition - Returns data

        value_type getData() const;

        //Pre-condition - Returns next node
        //Post-condition - Returns next node

        Node* getNext();

        //Pre-condition - Returns prev node
        //Post-condition - Returns prev node

        Node* getPrev();

private:
    // Holds data
    value_type data;
    //Next node and Prev node pointers
    Node<value_type>* next;
    Node<value_type>* prev;
};

#include "Node.hpp"
#endif //SENG1120_NODE_H
