//
// Created by Albert Yu on 2019-03-06.
//


#include "MemberListTester.h"
#include "MemberList.h"
using namespace std;

void MemberListTester::runTests() {

    cout << "\nTesting class MemberList..." << endl;
    testConstructors();
    testSearchU();
    testSearchE();
    testSearchY();
    cout << "All tests passed!" << endl;
}

void MemberListTester::testConstructors() {

    cout << "- constructors..." << flush;
    MemberList bList("input.txt");
    assert( bList.getNumMembers() == 5 );
    cout << " 0 " << flush;
    cout << " Passed!" << endl;

}

void MemberListTester::testSearchU(){
    Member *member=NULL;
    cout << "- SearchbyUsername()..." << flush;
    MemberList bList("input.txt");

    string s="Spiderman";
    member=bList.SearchU(s,bList.getNumMembers());
    assert( member->getName() == "Jane Scott" );
    assert( member->getDateBirth() == "02/17/1998" );
    assert( member->getEmail() == "janescott@gmail.com" );
    assert( member->getPhoneNumber() == "2133770909"  );
    assert( member->getYear() == 2017);
    cout << " 0 " << flush;

    s="superman";
    member=bList.SearchU(s,bList.getNumMembers());
    assert( member->getName() == "Tony Lee" );
    assert( member->getDateBirth() == "01/11/1996" );
    assert( member->getEmail() == "tony11@gmail.com" );
    assert( member->getPhoneNumber() == "2131237700"  );
    assert( member->getYear() == 2017);
    cout << " 1 " << flush;

    s="clubusername";
    member=bList.SearchU(s,bList.getNumMembers());
    assert( member->getName() == "Alice Flores" );
    assert( member->getDateBirth() == "05/22/1990" );
    assert( member->getEmail() == "alice1990@gmail.com" );
    assert( member->getPhoneNumber() == "2133306677"  );
    assert( member->getYear() == 2016);
    cout << " 2 " << flush;

    s="newmembers";
    member=bList.SearchU(s,bList.getNumMembers());
    assert( member->getName() == "Mark Brown" );
    assert( member->getDateBirth() == "03/20/1990" );
    assert( member->getEmail() == "mark320@gmail.com" );
    assert( member->getPhoneNumber() == "2133900110"  );
    assert( member->getYear() == 2015);
    cout << " 3 " << flush;

    s="davidclubname";
    member=bList.SearchU(s,bList.getNumMembers());
    assert( member->getName() == "David Smith" );
    assert( member->getDateBirth() == "01/10/1989" );
    assert( member->getEmail() == "davidsmith@gmail.com" );
    assert( member->getPhoneNumber() == "2551020510"  );
    assert( member->getYear() == 2018);
    cout << " 4 " << flush;

    cout << " Passed!" << endl;

}


void MemberListTester::testSearchE() {
    Member *member = NULL;
    cout << "- SearchbyEmail()..." << flush;
    MemberList bList("input.txt");

    string s="janescott@gmail.com";
    member=bList.SearchE(s);
    assert( member->getUsername() == "Spiderman" );
    assert( member->getName() == "Jane Scott" );
    assert( member->getDateBirth() == "02/17/1998" );
    assert( member->getPhoneNumber() == "2133770909"  );
    assert( member->getYear() == 2017);
    cout << " 0 " << flush;

    s="tony11@gmail.com";
    member=bList.SearchE(s);
    assert( member->getUsername() == "superman" );
    assert( member->getName() == "Tony Lee" );
    assert( member->getDateBirth() == "01/11/1996" );
    assert( member->getPhoneNumber() == "2131237700"  );
    assert( member->getYear() == 2017);
    cout << " 1 " << flush;

    s="alice1990@gmail.com";
    member=bList.SearchE(s);
    assert( member->getUsername() == "clubusername" );
    assert( member->getName() == "Alice Flores" );
    assert( member->getDateBirth() == "05/22/1990" );
    assert( member->getPhoneNumber() == "2133306677"  );
    assert( member->getYear() == 2016);
    cout << " 2 " << flush;

    s="mark320@gmail.com";
    member=bList.SearchE(s);
    assert( member->getUsername() == "newmembers" );
    assert( member->getName() == "Mark Brown" );
    assert( member->getDateBirth() == "03/20/1990" );
    assert( member->getPhoneNumber() == "2133900110"  );
    assert( member->getYear() == 2015);
    cout << " 3 " << flush;

    s="davidsmith@gmail.com";
    member=bList.SearchE(s);
    assert( member->getUsername() == "davidclubname" );
    assert( member->getName() == "David Smith" );
    assert( member->getDateBirth() == "01/10/1989" );
    assert( member->getPhoneNumber() == "2551020510"  );
    assert( member->getYear() == 2018);
    cout << " 4 " << flush;

    cout << " Passed!" << endl;
}

void MemberListTester::testSearchY() {
    Member **member = NULL;
    cout << "- SearchbyYear()..." << flush;
    MemberList bList("input.txt");

    unsigned y=2015;
    member=bList.SearchY(y);
    assert( member[0]->getUsername() == "newmembers" );
    assert( member[0]->getName() == "Mark Brown" );
    assert( member[0]->getDateBirth() == "03/20/1990" );
    assert( member[0]->getEmail() == "mark320@gmail.com" );
    assert( member[0]->getPhoneNumber() == "2133900110"  );

    cout << " 0 " << flush;

    y=2016;
    member=bList.SearchY(y);
    assert( member[0]->getUsername() == "clubusername" );
    assert( member[0]->getName() == "Alice Flores" );
    assert( member[0]->getDateBirth() == "05/22/1990" );
    assert( member[0]->getEmail() == "alice1990@gmail.com" );
    assert( member[0]->getPhoneNumber() == "2133306677"  );

    cout << " 1 " << flush;

    y=2017;
    member=bList.SearchY(y);
    assert( member[0]->getUsername() == "Spiderman" );
    assert( member[0]->getName() == "Jane Scott" );
    assert( member[0]->getDateBirth() == "02/17/1998" );
    assert( member[0]->getEmail() == "janescott@gmail.com" );
    assert( member[0]->getPhoneNumber() == "2133770909"  );

    assert( member[1]->getUsername() == "superman" );
    assert( member[1]->getName() == "Tony Lee" );
    assert( member[1]->getDateBirth() == "01/11/1996" );
    assert( member[1]->getEmail() == "tony11@gmail.com" );
    assert( member[1]->getPhoneNumber() == "2131237700"  );

    cout << " 2 " << flush;

    y=2018;
    member=bList.SearchY(y);
    assert( member[0]->getUsername() == "davidclubname" );
    assert( member[0]->getName() == "David Smith" );
    assert( member[0]->getDateBirth() == "01/10/1989" );
    assert( member[0]->getEmail() == "davidsmith@gmail.com" );
    assert( member[0]->getPhoneNumber() == "2551020510"  );

    cout << " 3 " << flush;

    cout << " Passed!" << endl;
}



