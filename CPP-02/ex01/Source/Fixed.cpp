// Created by Onur Dursun on 4/29/22.

#include "Fixed.hpp"

Fixed::Fixed ( void ): p_value(0) {
	cout << "Default constructor called" << endl;
}

Fixed::Fixed ( int input_value )
{
	cout << "Int constructor called" << endl;
	this->p_value = static_cast<int>(roundf( input_value * ( 1 << point ) ));
}

Fixed::Fixed ( float input_value )
{
	cout << "Float constructor called" << endl;
	floatToFixed ( input_value );
}

Fixed::~Fixed ( void ) {
	cout << "Destructor called" << endl;
}

Fixed::Fixed ( const Fixed &other ) {
	cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed &Fixed::operator = ( const Fixed &other ) {
	cout << "Copy assignment operator called" << endl;
	if (this != &other)
		this->p_value = other.getRawBits();
	return ( *this );
}

int		Fixed::getRawBits ( void ) const {
	return ( this->p_value );
}

void	Fixed::setRawBits ( const int raw ) {
	this->p_value = raw;
}

int		Fixed::toInt ( void ) const {
	return (this->p_value >> this->point);
}

float	Fixed::toFloat ( void ) const {
	return ( fixedToFloat( p_value ) );
}

ostream &operator << (ostream &os, const Fixed &a) {
	return ( os << a.toFloat());
}
