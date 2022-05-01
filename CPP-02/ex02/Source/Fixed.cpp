// Created by Onur Dursun on 4/29/22.

#include "Fixed.hpp"

Fixed::Fixed ( void ): p_value(0) {
	//cout << "Default constructor called" << endl;
}

Fixed::Fixed ( int input_value ) {
	//cout << "Int constructor called" << endl;
	//this->p_value = static_cast<int>(roundf( input_value * ( 1 << point ) ));
	this->p_value = floatToFixed ( input_value );
}

Fixed::Fixed ( float input_value ) {
	//cout << "Float constructor called" << endl;
	this->p_value = floatToFixed ( input_value );
}

Fixed::~Fixed ( void ) {
	//cout << "Destructor called" << endl;
}

Fixed::Fixed ( const Fixed &other ) {
	//cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed &Fixed::operator = ( const Fixed &other ) {
	//cout << "Copy assignment operator called" << endl;
	//if (this != &other)
	this->p_value = other.getRawBits();
	return ( *this );
}

bool	Fixed::operator == ( const Fixed &other) const {
	return ( p_value == other.getRawBits() );
}

bool	Fixed::operator != ( const Fixed &other) const {
	return !( *this == other );
}

bool	Fixed::operator < ( const Fixed &other) const {
	return ( p_value < other.getRawBits() );
}

bool	Fixed::operator > ( const Fixed &other) const {
	return !( *this < other );
}

bool	Fixed::operator <= ( const Fixed &other) const {
	return !( *this < other );
}

bool	Fixed::operator >= ( const Fixed &other) const {
	return ( other <= *this );
}

/*
 * Why "Constant a;" do i use?
 * The answer is an error as the "other" type is const.
 * If you remove const, the error will be fixed. So do you want to use const?
 */
Fixed	Fixed::operator + ( const Fixed &other ) const {
	Fixed	a;

	a.setRawBits ( p_value + other.getRawBits() );
	return ( other );
}

Fixed	Fixed::operator - ( const Fixed &other ) const {
	Fixed	a;

	a.setRawBits( p_value - other.getRawBits() );
	return ( a );
}

Fixed	Fixed::operator * ( const Fixed &other ) const {
	 Fixed	a;
	long	new_value = p_value;

	new_value *= other.getRawBits();
	new_value >>= point;
	a.setRawBits(static_cast<int>(new_value));
	return ( a );
}

Fixed	Fixed::operator / ( const Fixed &other ) const {
	Fixed	a;
	long new_value = p_value;

	new_value <<= point;
	if (a.getRawBits () == 0)
	{
		cerr << "division by zero is undefined" << endl;
		exit (1);
	}
	new_value /= other.getRawBits();
	a.setRawBits(static_cast<int>(new_value));
	return (other);
}

Fixed	Fixed::operator++ ( int )
{
	Fixed	ret (*this );
	++*this;
	return ( ret );
}

Fixed	&Fixed::operator++ ()
{
	++p_value;
	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed ret(*this);
	--*this;
	return ret;
}
Fixed	&Fixed::operator-- ()
{
	--p_value;
	return ( *this );
}

int		Fixed::getRawBits ( void ) const {
	//cout << "getRawBits member function called" << endl;
	return ( this->p_value );
}

void	Fixed::setRawBits ( const int raw ) {
	//cout << "setRawBit member function called" << endl;
	this->p_value = raw;
}

int		Fixed::toInt ( void ) const {
	return ( this->p_value >> this->point );
}

float	Fixed::toFloat ( void ) const {
	return ( fixedToFloat( this->p_value ) );
}

ostream	&operator << (ostream &os, const Fixed &a)
{
	return ( os << a.toFloat() );
}

Fixed	&Fixed::min ( Fixed &a, Fixed &b )
{
	return (a <= b ? a : b);
}

Fixed	&Fixed::max ( Fixed &a, Fixed &b )
{
	return (a >= b ? a : b);
}

const Fixed	&Fixed::min ( Fixed &a, Fixed &b )
{
	return (a <= b ? a : b);
}

const Fixed	&Fixed::max ( Fixed &a, Fixed &b )
{
	return (a >= b ? a : b);
}