#ifndef PERSONDATA_H
#define PERSONDATA_H

// Base class of all classes
class PersonData {
private:
	char* firstName;
	char* lastName;
	char* address;
	char* city;
	char* state;
	char* phone;
	int zip;
public:
	// easily inline functions. just set the variables equal to the function arguments. or return the variables
	char* GetFirstName() const { return firstName; }
	char* GetLastName() const { return lastName; }
	char* GetAddress() const { return address; }
	char* GetCity() const { return city; }
	char* GetState() const { return state; }
	char* GetPhone() const { return phone; }
	int GetZip() const { return zip; }

	void SetFirstName(char* inFirstName) { firstName = inFirstName; }
	void SetLastName(char* inLastName) { lastName = inLastName; }
	void SetAddress(char* inAddress) { address = inAddress; }
	void SetCity(char* inCity) { city = inCity; }
	void SetState(char* inState) { state = inState; }
	void SetPhone(char* inPhone) { phone = inPhone; }
	void SetZip(int inZip) { zip = inZip; }
};

#endif