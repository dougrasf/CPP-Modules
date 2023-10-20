#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = old;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &old)
{
	std::cout << "Copy assignment operator called!" << std::endl;
	if (this != &old)
	{
		this->_name = old._name;
		this->hitPoints = old.hitPoints;
		this->energyPoints = old.energyPoints;
		this->attackDamage = old.attackDamage;
	}
	return(*this);
}

bool ClapTrap::hasEnergy(void)
{
	if(energyPoints > 0)
		return(true);
	std::cout << _name << ": Insufficient energy points." << std::endl;
	return(false);
}

bool ClapTrap::isAlive(void)
{
	if(hitPoints > 0)
		return(true);
	std::cout << _name << ": Is dead." << std::endl;
	return(false);
}

void ClapTrap::setAttack(const unsigned int amount)
{
	if(!isAlive())
		return; 
	attackDamage = amount; 
	std::cout << _name << " receive " 
		  << amount << " points of Attack Damage."
		  << std::endl;
}

unsigned int ClapTrap::getAttack(void){ return(attackDamage); }

void ClapTrap::stats(void)
{
	std::cout << "name: " << _name << std::endl;
	std::cout << "hitPoints: " << hitPoints << std::endl;
	std::cout << "energyPoints: " << energyPoints << std::endl;
	std::cout << "attackDamage: " << attackDamage << std::endl;	
	std::cout << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if(!hasEnergy())
		return;
	if(!isAlive())
		return;
	std::cout << "ClapTrap " << _name << " attacks " << target 
			  << ", causing " << attackDamage << " points of damage!"
			  << std::endl;
	energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{ 
	if(hitPoints <= 0)
	{
		std::cout << "A corpse can not receive any attack damage.";
		return;
	}
	hitPoints -= amount; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(!hasEnergy())
		return;
	if(!isAlive())
		return;
	hitPoints += amount; 
	energyPoints -= 1;
}