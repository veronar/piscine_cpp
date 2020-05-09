/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:19:51 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 15:19:51 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using namespace std;

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return;
}

void Zombie::announce()
{
	cout << "<" << this->_name << " (" << this->_type << ")> "
		 << " Braiiiiiiinnnssss...";
}

void Zombie::setType(string str)
{
	this->_type;
	return;
}

void Zombie::setColour(string str)
{
	this->_colour;
	return;
}

string Zombie::getName()
{
	return this->_name;
}

string Zombie::getType()
{
	return this->_type;
}

string Zombie::getColour()
{
	return this->_colour;
}
