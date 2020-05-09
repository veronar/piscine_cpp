/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 16:19:09 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 16:19:09 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		ZombieHorde *base = new ZombieHorde(rand() % 15);
		delete base;
	}
	else if (ac == 2)
	{
		ZombieHorde *base = new ZombieHorde(stoi(av[1]));
		delete base;
	}
	return (0);
}
