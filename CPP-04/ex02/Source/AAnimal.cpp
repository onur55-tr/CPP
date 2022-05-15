#include "AAnimal.hpp"

AAnimal::AAnimal ( void ) : type ("AAnimal") {
	cout << "AAnimal " << type << " was born" << endl;
}

AAnimal::AAnimal (const AAnimal &a ){
	cout << "AAnimal cloned from " << a.type << " was born" << endl;
	*this = a;
}

AAnimal::~AAnimal ( void ) {
	cout << "AAnimal " << type << " died." << endl;
}

AAnimal	&AAnimal::operator = ( const AAnimal &a ) {
	cout << "AAnimal " << type << " will now be the same as " << a.type << endl;
	if ( this == &a ) return ( *this );
	type = a.type;
	return ( *this );
}

void	AAnimal::makeSound () const {
	cout << "... generic AAnimal sound ..." << endl << endl;
}

string	AAnimal::getType() const {
	return ( this->type );
}
