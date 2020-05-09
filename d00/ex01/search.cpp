/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 10:53:58 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 10:53:58 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
using namespace std;

string truncate(string str)
{
	if (str.length() > FIELD_WIDTH)
		return str.substr(0, (FIELD_WIDTH - 1)) + ".";
	else
		return str;
}

void search(Contact contacts[], int num_of_contacts)
{
	string fName_field;
	string lName_field;
	string nick_field;

	if (num_of_contacts < 1)
	{
		cout << "There are no contacts to display, shem.\n"
			 << endl;
		return;
	}

	cout << setw(FIELD_WIDTH);
	cout << "=============================================" << endl;
	cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
	cout << "=============================================" << endl;

	for (int i = 1; i <= num_of_contacts; i++)
	{
		fName_field = contacts[i].getFirstName();
		lName_field = contacts[i].getLastName();
		nick_field = contacts[i].getNickName();

		cout << "|" << setw(FIELD_WIDTH) << i;
		fName_field = truncate(fName_field);
		cout << "|" << setw(FIELD_WIDTH) << fName_field;

		lName_field = truncate(lName_field);
		cout << "|" << setw(FIELD_WIDTH) << lName_field;

		nick_field = truncate(nick_field);
		cout << "|" << setw(FIELD_WIDTH) << nick_field;

		cout << "|" << endl;
	}
	cout << "=============================================" << endl;
	findContact(contacts, num_of_contacts);
}

void findContact(Contact contacts[], int num_of_contacts)
{
	int index;

	cout << "Enter the index number of the contact you would like to see: ";
	cin >> index;
	cout << endl;

	if (cin.good() && (index > 0 && index <= num_of_contacts))
	{
		cout << "=============================================>>" << endl;
		cout << "First Name: " << contacts[index].getFirstName() << endl;
		cout << "Last Name: " << contacts[index].getLastName() << endl;
		cout << "Nick Name: " << contacts[index].getNickName() << endl;
		cout << "Login: " << contacts[index].getLogin() << endl;
		cout << "Postal Address: " << contacts[index].getPostalAddress() << endl;
		cout << "Email Address: " << contacts[index].getEmailAddress() << endl;
		cout << "Phone Number: " << contacts[index].getPhoneNumber() << endl;
		cout << "Birthday: " << contacts[index].getDOB() << endl;
		cout << "Favourite Meal: " << contacts[index].getFavMeal() << endl;
		cout << "Underwear Colour: " << contacts[index].getUnderwear() << endl;
		cout << "Darkest Secret: " << contacts[index].getSecret() << endl;
		cout << "=============================================>>" << endl;
	}
	else
	{
		cin.clear();
		cout << "That entry could not be found. Want to try again?" << endl;
		search(contacts, num_of_contacts);
	}
}
