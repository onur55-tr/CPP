#pragma once

#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
public:
	Character ( void );
	Character ( std::string const &name );
	Character ( Character const &src );
	virtual ~Character ( void );

	Character &operator = (Character const &src );

	std::string const &getName() const;
	void	equip( AMateria *m );
	void	unequip ( int idx );
	void	use ( int idx, ICharacter &target );
private:
	AMateria *materia[4];
	std::string	name;
};

void	AddFloor ( AMateria *item );