/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:14:46 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 15:14:46 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
using namespace std;

class Zombie
{
public:
	Zombie(std::string name);
	void announce();
	void setName(string str);
	void setType(string str);
	void setColour(string str);
	string getName();
	string getType();
	string getColour();

private:
	string _name;
	string _type;
	string _colour;
};

#endif
