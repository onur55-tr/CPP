#include "../Include/Zombie.hpp"

void	randomChump(string _name )
{
	Zombie randomChump = Zombie(_name);
	randomChump.announce();
}

