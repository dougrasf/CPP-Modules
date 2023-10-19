#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &old);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &old);

		void stats(void);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void		setAttack(const unsigned int amount);
		unsigned int	getAttack(void);
		bool		isAlive(void);
		bool		hasEnergy(void);
		
};

#endif
