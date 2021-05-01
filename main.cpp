
#include <iostream>
#include "person.h"
#include "employee.h"

using std::cout;
using std::endl;

int main() {
	Person kate("Kate", 12);
	Employee lou("Lou", 11, 988, 1000);
	cout << kate.ToString() << endl;
	cout << lou.ToString() << endl;
	return 0;
}
