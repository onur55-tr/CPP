// Created by Onur Dursun on 4/27/22.

#include "../Include/Harl.hpp"

int main (int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		cerr << "Wrong argument" << endl;
		exit (1);
	}
	string	str;
	string	level_list[LEVEL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	str = argv[1];
	for (int i = 0; i < 4; ++i)
		if (str == level_list[i])
			break ;
	int i = std::find(level_list, level_list + 4, argv[1]) - level_list;
	switch ( i ) {
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		case 4:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
		}
	return (0);
}