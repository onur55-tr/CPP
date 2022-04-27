// Created by Onur Dursun on 20.04.2022.
#include "HumanA.hpp"
#include "Weapon.hpp"
HumanA::HumanA( std::string name, Weapon &weapon ): name(name), weapon(weapon)
{
}

void	HumanA::attack () {
    cout << name << " attacks with his " << weapon.getType() << endl;
}
Weapon &HumanA::getWeapon( void ) const
{
	return  (weapon);
}
#include "HumanA.hpp"
