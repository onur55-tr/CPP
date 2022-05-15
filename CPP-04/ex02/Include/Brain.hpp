#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Brain
{
public:
	Brain ( void );
	Brain ( Brain &b );
	~Brain ( void );

	Brain &operator = ( const Brain &b );
	string	*getIdeas();
private:
	string	*ideas;
};