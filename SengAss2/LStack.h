//
// Created by Keeylan on 2/05/2020.
//

#ifndef SENG1120_LSTACK_H
#define SENG1120_LSTACK_H


#include "LinkedList.h"
#include <iostream>

template <class value_type>
class LStack{

public:

LStack();

~LStack();

void push(value_type newData);

value_type pop();

int size() const;

bool isEmpty();

value_type peek();



private:

LinkedList<value_type> l_stack;


};

template <class value_type>
ostream& operator << (ostream& os, LStack<value_type>& stack);


#include "LStack.hpp"
#endif //SENG1120_LSTACK_H
