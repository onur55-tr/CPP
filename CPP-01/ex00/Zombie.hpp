#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

using	std::cout;
using	std::endl;
using	std::string;

class Zombie
{
public:
	void	announce();
	void	set_name(string _name);
	Zombie(string name_);
	~Zombie();
private:
	string	name_;
};

Zombie	*newZombie( string name );
void	randomChump(string _name );
#endif //ZOMBIE_HPP
