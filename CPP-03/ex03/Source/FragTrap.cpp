#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& a)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = a;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor of " << getName() << " called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& a)
{
	name = a.getName();
	hitPoints = a.getHitPoints();
	energyPoints = a.getEnergyPoints();
	attackDamage = a.getAttackDamage();
	return *this;
}

unsigned int FragTrap::getHitPoints(void) const
{
	return hitPoints;
}

unsigned int FragTrap::getEnergyPoints(void) const
{
	return energyPoints;
}

unsigned int FragTrap::getAttackDamage(void) const
{
	return attackDamage;
}

void FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap " << name << \
                 " attacks " << target << \
                 ", causing " << attackDamage << \
                 " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	hitPoints = (hitPoints < amount) ? 0 : hitPoints - amount;
	std::cout << "FragTrap " << name << \
                 " took " << amount << \
                 " damage, hit points to " << hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	std::cout << "FragTrap " << name << \
                 " is repaired " << amount << \
                 ", hit points to " << hitPoints << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getName() << " said. Give me a high five! Please!" << std::endl;
}