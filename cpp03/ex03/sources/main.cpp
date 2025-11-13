#include "support.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    print("=== ex03: DiamondTrap tests ===");

    print("\n-- construction chaining --");
    DiamondTrap d1("Diamo");
    d1.whoAmI();

    print("\n-- attack selection (should use ScavTrap::attack) --");
    d1.attack("intruder");

    print("\n-- inherited abilities --");
    d1.guardGate();
    d1.highFivesGuys();

    print("\n-- damage / repair / edge cases --");
    d1.takeDamage(30);
    d1.beRepaired(15);
    d1.takeDamage(200);

    print("\n-- copy and assignment --");
    DiamondTrap d2(d1);
    DiamondTrap d3("Temp");
    d3 = d1;
    d2.whoAmI();
    d3.whoAmI();

    print("\n-- polymorphic deletion (virtual destructor required) --");
    ClapTrap* p = new DiamondTrap("HeapDia");
    p->attack("target");
    delete p;

    print("\n-- scoped destruction order --");
    {
        DiamondTrap a("A");
        DiamondTrap b("B");
    }

    print("\n=== end ===");
    return 0;
}
