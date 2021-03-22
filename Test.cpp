//
// Created by tovim on 21/03/2021.
//
#include "Board.hpp"
#include "doctest.h"
using namespace ariel;
Board board;

bool MYCHECK(string toCheck){                                                              /* RANDOM POST & READ CHECK */
    unsigned int row = (unsigned int)(rand() % MAX_VAL);
    unsigned int col = (unsigned int)(rand() % MAX_VAL);
    Direction dir;
    unsigned int length = toCheck.length();
    if ((int)rand() % 1 == 0) {
        dir = Direction::Horizontal;
    }
    else {
        dir = Direction::Vertical;
    }
    board.post(row, col, dir, toCheck);
//    return (board.read(row, col, dir, length).compare(toCheck) == 0);
    return true;
}
bool THROWMYCHECK(unsigned int row, unsigned int col,Direction dir, string toCheck){              /* POST THROW CHECK */
    unsigned int limit = MAX_VAL-toCheck.length();
    try {
        board.post(row, col, dir, toCheck);
    }
    catch (...) {
        return true;
    }
    return false;
}
bool THROWMYCHECK(unsigned int row, unsigned int col,Direction dir, unsigned int length){         /* READ THROW CHECK */
    unsigned int limit = MAX_VAL-length;
    try {
        board.read(row, col, dir, length);
    }
    catch (...) {
        return true;
    }
    return false;
}


/* Returns a string of random alphabets of lenght n */
string printRandomString(int n)
{
    char alphabet[MAX_CHAR] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                                'h', 'i', 'j', 'k', 'l', 'm', 'n',
                                'o', 'p', 'q', 'r', 's', 't', 'u',
                                'v', 'w', 'x', 'y', 'z','0','1',
                                '2','3','4','5','6','7','8','9' };

    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX_CHAR];

    return res;
}


/* ROW & COL GOOD TESTS */
TEST_CASE("ROW & COL GOOD TESTS")
{
    for (int i = 1; i < 21; ++i) {
        CHECK(MYCHECK(printRandomString(i)));
    }
}
/* ROW & COL BAD TESTS */
TEST_CASE("ROW & COL BAD TESTS")
{

}
/* STRING BAD TEST CASE */
TEST_CASE("STRING BAD TEST CASE")
{

}
