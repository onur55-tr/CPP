#include "Zombie.hpp"

void Zombie::set_name ( string _name )
{
	name_ = _name;
}

void	Zombie::announce ()
{
	cout << name_ << ": BraiiiiiiinnnzzzZ" << endl;
}

Zombie::Zombie(string name_): name_(name_)
{

}

Zombie::~Zombie () {
	cout << "[" << name_ << "] " << "die." << endl;
}