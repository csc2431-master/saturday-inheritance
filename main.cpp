
#include <iostream>
#include "person.h"
#include "employee.h"

using std::cout;
using std::endl;

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
	Person kate("Kate", 12);
	Employee lou("Lou", 11, 988, 1000);
	Mystic(&kate);
	Mystic(&lou);
	return 0;
}
