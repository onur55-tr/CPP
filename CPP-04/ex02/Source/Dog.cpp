#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Dog";
	this->brain = new Brain;
	cout << "A Dog was born" << endl << endl;
}

Dog::Dog ( const Dog &d ) {
	this->type = d.getType();
	this->brain = new Brain( *(d.brain) );
	cout << "A Dog cloned from " << d.type << " was born" << endl;
}

Dog::~Dog( void ) {
	delete (this->brain);
	cout << "A " << type << " died, his now brainless." << endl;
}

Dog	&Dog::operator = ( const Dog &d ) {
	this->type = d.type;
	cout << "Dog will now be the same as " << d.type << endl;
	if ( this->brain )	delete ( this->brain );
	this->brain = new Brain( *(d.brain) );
	return ( *this );
}

void	Dog::makeSound() const {
	cout << "Hrrr Hav Hav" << endl;
}

string Dog::getType( void ) const {
	return (type);
}

void	Dog::compareTo ( const Dog &other_dog ) const {
	cout << endl;
	cout << "Now comparing two " << this->type << endl;
	cout << "My Brain's heap adress: " << this->brain << endl;
	cout << "Other's heap adress: " << static_cast<void *>( other_dog.brain ) << endl;
	cout << endl;
	cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas" << endl;
	for ( int i = 0; i < 100; i++ )
		cout << "-";
	cout << endl;
	for ( int i = 0; i < 100; i++ )
		cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ( (other_dog.brain)->getIdeas() )[i] << endl;
	cout << endl;
}
