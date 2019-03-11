//
// Created by Albert Yu on 2019-03-05.
//

#ifndef LAB_8_MEMBERTESTER_H
#define LAB_8_MEMBERTESTER_H

#include "Member.h"
#include <iostream>
#include <fstream>

class MemberTester{
public:
    void runTests();
    void testConstructors();
    void testReadFrom();
    void testWriteTo();
};
#endif //LAB_8_MEMBERTESTER_H
