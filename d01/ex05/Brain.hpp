/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:13:41 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 17:13:41 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Brain
{
public:
	Brain();
	void setAddress();
	string getAddress();
	string identify();

private:
	string _address;
};

#endif
