#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using	std::cout;
using	std::string;
using	std::endl;

class Fixed
{
public:
		Fixed( void ); //Constructor
		Fixed ( const Fixed &other );
		Fixed &operator = ( const Fixed &other ); // overload
		int		getRawBits ( void ) const;
		void	setRawBits ( const int raw );
		~Fixed(); //deconstructor

private:
	int 				value;
	static const int	fraction = 8;
};

#endif