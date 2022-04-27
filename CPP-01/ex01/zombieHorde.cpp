// Created by Onur Dursun on 19.04.2022.
#include "Zombie.hpp"

Zombie	*zombieHorde( int number, string name)
{
	Zombie *zombieHorde = new Zombie[number];
	for (int i = 0; i < number; i++)
		zombieHorde[i].set_name (name);
	return  (zombieHorde);
}
