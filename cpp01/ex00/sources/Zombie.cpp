#include"Zombie.hpp"

Zombie::Zombie(std::string str) : _name(str)
{
	std::cout << _name << " naquit, son existence sera ephemere mais ses degats seront permanent."<< std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << ": \"JE NE PARTIRAIS JAMAIS! CETTE TERRE SERA PURGER DES MINORITE ET DES PAUVRES.\"" << std::endl;
	std::cout << "Ainsi mourru " << _name << " en laissant derriere un monde encore un peu plus malheureux." << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
