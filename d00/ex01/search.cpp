#include "phonebook.hpp"
using namespace std;

void search(Contact contacts[], int num_of_contacts)
{
	if (num_of_contacts < 1)
	{
		cout << "There are no contacts to display, shem." << endl;
		return;
	}
	for (int i = 1; i <= num_of_contacts; i++)
	{
		cout << contacts[i].getFirstName() << " ";
		cout << contacts[i].getLastName() << " ";
		cout << contacts[i].getNickName() << " ";
		cout << contacts[i].getLogin() << " ";
		cout << contacts[i].getPostalAddress() << " ";
		cout << contacts[i].getEmailAddress() << " ";
		cout << contacts[i].getPhoneNumber() << " ";
		cout << contacts[i].getDOB() << " ";
		cout << contacts[i].getFavMeal() << " ";
		cout << contacts[i].getUnderwear() << " ";
		cout << contacts[i].getSecret() << endl;
	}
	return;
}
