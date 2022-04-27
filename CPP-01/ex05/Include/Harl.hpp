// Created by Onur Dursun on 4/27/22.

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

using   std::cout;
using   std::string;
using	std::endl;

class Harl
{
private:
	void	debug ( void );
	void	info ( void );
	void	warning ( void );
	void	error ( void );
public:
	void	complain ( string level );
};

#endif //HARL_HPP
