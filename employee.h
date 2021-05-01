//
// Created by Arias Arevalo, Carlos on 5/1/21.
//

#ifndef SATURDAY_INHERITANCE_EMPLOYEE_H
#define SATURDAY_INHERITANCE_EMPLOYEE_H

#include "person.h"

#include <string>
using std::string;

class Employee: public Person {
private:
	int _id;
	float _baseSalary;
public:
	Employee(const string& name, int ssn, int id, float salary);
	Employee(const Employee& other);
	~Employee();
	Employee& operator=(const Employee& rhs);
	int GetID()const;
	float GetSalary()const;
	void GiveRaise(float percentage);
	virtual string ToString()const;
};


#endif //SATURDAY_INHERITANCE_EMPLOYEE_H
