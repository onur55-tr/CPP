#pragma once

#include "Animal.hpp"

class Cat: virtual public Animal {
public:
	Cat ( void );
	Cat ( const Cat &c);
	virtual ~Cat( void );

	Cat		&operator = ( Cat const &c );

	void	makeSound() const;

	string	getType( void ) const;
private:
	//string	type;
};

//ostream &operator << (ostream &os, const Cat &c );