/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:44:14 by vesingh           #+#    #+#             */
/*   Updated: 2020/06/08 14:44:14 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &source);
	FragTrap &operator=(const FragTrap &rhs);

	rangedAttack(std::string const &target);
	meleeAttack(std::string const &target);
	takeDamage(unsigned int amount);
	beRepaired(unsigned int amount);

private:
};

#endif
