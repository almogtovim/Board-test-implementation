//
// Created by tovim on 21/03/2021.
//

#ifndef DEMO_CPP_BOARD_HPP
#define DEMO_CPP_BOARD_HPP
#define MAX_VAL 4294967295
#include <iostream>
#include "Direction.hpp"
const int MAX_CHAR = 36;
using namespace std;

namespace ariel {
    class Board {
    public:
        Board(){}
        string read(unsigned int row, unsigned int col, Direction direct, unsigned int length){return "Only for test\n";}
        void post(unsigned int row, unsigned int col, Direction direct, string word){};
        void show(){};
    };
}


#endif //DEMO_CPP_BOARD_HPP
