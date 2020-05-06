#include "phonebook.hpp"
using namespace std;

// Request info of contact to be added to phonebook

Contact addEntry(void)
{
	Contact newContact;
	std::string buffer;

	cout << "Insert First name: ";
	cin >> buffer;
	newContact.setFirstName(buffer);

	cout << "Insert Last name: ";
	cin >> buffer;
	newContact.setLastName(buffer);

	cout << "Insert Nick name: ";
	cin >> buffer;
	newContact.setNickName(buffer);

	cout << "Insert Login: ";
	cin >> buffer;
	newContact.setLogin(buffer);

	cout << "Insert Postal Address: ";
	cin >> buffer;
	newContact.setPostalAddress(buffer);

	cout << "Insert Email Address: ";
	cin >> buffer;
	newContact.setEmailAddress(buffer);

	cout << "Insert Phone Number: ";
	cin >> buffer;
	newContact.setPhoneNumber(buffer);

	cout << "Insert Birthday: ";
	cin >> buffer;
	newContact.setDOB(buffer);

	cout << "Insert Favourite Meal: ";
	cin >> buffer;
	newContact.setFavMeal(buffer);

	cout << "Insert Underwear Colour: ";
	cin >> buffer;
	newContact.setUnderwear(buffer);

	cout << "Insert Darkest Secret: ";
	cin >> buffer;
	newContact.setSecret(buffer);

	cout << endl
		 << "Thank you. Entry Successfully added" << endl;

	return (newContact);
};
