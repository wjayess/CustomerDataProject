#include <iostream>
#include <string>
#include <cstring>
#include "PreferredCustomer.h"

using namespace std;

// Calculates the discount level based on the purchase amount entered.
double CalculateDiscountLevel(double purchasesAmount)
{
	double discountLevel;

	if (purchasesAmount >= 500 && purchasesAmount < 1000)
		discountLevel = .05;
	else if (purchasesAmount >= 1000 && purchasesAmount < 1500)
		discountLevel = .06;
	else if (purchasesAmount >= 1500 && purchasesAmount < 2000)
		discountLevel = .07;
	else if (purchasesAmount >= 2000)
		discountLevel = .1;
	else
		discountLevel = 0;

	return discountLevel;
}

// Copy the entered string to a character array, to be used with the char array member variables
char* StringToCharArray(string inString)
{
	// dynamic array, delete
	char* cstr = nullptr;
	cstr = new char[inString.length() + 1];

	// i love this function, does the copying for us.
	strcpy_s(cstr, inString.length() + 1, inString.c_str());

	// again, returning a DAM. make sure to assign to a variable, and delete said variable
	return cstr;
}

// Main function. Super simple, just ask user for the customer's data, and use the classes member functions to store the data in a reference customer class argument.
bool EnterData(PreferredCustomer &customer)
{
	string firstName;
	string lastName;
	string address;
	string city;
	string state;
	string phone;
	int zip;
	double purchasesAmount;
	int customerNumber;
	bool mailingList;

	cout << "Enter the customer's first name: ";
	cin >> firstName;
	cout << "Enter the customer's last name: ";
	cin >> lastName;
	cout << "Enter the customer's street address: ";
	cin.ignore();
	getline(cin, address);
	cout << "Enter the customer's city: ";
	cin >> city;
	cout << "Enter the customer's state: ";
	cin >> state;
	cout << "Enter the customer's phone number: ";
	cin.ignore();
	getline(cin, phone);
	cout << "Enter the customer's zip: ";
	cin >> zip;
	cout << "Enter the customer's purchases amount: ";
	cin >> purchasesAmount;

	if (purchasesAmount < 0)
	{
		cout << "Please enter a positive value.";

		return true;
	}

	cout << "Does the customer wish to be on the mailing list? (1 or 0): ";
	cin >> mailingList;

	// all of these are dam arrays. delete them
	char* firstNameChar = StringToCharArray(firstName);
	char* lastNameChar = StringToCharArray(lastName);
	char* addressChar = StringToCharArray(address);
	char* cityChar = StringToCharArray(city);
	char* stateChar = StringToCharArray(state);
	char* phoneChar = StringToCharArray(phone);

	customer.SetFirstName(firstNameChar);
	customer.SetLastName(lastNameChar);
	customer.SetAddress(addressChar);
	customer.SetCity(cityChar);
	customer.SetState(stateChar);
	customer.SetPhone(phoneChar);
	customer.SetZip(zip);
	customer.SetPurchasesAmount(purchasesAmount);
	customer.SetDiscountLevel(CalculateDiscountLevel(purchasesAmount));
	customer.SetMailingList(mailingList);

	// boom, memory cleared.
	delete[] firstNameChar;
	delete[] lastNameChar;
	delete[] addressChar;
	delete[] cityChar;
	delete[] stateChar;
	delete[] phoneChar;

	return false;
}

// Use accessor functions to display the customer class's data
void DisplayData(PreferredCustomer customer)
{
	cout << "Customer name is " << customer.GetFirstName() << " " << customer.GetLastName() << endl;
	cout << "Customer address is " << customer.GetAddress() << ", " << customer.GetCity() << ", " << customer.GetState() << ", " << customer.GetZip() << endl;
	cout << "Customer phone number is " << customer.GetPhone() << endl;
	cout << "Customer's purchases amount is " << customer.GetPurchasesAmount() << endl;
	cout << "Customer's discount level is " << customer.GetDiscountLevel() << endl;
	cout << "Customer " << (customer.GetMailingList() ? "is" : "is not") << " on the mailing list";
}