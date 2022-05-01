#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap :  public virtual ScavTrap, public virtual FragTrap
{
private:
	string	_name;
	using FragTrap::hitPoints;
	using ScavTrap::energyPoints;
	using FragTrap::attackDamage;
public:
	DiamondTrap ( void );
	DiamondTrap ( string &name );
	DiamondTrap (const DiamondTrap &a );
	~DiamondTrap ( void );

	DiamondTrap		&operator = ( DiamondTrap const &a );
	const string	&getForName ( void ) const;
	void		whoAmI ();

	using ScavTrap::attack;
};

ostream &operator << (ostream &o, const DiamondTrap &i );
