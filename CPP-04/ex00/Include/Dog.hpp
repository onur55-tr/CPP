#pragma once

#include "Animal.hpp"

class Dog: virtual public Animal {
public:
	Dog ( void );
	Dog ( const Dog &d );
	virtual ~Dog( void );

	Dog	&operator = ( const Dog &d );

	void	makeSound() const;

	string	getType( void ) const;
};

ostream &operator << (ostream &o, const Dog &d );