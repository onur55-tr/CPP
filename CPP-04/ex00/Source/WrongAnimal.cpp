#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void ) : type ("Chimera") {
	cout << "WrongAnimal " << type << " was born" << endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal &a ){
	cout << "WrongAnimal cloned from " << a.type << " was born" << endl;
	*this = a;
}

WrongAnimal::~WrongAnimal ( void ) {
	cout << "WrongAnimal " << type << " died." << endl;
}

WrongAnimal	&WrongAnimal::operator = ( const WrongAnimal &a ) {
	cout << "WrongAnimal " << type << " will now be the same as " << a.type << endl;
	if ( this == &a ) return ( *this );
	type = a.type;
	return ( *this );
}

void	WrongAnimal::makeSound () const {
	cout << "... generic wrong animal sound ..." << endl;
}

string	WrongAnimal::getType() const {
	return ( this->type );
}

ostream	&operator << ( ostream &o, const WrongAnimal &i ) {
	o << "I am an WrongAnimal of type: " << i.getType() << endl;
	return ( o );
}
