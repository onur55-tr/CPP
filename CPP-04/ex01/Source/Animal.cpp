#include "Animal.hpp"

Animal::Animal ( void ) : type ("Chimera") {
	cout << "Animal " << type << " was born" << endl;
}

Animal::Animal (const Animal &a ){
	cout << "Animal cloned from " << a.type << " was born" << endl;
	*this = a;
}

Animal::~Animal ( void ) {
	cout << "Animal " << type << " died." << endl;
}

Animal	&Animal::operator = ( const Animal &a ) {
	cout << "Animal " << type << " will now be the same as " << a.type << endl;
	if ( this == &a ) return ( *this );
	type = a.type;
	return ( *this );
}

void	Animal::makeSound () const {
	cout << "... generic animal sound ..." << endl << endl;
}

string	Animal::getType() const {
	return ( this->type );
}
