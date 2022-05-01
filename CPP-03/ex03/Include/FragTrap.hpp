#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	unsigned int	hitPoints;
	unsigned int	EnergyPoints;
	unsigned int	attackDamage;

public:
	FragTrap ( void );
	FragTrap ( const string &name );
	FragTrap ( const FragTrap &a );
	virtual ~FragTrap ( void );

	FragTrap &operator = ( const FragTrap &a );
	unsigned int	getHitPoints ( void ) const;
	unsigned int	getEnergyPoints ( void ) const;
	unsigned int	getAttackDamage ( void ) const;

	void	attack ( const string &target );
	void	takeDamage ( unsigned  int amount );
	void	beRepaired ( unsigned  int amount );
	void	highFivesGuys ( void );
};