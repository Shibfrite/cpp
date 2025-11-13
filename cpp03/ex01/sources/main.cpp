#include "support.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    print("=== stack construction ===");
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");

    print("\n=== basic actions ===");
    clap.attack("a dummy");
    scav.attack("a training bot");
    scav.guardGate();

    print("\n=== copy and assignment ===");
    ScavTrap scavCopy(scav);          // copy-construction
    ScavTrap scavAssigned("Temp");    
    scavAssigned = scav;              // assignment

    print("\n=== polymorphic deletion (tests virtual dtor) ===");
    ClapTrap* poly = new ScavTrap("HeapScav");
    poly->attack("an intruder");
    delete poly;                      // must call ScavTrap::~ScavTrap then ClapTrap::~ClapTrap

    print("\n=== energy depletion ===");
    ScavTrap tired("Tired");
    for (int i = 0; i < 55; ++i)
        tired.attack("target");       // depletes energy, shows guardrail messages

    print("\n=== damage and repair ===");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.takeDamage(200);             // should clamp to 0
    scav.beRepaired(5);               // check repair guards

    print("\n=== end of main (destruction order visible) ===");
    return 0;
}
