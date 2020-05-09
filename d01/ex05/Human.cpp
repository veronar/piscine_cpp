/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:18:20 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 17:18:20 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain Human::getBrain()
{
	return (this->_brain);
}

string Human::identify()
{
	return (this->_brain.identify());
}
