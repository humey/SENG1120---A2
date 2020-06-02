//
// Created by Keeylan on 2/05/2020.
//


#include "LStack.h"
#include "LinkedList.h"
#include "Node.h"

using namespace std;

template <class value_type>
LStack<value_type>::LStack() {
//Construct is auto with linkedlist
    l_stack = LinkedList<value_type>();
}

template <class value_type>
LStack<value_type>::~LStack() {
    //Destruct auto with linkedlist

}

// Adding to the stacks head, then resetting current to point to the new head
template <class value_type>
void LStack<value_type>::push(value_type newData) {
    l_stack.add(newData);
    l_stack.resetCurrent();
}

// Pop the top of the stack, LinkedList remove function already resets the current to point to head
// Return the data from the node
template <class value_type>
value_type LStack<value_type>::pop(){
    value_type data = l_stack.getData();
    // need to make q removehead function in linkedlist, atm remove will get rid of the whole list
    l_stack.remove();
    return data;
}

template <class value_type>
bool LStack<value_type>::isEmpty() {
    return l_stack.getLength() == 0;
}

template <class value_type>
int LStack<value_type>::size() const {

    return l_stack.getLength();

}

template <class value_type>
value_type LStack<value_type>::peek() {

    return l_stack.getData();

}

template <class value_type>
ostream& operator << (ostream& os, LStack<value_type>& stack){

LStack<value_type> tStack;

while (!stack.isEmpty()){
    os << stack.peek();
    tStack.push(stack.pop());
}

while (!tStack.isEmpty()){

    stack.push(tStack.pop());


}

return os;
}