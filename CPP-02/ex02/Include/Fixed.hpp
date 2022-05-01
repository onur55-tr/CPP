// Created by Onur Dursun on 4/29/22.

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <climits>
# include <cmath>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::cerr;
using std::exit;
using std::roundf;

# define floatToFixed( x ) ( x * ( 1 << point ))
# define fixedToFloat( x ) (( float ) x / ( float )( 1 << point ))

class Fixed
{
private:
	static const int	point = 8;
	int					p_value;
public:
	Fixed ( void );
	Fixed ( int input_value );
	Fixed ( float input_value );
	Fixed ( const Fixed &other);
	~Fixed ( void );

	Fixed 			&operator = ( const Fixed &other );

	bool			operator == ( const Fixed &other ) const;
	bool			operator != ( const Fixed &other ) const;
	bool			operator < ( const Fixed &other ) const;
	bool			operator > ( const Fixed &other ) const;
	bool			operator <= ( const Fixed &other ) const;
	bool			operator >= ( const Fixed &other ) const;

	Fixed			operator + ( const Fixed &other ) const;
	Fixed			operator - ( const Fixed &other ) const;
	Fixed			operator / ( const Fixed &other ) const;
	Fixed			operator * ( const Fixed &other ) const;

	Fixed			&operator++ ();
	Fixed			operator++ ( int );
	Fixed			&operator-- ();
	Fixed 			operator-- ( int );

	int 			getRawBits ( void ) const;
	void			setRawBits (const int raw );

	float			toFloat ( void ) const;
	int				toInt ( void ) const;

	static			Fixed &min(Fixed& a, Fixed& b);
	static			Fixed &max(Fixed& a, Fixed& b);
	static const	Fixed &max(const Fixed& a, const Fixed& b);
	static const	Fixed &min(const Fixed& a, const Fixed& b);

};

ostream &operator << (ostream &os, const Fixed &other);

#endif //FIXED_HPP