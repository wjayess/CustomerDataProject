#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#include "PersonData.h"

// Inherited from PersonData. base class of PreferredCustomer
class CustomerData : public PersonData {
private:
	int customerNumber;
	bool mailingList;
public:
	int GetCustomerNumber() const { return customerNumber; }
	bool GetMailingList() const { return mailingList; }

	void SetCustomerNumber(int inNumber) { customerNumber = inNumber; }
	void SetMailingList(bool inMailingList) { mailingList = inMailingList; }
};

#endif