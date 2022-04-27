// Created by Onur Dursun on 19.04.2022.
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

using	std::cout;
using	std::string;
using	std::endl;

class Zombie
{
public:
	void	set_name(string _name);
	void	annonunce();
	~Zombie();
private:
	string name_;
};

Zombie	*zombieHorde( int number, string name);
#endif //ZOMBIE_HPP
