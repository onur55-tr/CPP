#pragma once
#include <iostream>

using	std::cout;
using	std::endl;
using	std::string;
using	std::ostream;

class	ClapTrap
{
protected:
		string			name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

public:
		ClapTrap ( void );
		ClapTrap ( string name );
		ClapTrap ( const ClapTrap &a );
		~ClapTrap( void );

		ClapTrap &operator = ( const ClapTrap &a);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		unsigned  int getHitPoints() const;
		unsigned  int getEnergyPoints() const;
		unsigned  int getAttackDamage() const;
		const string &getName() const;

};

ostream &operator<<(ostream &COUT, const ClapTrap &a);
