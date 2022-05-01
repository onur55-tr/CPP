// Created by Onur Dursun on 5/9/22.

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	cout << "Diamond Default Constructor called." << endl;
}

DiamondTrap::DiamondTrap ( string &name ) :  ClapTrap(name + "_clap_name "), _name(name){
	cout << "Diamond Constructor called." << endl;
}

DiamondTrap::DiamondTrap ( const DiamondTrap &a ){
	cout << "Diamond Copy Constructor called." << endl;
	*this = a;
}

DiamondTrap::~DiamondTrap ( void )
{
	cout << "Diamond Destructor called." << endl;
}

DiamondTrap	&DiamondTrap::operator = ( const DiamondTrap &a )
{
	if ( this == &a )	return ( *this );
	_name = a.getName();
	hitPoints = a.getHitPoints();
	energyPoints = a.getEnergyPoints();
	attackDamage = a.getAttackDamage();
	return ( *this );
}

const string &DiamondTrap::getForName ( void ) const{
	return ( _name );
}

void	DiamondTrap::whoAmI()
{
	cout << "My name is " << _name  << ", ClapTrap name is " << this->getName() << endl;
}
