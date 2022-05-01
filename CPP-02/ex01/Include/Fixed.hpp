// Created by Onur Dursun on 4/29/22.

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <climits>
#include <cmath>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::roundf;

# define floatToFixed(x) (x * (float)(1 << point))
# define fixedToFloat(x) ((float)x / (float)(1 << point))

class Fixed
{
private:
	static const int	point = 8;
	int					value;
public:
	Fixed ( void );
	Fixed ( int input_value );
	Fixed ( float input_value );
	Fixed ( const Fixed &a);
	~Fixed ( void );

	Fixed &operator = ( const Fixed &a);

	int 	getRawBits ( void ) const;
	void	setRawBits (const int raw );

	float	toFloat ( void ) const;
	int		toInt ( void ) const;
};

ostream &operator << (ostream &os, const Fixed &a);

#endif //FIXED_HPP
