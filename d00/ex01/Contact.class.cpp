#include "phonebook.hpp"

// Setters for field of each contact

void Contact::setFirstName(std::string str)
{
	this->_firstName = str;
	return;
}

void Contact::setLastName(std::string str)
{
	this->_lastName = str;
	return;
}

void Contact::setNickName(std::string str)
{
	this->_nickName = str;
	return;
}

void Contact::setLogin(std::string str)
{
	this->_login = str;
	return;
}

void Contact::setPostalAddress(std::string str)
{
	this->_postalAddress = str;
	return;
}

void Contact::setEmailAddress(std::string str)
{
	this->_emailAddress = str;
	return;
}

void Contact::setPhoneNumber(std::string str)
{
	this->_phoneNumber = str;
	return;
}

void Contact::setDOB(std::string str)
{
	this->_dob = str;
	return;
}

void Contact::setFavMeal(std::string str)
{
	this->_favMeal = str;
	return;
}

void Contact::setUnderwear(std::string str)
{
	this->_underwear = str;
	return;
}

void Contact::setSecret(std::string str)
{
	this->_secret = str;
	return;
}

// getters for contact fields

std::string Contact::getFirstName(void)
{
	return this->_firstName;
}

std::string Contact::getLastName(void)
{
	return this->_lastName;
}

std::string Contact::getNickName(void)
{
	return this->_nickName;
}

std::string Contact::getLogin(void)
{
	return this->_login;
}

std::string Contact::getPostalAddress(void)
{
	return this->_postalAddress;
}

std::string Contact::getEmailAddress(void)
{
	return this->_emailAddress;
}

std::string Contact::getPhoneNumber(void)
{
	return this->_phoneNumber;
}

std::string Contact::getDOB(void)
{
	return this->_dob;
}

std::string Contact::getFavMeal(void)
{
	return this->_favMeal;
}

std::string Contact::getUnderwear(void)
{
	return this->_underwear;
}

std::string Contact::getSecret(void)
{
	return this->_secret;
}
