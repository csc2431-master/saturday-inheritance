//
// Created by Arias Arevalo, Carlos on 5/1/21.
//

#include "person.h"

#include <string>
#include <iostream>
#include <sstream>
using std::string;
using std::cout;
using std::endl;
using std::stringstream;

Person::Person(const string& name, int ssn) : _name(name), _ssn(ssn){
}

Person::Person(const Person& other): _name(other._name), _ssn(other._ssn) {

}

Person &Person::operator=(const Person& rhs) {
	_name = rhs._name;
	_ssn = rhs._ssn;
}

Person::~Person() {
	cout << "Destructor of Person" << endl;
}

string Person::ToString() const {
	stringstream ss;
	ss << "{name: " << _name <<", ssn: " << _ssn << "}";
	return ss.str();
}

string Person::GetName() const {
	return _name;
}

int Person::GetSSN() const {
	return _ssn;
}
