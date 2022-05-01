// Created by Onur Dursun on 5/9/22.

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void ){
	cout << "ScavTrap Default Constructor called." << endl;
}

ScavTrap::ScavTrap ( string name ): ClapTrap(name){
	cout << "ScavTrap Constructor called." << endl;
}

ScavTrap::ScavTrap ( const ScavTrap &a ){
	cout << "ScavTrap Copy Constructor called with " << a << endl;
	*this = a;
}

ScavTrap::~ScavTrap ( void ){
	cout << "ScavTrap Destructor called." << endl;
}

ScavTrap	&ScavTrap::operator = ( const ScavTrap &a){
	if (this == &a)	return (*this);
	this->name = a.getName();
	this->hitPoints = a.getHitPoints();
	this->energyPoints = a.getEnergyPoints();
	this->attackDamage = a.getAttackDamage();
	return ( *this );
}

ostream	&operator << (ostream &o, const ScavTrap &s ){
	o << "[" << s.getName() << "]" << " has " << s.getHitPoints() << " healt points, " << s.getEnergyPoints() << " energy, " << s.getAttackDamage() << " attack damage." << endl;
	return  (o);
}

void	ScavTrap::attack ( string const &target ){
	if ( getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		this->energyPoints = getEnergyPoints() - 1;
		cout << "[" << getName() << " attack " << target << " causing " << attackDamage << " points of damage!" << endl;
	}
	else
		getEnergyPoints() < 1 ? cout << "No more energy. Cannot attack." << endl : cout << getName() << " died. Cannot attack." << endl;
}
