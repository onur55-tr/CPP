#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	type = "WrongCat";
	cout << "A WrongCat was born" << endl << endl;
}

WrongCat::WrongCat ( const WrongCat &d ) {
	type = getType();
	cout << "A WrongCat cloned from " << d.type << " was born" << endl;
}

WrongCat::~WrongCat( void ) {
	cout << "A WrongCat died" << endl;
}

WrongCat	&WrongCat::operator = ( const WrongCat &d ) {
	cout << "WrongCat will now be the same as " << d.type << endl;
	if ( this == &d ) return ( *this );
	type = d.type;
	return ( *this );
}

void	WrongCat::makeSound() const {
	cout << "... generic wrong animal sound ..." << endl << endl;
}

string WrongCat::getType( void ) const {
	return (this->type);
}