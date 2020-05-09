/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:37:43 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 15:37:43 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent base;

	Zombie *test = base.randomChump();

	Zombie *test1 = base.newZombie("mary's little lamb");
	test1->setType("sheep");
	test1->announce();

	Zombie *test2 = base.newZombie("mjolnir");
	test2->setType("hammer");
	test2->setColour("white");
	test2->announce();

	Zombie *test3 = base.randomChump();

	Zombie *test4 = base.newZombie("ms muffet");
	test4->announce();

	delete test;
	delete test1;
	delete test2;
	delete test3;
	delete test4;
	return (0);
}
