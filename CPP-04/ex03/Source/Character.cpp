#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character ( void )
{
	unsigned  int i = - 1;

	while (++i < 4)
		materia[i] = 0;
}

Character::Character ( std::string const &name ) : this->name ( name )
{
	unsigned  int i = - 1;

	std::cout << name << " Character created" << std::endl;

	while (++i < 4)
		materia[i] = 0;
}

Character::Character ( const Character &src ) { *this = src; }

Character::~Character ( void )
{
	for ( unsigned int i = 0; i < 4; i++ )
		if ( materia[i] != 0)
			delete ( materia[i] );
}