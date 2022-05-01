#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: virtual public Animal {
public:
	Cat ( void );
	Cat ( const Cat &c);
	virtual ~Cat( void );

	Cat		&operator = ( Cat const &c );

	void	makeSound() const;

	string	getType( void ) const;

	void	compareTo ( const Cat &other_cat ) const;
private:
	Brain	*brain;
};

//ostream &operator << (ostream &os, const Cat &c );