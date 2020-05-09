/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:38:05 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 17:38:05 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string str)
{
	this->_name = str;
	this->_weapon.setType("unknown");
}

void HumanB::attack()
{
	cout << this->_name << " attacks with his " << this->_weapon.getType();
	cout << endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}
