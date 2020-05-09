/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 14:16:45 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 14:16:45 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>
using namespace std;

class Pony
{
public:
	void setName(std::string str);
	void setColour(std::string str);
	void setAge(std::string str);
	std::string getName();
	std::string getColour();
	std::string getAge();

private:
	std::string _name;
	std::string _colour;
	std::string _age;
};

#endif
