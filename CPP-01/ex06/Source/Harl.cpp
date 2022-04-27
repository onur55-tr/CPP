// Created by Onur Dursun on 4/27/22.

#include "../Include/Harl.hpp"

void	Harl::complain( string level ) {
	void (Harl::*complaint[LEVEL])( void ) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};
	string	complainLevel[LEVEL] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		void (Harl::*select)( void ) = complaint[i];
		if ( level == complainLevel[i] )
			(this->*select)();
	}
}

void	Harl::debug( void ) {
	cout << "[DEBUG]" << endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << endl;
}

void	Harl::info( void ) {
	cout << "[INFO]" << endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void	Harl::warning( void ) {
	cout << "[WARNING]" << endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}
void	Harl::error( void ) {
	cout << "[ERROR]" << endl << "This is unacceptable! I want to speak to the manager now." << endl;
}
