/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:38:10 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 17:38:10 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string str, Weapon& weapon): _weapon(weapon){
	this->_name = str;
	// this->_weapon = &weapon;
}

void HumanA::attack()
{
	cout << this->_name << " attacks with his " << this->_weapon.getType();
	cout << endl;
}
