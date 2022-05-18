#pragma once

#include "AMateria.hpp"

class Ice : virtual public AMateria
{
public:
	Ice ( void );
	Ice ( Ice const &i );
	virtual ~Ice ( void );

	Ice &operator = ( const Ice &i );
	Ice	*clone() const;
	void  use ( ICharacter &target );
};