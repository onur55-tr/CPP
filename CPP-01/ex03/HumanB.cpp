// Created by Onur Dursun on 20.04.2022.
#include "HumanB.hpp"

HumanB::HumanB ( string _name ): name(_name), weaponType(nullptr)
{
}

void HumanB::setWeapon ( Weapon &_weapon ) {
	weaponType = &_weapon;
}

void HumanB::attack () {
	if (weaponType)
		cout << name << " attacks with his " << weaponType->getType() << endl;
	else
		cout << name <<  " can't attack because they don't have a weapon" << endl;
}

Weapon &HumanB::getWeapon () const {
	return  (*weaponType);
}