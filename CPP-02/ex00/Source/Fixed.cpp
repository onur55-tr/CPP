#include "Fixed.hpp"

Fixed::Fixed ( void ): value(0) {
	cout << "Default constructor called" << endl;
}

Fixed::Fixed ( const Fixed &other ) {
	cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed::~Fixed( void ) {
	cout << "Destructor called" << endl;
}

Fixed &Fixed::operator = ( const Fixed &other ) {
	cout << "Copy assignment operator called" << endl;
	if (this != &other)
		this->value = other.getRawBits();
	return ( *this );
}

int	Fixed::getRawBits ( void ) const {
	cout << "getRawBits member function called" << endl;
	return ( this->value );
}

void	Fixed::setRawBits ( const int raw ) {
	cout << "setRawBit member function called" << endl;
	this->value = raw;
}
