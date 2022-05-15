#include "Brain.hpp"

Brain::Brain ( void ) {
	ideas = new string[100];
	for ( int i = 0; i < 100; i++ )
		ideas[i] = "Brainy brain";
	cout << "A Brain has been constructed and filled with" << endl;
}

Brain::Brain ( Brain &b ) {
	string	*ref = b.getIdeas();
	ideas = new string[100];
	for ( int i = 0; i < 100; i++ )
		ideas[i] = ref[i] + " stolen";
	cout << "A Brain has been copy constructed and stole the other's ideas" << endl;
}

Brain::~Brain ( void ) {
	delete [] ideas;
	cout << "A brain has been destroyed" << endl;
}

Brain &Brain::operator = ( const Brain &b ) {
	for ( int i = 0; i < 100; i++ )
		ideas[i] = b.ideas[i];
	return ( *this );
}

string	*Brain::getIdeas()
{
	return (this->ideas);
}
