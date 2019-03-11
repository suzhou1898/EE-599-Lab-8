//
// Created by Albert Yu on 2019-03-05.
//

#ifndef LAB_8_MEMBER_H
#define LAB_8_MEMBER_H

#include <string>
#include <iostream>
using namespace std;

class Member{
public:

    Member();
    Member(const string& username, const string& name, const string& datebirth, const string& email, const string& phonenumber, unsigned year);
    void readFrom(istream& in);
    void writeTo(ostream& in)const;
    string getUsername();
    string getName();
    string getDateBirth();
    string getEmail();
    string getPhoneNumber();
    unsigned getYear();

private:

    string username;
    string name;
    string datebirth;
    string email;
    string phonenumber;
    unsigned year;
};

#endif //LAB_8_MEMBER_H
