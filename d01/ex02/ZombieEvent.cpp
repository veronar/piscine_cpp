/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:30:40 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 15:30:40 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
using namespace std;

void ZombieEvent::setZombieType(Zombie *zombie, string type)
{
	zombie->setType(type);
	return;
}

Zombie *ZombieEvent::newZombie(string name)
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

Zombie *ZombieEvent::randomChump()
{
	string names[] = {"crispy", "jerry", "saucy", "golden", "falcon", "hermione", "chips", "broccoli", "alex", "snow white"};
	int index = rand() % 10;

	Zombie *rando = newZombie(names[index]);
	rando->announce();
	return (rando);
}
