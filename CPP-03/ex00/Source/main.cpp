#include "../Include/ClapTrap.hpp"

int main(){
	ClapTrap a("Frans Kafka");
	a.attack("Metroid");
	a.takeDamage(9);
	std::cout << a;
	a.beRepaired(10);

	a.takeDamage(10);
	std::cout << a;
	a.attack("Metroid");

	return (0);


}
