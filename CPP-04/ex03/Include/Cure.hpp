#pragma once

#include "AMateria.hpp"

class Cure : virtual  public AMateria
{
public:
	Cure ( void );
	Cure ( cure const &c );
	virtual ~Cure ( void );

	Cure &operator = ( Cure const &c );
	Cure *clone() const;
 	void use( ICharacter &target );
};