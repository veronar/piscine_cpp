/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:37:58 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 17:37:58 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string str)
{
	this->_type = str;
}

void Weapon::setType(string str)
{
	this->_type = str;
	return;
}

string& Weapon::getType()
{
	return this->_type;
}
