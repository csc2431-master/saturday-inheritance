//
// Created by Arias Arevalo, Carlos on 5/1/21.
//

#ifndef SATURDAY_INHERITANCE_PERSON_H
#define SATURDAY_INHERITANCE_PERSON_H

#include <string>
using std::string;

class Person {
private:
	string _name; // C-String
	int _ssn;
public:
	Person(const string& name, int ssn = 0);
	Person(const Person&);
	Person& operator=(const Person&);
	// Destructor should be virtual, why???
	virtual ~Person();
	// Should it be virtual??
	virtual string ToString()const;
	string GetName()const;
	int GetSSN()const;
};


#endif //SATURDAY_INHERITANCE_PERSON_H
