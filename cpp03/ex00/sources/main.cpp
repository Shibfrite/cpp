//includes
#include "support.hpp"
#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Alpha");
    ClapTrap b("Bravo");

    a.attack("target1");
    a.takeDamage(3);
    a.beRepaired(5);

    // deplete energy to show checks
    for (int i = 0; i < 11; ++i) a.attack("dummy");

    // damage to zero
    b.takeDamage(12);
    b.beRepaired(2);

    return 0;
}

