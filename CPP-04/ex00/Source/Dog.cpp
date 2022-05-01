#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Charlie";
	cout << "A Dog was born" << endl << endl;
}

Dog::Dog ( const Dog &d ) {
	this->type = d.getType();
	cout << "A Dog cloned from " << d.type << " was born" << endl;
}

Dog::~Dog( void ) {
	cout << "Dog " << type << " died" << endl;
}

Dog	&Dog::operator = ( const Dog &d ) {
	 cout << "Dog will now be the same as " << d.type << endl;
	this->type = d.type;
	return (*this);
}

void	Dog::makeSound() const {
	cout << "Hrrr Hav Hav" << endl;
}

string Dog::getType( void ) const {
	return (type);
}