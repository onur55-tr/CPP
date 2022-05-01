#include "../Include/ClapTrap.hpp"

ClapTrap::ClapTrap ( void ) : hitPoints(10), energyPoints(10), attackDamage(0){
	cout << "Default Construcor called" << endl;
}
ClapTrap::ClapTrap ( string name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	cout << "Construcor called" << endl;
}
ClapTrap::ClapTrap ( const ClapTrap &a ){
	cout << "Copy constructor called with " << a << endl;
	*this = a;
}
ClapTrap::~ClapTrap( void ){
	cout << "Destructor called" << endl;
}

ClapTrap &ClapTrap::operator = ( const ClapTrap &a){
	if( this == &a)
		return (*this);
	name = a.getName();
	hitPoints = a.getHitPoints();
	energyPoints = a.getEnergyPoints();
	attackDamage = a.getAttackDamage();
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (energyPoints > 0 && hitPoints > 0)
	{
		--energyPoints;
		cout << "[" << name << "]" << " attacks " << target << " causing " << attackDamage << " points of damage!" << endl;
	}
	else
	{
		energyPoints < 1 ? cout << "No more energy." << endl :
		cout << "[" << name << "]" << " died." << endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints < amount)	hitPoints = 0;
	else
		hitPoints -=amount;
	cout << "[" << name << "]"<< " has taken " << amount << " points of damage!" << endl;
}
void ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints > 0 && hitPoints > 0)
	{
		hitPoints + amount < 10 ? hitPoints += amount : hitPoints = 10;
		--energyPoints;
		cout << "[" << name << "]" << " has been repaired by  " << amount << " points. Current Health is " << hitPoints << "." << endl;
	}
	else
	{
		energyPoints < 1 ? cout << "No more energy." << endl : cout << "[" << name << "]" << " died." << endl;
	}
}

ostream &operator<<(ostream &COUT, const ClapTrap &a)
{
	COUT << "[" << a.getName() << "]" << " has" << a.getHitPoints() << " health points, " << a.getEnergyPoints() << " energy, " << a.getAttackDamage() << " attack damage." << endl;
	return  COUT;
}

unsigned  int ClapTrap::getHitPoints() const{ return hitPoints;}
unsigned  int ClapTrap::getEnergyPoints() const{ return  energyPoints;}
unsigned  int ClapTrap::getAttackDamage() const{return  attackDamage;}
const string &ClapTrap::getName() const {return name;}