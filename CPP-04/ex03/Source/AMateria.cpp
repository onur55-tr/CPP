#include "../Include/AMateria.hpp"

AMateria::AMateria ( void ) {}

AMateria::AMateria ( std::string const &type ) : this->type(type) {}

AMateria::AMateria( const AMateria &a ) { *this = a; }

AMateria::~AMateria( void ) {}


AMateria &AMateria::operator=( const AMateria &a ) { type = "";	return  ( *this ); }

std::string const &AMateria::getType() const { return ( type ); }

void AMateria::use( ICharacter &target ) { std::cout << "Materia used on target " << target.getName() << std::endl; }