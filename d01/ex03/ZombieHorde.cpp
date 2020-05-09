/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 16:14:50 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 16:14:50 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	string names[] = {"crispy", "jerry", "saucy", "golden", "falcon", "hermione", "chips", "broccoli", "alex", "snow white"};

	for (int count = n; count > 0; count--)
	{
		int index = rand() % 10;
		Zombie *chump = new Zombie(names[index]);
		chump->announce();
		delete chump;
	}
}
