
#include <iostream>
#include <vector>
#include "person.h"
#include "employee.h"

using std::cout;
using std::endl;
using std::vector;

void Magic(Person& p){
	cout << p.ToString() << endl;
}
void Mystic(Person* p){
	cout << p->ToString() << endl;
	Employee* employeePtr = dynamic_cast<Employee*>(p);
	if (employeePtr != nullptr){
		cout << employeePtr->GetSalary() << endl;
	}
}

int main() {
	vector<Person*> list;
	list.push_back(new Person("Joe", 1));
	list.push_back(new Employee("Lin", 2, 100, 1000));
	list.push_back(new Person("Jane", 3));
	list.push_back(new Employee("Lao", 4, 110, 2000));
	list.push_back(new Person("Jim", 5));
	list.push_back(new Person("Jack", 7));
	list.push_back(new Employee("Liz", 6, 120, 3000));
	list.push_back(new Employee("Lou", 8, 130, 4000));

	for (Person* p : list){
		cout << p->ToString() << endl;
	}
	float sum = 0;
	for (Person* p: list){
		Employee* emp = dynamic_cast<Employee*>(p);
		if (emp != nullptr)
			sum += emp->GetSalary();
	}
	cout << sum << endl;

	for (Person* p : list){
		delete p;
	}
	list.clear();
	return 0;
}
