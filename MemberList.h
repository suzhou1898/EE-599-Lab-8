//
// Created by Albert Yu on 2019-03-06.
//

#ifndef LAB_8_MEMBERLIST_H
#define LAB_8_MEMBERLIST_H

#include "Member.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class MemberList{
public:
    Member* SearchU(string s,unsigned num);
    Member* SearchE(string s);
    Member** SearchY(unsigned y);
    MemberList(const string& filename);
    unsigned getNumMembers() const;
private:
    vector<Member> totalMembers;
};

#endif //LAB_8_MEMBERLIST_H
