#include "MemberTester.h"
#include "MemberListTester.h"
using namespace std;

int main() {
    MemberTester membertester;
    membertester.runTests();

    MemberListTester aMemberListTester;
    aMemberListTester.runTests();

    return 0;
}