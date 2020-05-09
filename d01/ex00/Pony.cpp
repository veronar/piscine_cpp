#include "Pony.hpp"
using namespace std;

void Pony::setName(string str)
{
	this->_name = str;
	return;
}

void Pony::setColour(string str)
{
	this->_colour = str;
	return;
}

void Pony::setAge(string str)
{
	this->_age = str;
	return;
}

string Pony::getName()
{
	return this->_name;
}

string Pony::getColour()
{
	return this->_colour;
}

string Pony::getAge()
{
	return this->_age;
}
