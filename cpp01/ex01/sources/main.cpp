#include"Zombie.hpp"

int main(void)
{
	Zombie *z = newZombie("LePen");
	z->announce();
	randomChump("Le Capitalisme");
	delete z;
	Zombie *horde;
	horde = zombieHorde(8, "les arabes");
	for (int i=0;i<8;i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
