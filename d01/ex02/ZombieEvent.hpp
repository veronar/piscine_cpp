/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:16:06 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 15:16:06 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"
using namespace std;

class ZombieEvent
{
public:
	void setZombieType(Zombie *zombie, string type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump();

private:
};

#endif
