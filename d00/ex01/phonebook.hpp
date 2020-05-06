
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>

const int MAX_CONTACTS = 8;

class Contact
{
public:
	void setFirstName(std::string);
	void setLastName(std::string);
	void setNickName(std::string);
	void setLogin(std::string);
	void setPostalAddress(std::string);
	void setEmailAddress(std::string);
	void setPhoneNumber(std::string);
	void setDOB(std::string);
	void setFavMeal(std::string);
	void setUnderwear(std::string);
	void setSecret(std::string);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);
	std::string getLogin(void);
	std::string getPostalAddress(void);
	std::string getEmailAddress(void);
	std::string getPhoneNumber(void);
	std::string getDOB(void);
	std::string getFavMeal(void);
	std::string getUnderwear(void);
	std::string getSecret(void);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _login;
	std::string _postalAddress;
	std::string _emailAddress;
	std::string _phoneNumber;
	std::string _dob;
	std::string _favMeal;
	std::string _underwear;
	std::string _secret;
};

Contact	addEntry(void);

#endif
