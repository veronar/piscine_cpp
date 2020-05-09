/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:37:54 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 17:37:54 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
using namespace std;

class Weapon
{
public:
	Weapon(string str);
	void setType(string str);
	string getType();

private:
	string _type;
};

#endif
