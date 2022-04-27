#include "Zombie.hpp"

int main()
{
	cout << "Creating the first Zombie, Robert, \"manually\"" << endl;
	{
		Zombie robert("robert");
		robert.announce();
	}
	cout << "Creating the second Zombie, george, \"manually\"" << endl;
	{
		Zombie *george = newZombie ("george");
		george->announce();
		delete george;
	};
	cout << "Creating the third Zombie, mark, \"manually\"" << endl;
		randomChump("Mark");
}