// Created by Onur Dursun on 20.04.2022.
#include "Weapon.hpp"

Weapon::Weapon ( string _name ) {
	weapon_ = _name;
}

void Weapon::setType ( string _name ) {
	weapon_ = _name;
}

string Weapon::getType () {
	return  (weapon_);
}
