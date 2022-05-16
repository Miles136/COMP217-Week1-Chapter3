#include <iostream>
#include "Account.h"

using namespace std;

int main() {

	Account account1{ "Billy" }; // Testing the new explicit single-parameter constructor
	Account account2{ "Tommy" };

	cout << "account1 name is: " << account1.getName() << endl;
	cout << "account2 name is: " << account2.getName() << endl;

}