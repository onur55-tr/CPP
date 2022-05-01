#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal {
public:
	Dog ( void );
	Dog ( const Dog &d );
	virtual ~Dog( void );

	Dog	&operator = ( const Dog &d );

	void	makeSound() const;

	string	getType( void ) const;

	void	compareTo ( const Dog &other_dog ) const;
private:
	Brain	*brain;
};

ostream &operator << (ostream &o, const Dog &d );