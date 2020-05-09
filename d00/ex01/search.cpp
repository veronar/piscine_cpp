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
	int index;
	string fName_field;
	string lName_field;
	string login_field;

	index = 0;
	if (num_of_contacts < 1)
	{
		cout << "There are no contacts to display, shem." << endl;
		return;
	}

	cout << setw(FIELD_WIDTH);
	cout << "=============================================" << endl;
	cout << "|  Index   |First Name|Last Name | Nickname |" << endl;
	cout << "=============================================" << endl;

	for (int i = 1; i <= num_of_contacts; i++)
	{
		fName_field = contacts[i].getFirstName();
		lName_field = contacts[i].getLastName();
		login_field = contacts[i].getLogin();

		cout << "|" << setw(FIELD_WIDTH) << i;
		fName_field = truncate(fName_field);
		cout << "|" << setw(FIELD_WIDTH) << fName_field;

		lName_field = truncate(lName_field);
		cout << "|" << setw(FIELD_WIDTH) << lName_field;

		login_field = truncate(login_field);
		cout << "|" << setw(FIELD_WIDTH) << login_field;

		cout << "|" << endl;
	}
	cout << "=============================================" << endl;
	cout << "Enter the index number of the contact you would like to see: ";
	cin >> index;
	findContact(contacts, num_of_contacts, index);
	return;
}

void findContact(Contact contacts[], int num_of_contacts, int index)
{
	if (index < 1 || index > num_of_contacts)
	{
		cout << "Obviously that is not valid. Want to try again?" << endl;
		search(contacts, num_of_contacts);
	}
	else
	{
		cout << "=============================================>>" << endl;
		cout << contacts[index].getFirstName() << "| ";
		cout << contacts[index].getLastName() << " | ";
		cout << contacts[index].getNickName() << " | ";
		cout << contacts[index].getLogin() << " | ";
		cout << contacts[index].getPostalAddress() << " | ";
		cout << contacts[index].getEmailAddress() << " | ";
		cout << contacts[index].getPhoneNumber() << " | ";
		cout << contacts[index].getDOB() << " | ";
		cout << contacts[index].getFavMeal() << " | ";
		cout << contacts[index].getUnderwear() << " | ";
		cout << contacts[index].getSecret() << " |" << endl;
		cout << "=============================================>>" << endl;
	}
	return;
}
