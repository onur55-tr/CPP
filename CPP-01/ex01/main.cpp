// Created by Onur Dursun on 19.04.2022.

#include "Zombie.hpp"

int main()
{
	Zombie	*hord;

	hord = zombieHorde(3, "zombie");
	for (int i = 0; i < 3; i++)
		hord->annonunce();
	delete[] hord;
	return  (0);
}