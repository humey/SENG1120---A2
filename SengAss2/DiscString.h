//
// Created by Keeylan on 2/05/2020.
//

#ifndef SENG1120_DISCSTRING_H
#define SENG1120_DISCSTRING_H

#include <cstdlib>
#include <string>
#include <algorithm>


using namespace std;
class DiscString{


public:

    // Make constructor that takes in an integer 1- 5 and creates the X's that make the disc

    DiscString(const int size) {
        switch (size)
        {
        case 1:
            disc = "      x ";
            break;
        case 2:
            disc = "     xxx ";
            break;
        case 3:
            disc = "    xxxxx ";
            break;
        case 4:
            disc = "   xxxxxxx ";
            break;
        case 5:
            disc = "  xxxxxxxxx ";
            break;
        }
    }

    DiscString(){
    }

    bool compareSize(string disc, string disc2) {

        // comparing disc to disc2, so disc = 1, disc2 = 4

        size_t number = count(disc.begin(), disc.end(), 'x');
        size_t number2 = count(disc2.begin(), disc2.end(), 'x');

        if (number < number2) {
            return true;
        }

        return false;

    }

    string discValue() {
       return disc;
    }

private:
    string disc;

};

// Overload the >> to print them
ostream& operator << (ostream& os, DiscString& data) {


    os << data.discValue();

    return os;
}
#endif //SENG1120_DISCSTRING_H
