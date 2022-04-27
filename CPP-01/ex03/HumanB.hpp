// Created by Onur Dursun on 20.04.2022.
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	string	name;
	Weapon	*weaponType;
public:
	HumanB(string _name);
	void	setWeapon(Weapon &_weapon);
	void	attack( void );
	Weapon &getWeapon ( void ) const;
};

#endif //HUMANB_HPP
