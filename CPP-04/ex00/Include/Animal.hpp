#pragma once

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Animal
{
public:
	Animal ( void );
	Animal ( const Animal &a );
	virtual ~Animal( void );

	Animal	&operator = ( const Animal &a );
	virtual void makeSound() const;
	string	getType() const;

protected:
	string type;

private:
};

ostream &operator << ( ostream &o, const Animal &a );
