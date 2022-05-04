#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H

#include "CustomerData.h"

// Inherited from CustomerData
class PreferredCustomer : public CustomerData {
private:
	double purchasesAmount;
	double discountLevel;
public:
	double GetPurchasesAmount() const { return purchasesAmount; }
	double GetDiscountLevel() const { return discountLevel; }

	void SetPurchasesAmount(double inPurchasesAmount) { purchasesAmount = inPurchasesAmount; }
	void SetDiscountLevel(double inDiscountLevel) { discountLevel = inDiscountLevel; }
};

#endif