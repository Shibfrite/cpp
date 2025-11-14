//includes
#include "support.hpp"
#include "ClapTrap.hpp"

int main()
{
	//Creation
    ClapTrap a("Alpha");
    ClapTrap b("Bravo");

	//check functions
    a.attack("target1");
    a.takeDamage(3);
    a.beRepaired(5);

	//check copy has modified values
	ClapTrap c = a;
    c.takeDamage(10);
    c.takeDamage(2);

    // deplete energy to show checks
    for (int i = 0; i < 11; ++i) a.attack("dummy");

    //damage to zero
    b.takeDamage(11);
	//check death
	b.attack("dummy");
    b.beRepaired(2);

    return 0;
}

