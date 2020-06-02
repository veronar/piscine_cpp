/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:38:03 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 17:38:03 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(string str);
	void attack();
	void	setWeapon(Weapon &weapon);

private:
	string _name;
	Weapon *_weapon;
};

#endif
