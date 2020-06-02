//
// Created by Keeylan on 2/05/2020.
//

#ifndef SENG1120_TOWERHANOI_H
#define SENG1120_TOWERHANOI_H

#include "LStack.h"

using namespace std;


template <class value_type>
class TowerHanoi{

public:
TowerHanoi<value_type>(const int discs);
s
~TowerHanoi();

void move(const int rod_from, const int rod_to);

const string print();

bool checkWin() const;

private:
    // 6 Stacks of LinkedLists, 3 for the game logic, then 3 to print them out upside down so its 
    // a much easier process
    LStack<value_type> rods [5];
};

template <class value_type>
ostream& operator << (ostream& os, TowerHanoi<value_type>& gameTower);


#include "TowerHanoi.hpp"
#endif //SENG1120_TOWERHANOI_H