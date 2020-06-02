//Node.cpp file
// Created by Keeylan Hume, C3320396
// SENG1120 Assignment 1

#include "Node.h"
#include <cstdlib>
#include "DiscString.h"

#include <string>

using namespace std;

template <class value_type>
Node<value_type>::Node() {

}

template <class value_type>
Node<value_type>::Node(const value_type& newData) {
    data = newData;
    next = NULL;
    prev = NULL;
}

template <class value_type>
void Node<value_type>::setData(const value_type &newData) {
    data = newData;
}

template <class value_type>
value_type Node<value_type>::getData() const {
    return data;
}

template <class value_type>
Node<value_type>* Node<value_type>::getNext() {
    return next;
}

template <class value_type>
void Node<value_type>::setNext(Node *nextLink) {
    next = nextLink;
}

template <class value_type>
Node<value_type>* Node<value_type>::getPrev() {
    return prev;
}

template <class value_type>
void Node<value_type>::setPrev(Node *prevLink) {
    prev = prevLink;
}