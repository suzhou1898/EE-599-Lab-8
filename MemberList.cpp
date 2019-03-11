//
// Created by Albert Yu on 2019-03-06.
//

#include "MemberList.h"
using namespace std;

/* MemberList constructor

    * @param: fileName, a string

    * Precondition: fileName contains the name of a input file.

    */

MemberList::MemberList(const string& fileName) {
    // open a stream to the Memberlist file

    ifstream fin( fileName.c_str() );
    assert( fin.is_open() );

    // read each Member and append it to totalMembers

    Member Member;
    string separator;
    while (true) {
        Member.readFrom(fin);
        if ( !fin ) { break; }
        getline(fin, separator);
        totalMembers.push_back(Member);
    }

    // close the stream

    fin.close();
}



/* Retrieve length of the Member list

 * Return: the number of Members in the list.

 */

unsigned MemberList::getNumMembers() const {

    return totalMembers.size();

}

Member* MemberList::SearchU(string s,unsigned num){
    for(unsigned i=0;i<num;i++){
        if(totalMembers[i].getUsername()==s){
            return &totalMembers[i];
        }
    }
    return NULL;
}

Member* MemberList::SearchE(string s) {

    for (unsigned i = 0; i < totalMembers.size(); i++) {
        if (totalMembers[i].getEmail() == s) {
            return &totalMembers[i];
        }
    }
    return NULL;
}

Member** MemberList::SearchY(unsigned y) {
    int k=0;
    for (unsigned i = 0; i < totalMembers.size(); i++) {
        if (totalMembers[i].getYear() == y) {
            k++;
        }
    }
    if (k!=0) {
        Member **p = new Member *[k];
        k = 0;
        for (unsigned i = 0; i < totalMembers.size(); i++) {
            if (totalMembers[i].getYear() == y) {
                p[k++] = &totalMembers[i];
            }
        }
        return p;
    }
    else{
        return NULL;
    }
}




