//
// Created by Arias Arevalo, Carlos on 5/1/21.
//

#include "employee.h"

#include <iostream>
#include <sstream>
using std::cout;
using std::endl;
using std::stringstream;

Employee::Employee(const string &name, int ssn, int id, float salary)
	:Person(name, ssn), _id(id), _baseSalary(salary){

}

Employee::Employee(const Employee &other): Person(other),
	_id(other._id), _baseSalary(other._baseSalary) {

}

Employee::~Employee() {
	cout << "Destructor of Employee: " << _id << endl;
}

Employee &Employee::operator=(const Employee &rhs) {
	return *this; // Need more time to explain
}

int Employee::GetID() const {
	return _id;
}

float Employee::GetSalary() const {
	return _baseSalary;
}

void Employee::GiveRaise(float percentage) {
	_baseSalary = (1 + percentage) * _baseSalary;
}

string Employee::ToString() const {
	stringstream ss;
	ss << "{Person: " << Person::ToString()
		<< ", id: " << _id << ", salary: " << _baseSalary << "}";
	return ss.str();
}

/*
 * 1000
 * 5%
 * 1000 + 1000 * 0.05
 * (1 + 0.05) * 1000
 */