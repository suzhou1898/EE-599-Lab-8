//
// Created by Albert Yu on 2019-03-05.
//

#include "Member.h"

Member::Member() {

    username = "";
    name = "";
    datebirth = "";
    email = "";
    phonenumber = "";
    year = 0;

}

Member::Member(const string& username, const string& name, const string& datebirth, const string& email, const string& phonenumber, unsigned year){
    this -> username = username;
    this -> name = name;
    this -> datebirth = datebirth;
    this -> email = email;
    this -> phonenumber = phonenumber;
    this -> year = year;
}

/* getter method for username

 * Return: username

 */

string Member::getUsername() {

    return username;

}



/* getter method for name

 * Return: name

 */

string Member::getName() {

    return name;

}



/* getter method for DateBirth

 * Return: DateBirth

 */

string Member::getDateBirth() {

    return datebirth;

}



/* getter method for email

 * Return: email

 */

string Member::getEmail() {

    return email;

}



/* getter method for phonenumber

 * Return: phonenumber

 */

string Member::getPhoneNumber() {

    return phonenumber;

}



/* getter method for registered year

* Return: year
*/

unsigned Member::getYear() {

    return year;

}

void Member::readFrom(istream& in) {

    getline(in, this->username);
    getline(in, this->name);
    getline(in, this->datebirth);
    getline(in, this->email);
    getline(in, this->phonenumber);
    string yearString;
    getline(in, yearString);
    this->year = atoi(yearString.c_str());
}

void Member::writeTo(ostream& out) const{
    out << this -> username << '\n'
        << this -> name << '\n'
        << this -> datebirth << '\n'
        << this -> email << '\n'
        << this -> phonenumber  << '\n'
        << this -> year  << '\n';
}