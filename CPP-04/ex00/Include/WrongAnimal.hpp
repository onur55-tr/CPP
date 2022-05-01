#pragma once

#include "Animal.hpp"

class WrongAnimal{
public:
	WrongAnimal ( void );
	WrongAnimal ( const WrongAnimal &d );
	virtual ~WrongAnimal( void );

	WrongAnimal	&operator = ( const WrongAnimal &d );

	string getType() const;

	void	makeSound() const;
protected:
	string 	type;
};

ostream &operator << (ostream &o, const WrongAnimal &d );