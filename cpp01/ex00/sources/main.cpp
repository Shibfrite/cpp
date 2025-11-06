#include"Zombie.hpp"

int main(void)
{
	Zombie *z = newZombie("LePen");
	z->announce();
	randomChump("Le Capitalisme");
	delete z;
	return (0);
}
