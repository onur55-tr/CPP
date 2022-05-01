#pragma once

#include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal {
public:
	WrongCat ( void );
	WrongCat ( const WrongCat &d );
	virtual ~WrongCat( void );

	WrongCat	&operator = ( const WrongCat &d );

	void	makeSound() const;

	string	getType( void ) const;
};

ostream &operator << (ostream &o, const WrongCat &d );