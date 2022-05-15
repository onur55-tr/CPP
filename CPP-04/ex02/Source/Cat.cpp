#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	this->brain = new Brain;
	cout << "A Cat was born" << endl << endl;
}

Cat::Cat ( const Cat &c ) {
	this->type = c.getType();
	this->brain = new Brain( *(c.brain) );
	cout << "A " << c.type << " was constructed from copy, but has a brain on its own" << endl;
}

Cat::~Cat( void ) {
	delete	(this->brain);
	cout << "A " << type << " died, his now brainless." << endl;
}

Cat	&Cat::operator = ( Cat const &c ) {
	type = c.type;
	cout << "Cat will now be the same as " << c.type << endl;
	if ( this->brain )	delete ( this->brain );
	this->brain = new Brain ( *(c.brain) );
	return ( *this );
}

void	Cat::makeSound() const {
	cout << "Meooooooow" << endl;
}

string Cat::getType( void ) const {
	return (this->type);
}

void	Cat::compareTo ( const Cat &other_cat ) const {
	cout << endl;
	cout << "Now comparing two " << this->type << endl;
	cout << "My Brain's heap adress: " << this->brain << endl;
	cout << "Other's heap adress: " << other_cat.brain << endl;
	cout << endl;
	cout << "My brain's ideas \t | \t\t Other brain's ideas" << endl;
	for ( int i = 0; i < 100; i++ )
		cout << "-";
	cout << endl;
	for ( int i = 0; i < 100; i++ )
		cout << ((this->brain)->getIdeas())[i] << "\t\t | \t\t" << ( (other_cat.brain)->getIdeas() )[i] << endl;
	cout << endl;
}
