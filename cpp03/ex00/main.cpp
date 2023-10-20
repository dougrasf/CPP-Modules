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
	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	
	
	jorginho.setAttack(10);
	jorginho.attack("Zezinho");
	zezinho.takeDamage(jorginho.getAttack());
	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	

	jorginho.attack("Zezinho");
	zezinho.takeDamage(jorginho.getAttack());
	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	
	
	zezinho.attack("Jorginho");
	
	return(0);
}
