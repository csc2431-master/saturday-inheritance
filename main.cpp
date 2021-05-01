
#include <iostream>
#include "person.h"

using std::cout;
using std::endl;

int main() {
	Person james("James", 7);
	cout << james.GetName() << endl;
	cout << james.GetSSN() << endl;
	cout << james.ToString() << endl;
	return 0;
}
