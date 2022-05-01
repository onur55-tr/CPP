#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Mira";
	cout << "A Cat was born" << endl << endl;
}

Cat::Cat ( const Cat &c ) {
	this->type = c.getType();
	cout << "A Cat cloned from " << c.type << " was born" << endl;
}

Cat::~Cat( void ) {
	cout << "Cat " << type << " died" << endl;
}

Cat	&Cat::operator = ( Cat const &c ) {
	cout << "Cat will now be the same as " << c.type << endl;
	type = c.type;
	return ( *this );
}

void	Cat::makeSound() const {
	cout << "Meooooooow" << endl;
}

string Cat::getType( void ) const {
	return (this->type);
}