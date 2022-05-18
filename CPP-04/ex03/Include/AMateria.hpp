#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;
private:
	AMateria ( void );
	AMateria ( const AMateria &a );
	virtual ~AMateria ( void );

	AMateria (std::string const &type );

	virtual AMateria &operator = (const AMateria &a );

	std::string  const &getType() const;
	virtual  AMateria* clone() const = 0;
	virtual void use ( ICharacter &target );
};