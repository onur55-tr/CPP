#pragma once

#include "ClapTrap.hpp"

class ScavTrap:
		public ClapTrap
{
public:
	ScavTrap ( void );
	ScavTrap ( string name );
	ScavTrap ( ScavTrap const &a );
	virtual ~ScavTrap( void );

	ScavTrap &operator = ( const ScavTrap &a );

	void	guardGate( void );
	void	attack ( const string &target );

};

ostream	&operator << (ostream &o, const ScavTrap &s );