// Created by Onur Dursun on 20.04.2022.
#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA (string _name, Weapon &_tpye);
	void	attack( void );
	Weapon &getWeapon( void ) const;
private:
	string name;
	Weapon &weapon;
};

#endif