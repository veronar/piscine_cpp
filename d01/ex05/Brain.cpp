/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:14:53 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 17:14:53 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->setAddress();
}

void Brain::setAddress()
{
	std::stringstream buff;

	buff << this;
	this->_address = buff.str();
}

string Brain::identify()
{
	return this->_address;
}
