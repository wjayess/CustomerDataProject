// William Smith, CISP 1020, Inheritance Program, 04/06/2022

// This program allows users to enter data about a customer, and then displays said information, which is stored within the customer class

#include "PreferredCustomer.h"
#include "functions.h"

// trying to limit how much code is within the actual main function
int main()
{
	bool error = false;
	PreferredCustomer customer;

	// EnterData returns whether or not an error happened, if it throws an "error", it ends the program.
	error = EnterData(customer);
	
	// if it doesnt, it continues to display the data entered
	if (!error)
		DisplayData(customer);
}