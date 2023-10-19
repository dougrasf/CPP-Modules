#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap jorginho("Jorginho");
	ClapTrap zezinho("Zezinho");

	
	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	
	
	jorginho.attack("Zezinho");
	zezinho.takeDamage(jorginho.getAttack());
	zezinho.stats();

	jorginho.setAttack(5);
	jorginho.attack("Zezinho");
	zezinho.takeDamage(jorginho.getAttack());
	zezinho.stats();

	return(0);
}
