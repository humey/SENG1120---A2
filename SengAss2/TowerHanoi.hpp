//
// Created by Keeylan on 2/05/2020.
//


#include "TowerHanoi.h"
#include "LStack.h"
#include "DiscString.h"



template <class value_type>
TowerHanoi<value_type>::TowerHanoi(int discs){

    // Creates the corrosponding discs and pushes them onto the StackLinkedList[0] which is stack uno
    for (int i = 1; i <= discs; i++) {
       value_type disc = value_type(i);
       rods[0].push(disc);
    }
}

template <class value_type>
TowerHanoi<value_type>::~TowerHanoi() {

    // do stuff
}

template <class value_type>
void TowerHanoi<value_type>::move(const int rod_from, const int rod_to) {



    // do stuffs
}

template <class value_type>
const string TowerHanoi<value_type>::print() {
    // creating a tempstack to push values to
    LStack<value_type> tempRod[3];
    string print = "";
    // iterate through the stacks ** need to add spaces to make them print equally

    for (int rod = 0; rod <= 2; rod++) {
        cout << rods[rod];

//        print.append(rods[rod].peek());


    }


    print.append("-----------------------------------------");
    print.append("\n");
    print.append("      1              2              3");
    // do stuff

    return print;
}

template <class value_type>
bool TowerHanoi<value_type>::checkWin() const {



    //do stuff
}

template <class value_type>
ostream& operator << (ostream& os, TowerHanoi<value_type>& gameTower){


os << gameTower.print();
return os;

}
