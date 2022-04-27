// Created by Onur Dursun on 19.04.2022.
#include "Zombie.hpp"

void Zombie::set_name(string _name)
{
	name_ = _name;
}

void Zombie::annonunce ()
{
	cout << name_ << ": BraiiiiiiinnnzzzZ" << endl;
}

Zombie::~Zombie ()
{
	cout << "[" << name_ << "] " << "die." << endl;
}

