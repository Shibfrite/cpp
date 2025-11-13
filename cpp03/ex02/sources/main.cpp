#include "support.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    print("=== ex02: FragTrap tests start ===");

    print("\n--- stack construction chaining ---");
    ClapTrap base("Clappy");
    ScavTrap scav("Scavy");
    FragTrap frag("Fraggy");

    print("\n--- basic attacks and abilities ---");
    base.attack("target A");
    scav.attack("target B");
    scav.guardGate();
    frag.attack("target C");
    frag.highFivesGuys();

    print("\n--- copy construction and assignment ---");
    FragTrap fragCopy(frag);           // copy-construction: ClapTrap base then FragTrap
    FragTrap fragAssign("TempFrag");
    fragAssign = frag;                 // assignment should copy base and derived state

    print("\n--- polymorphism and virtual destructor test ---");
    ClapTrap* poly1 = new ScavTrap("HeapScav");
    ClapTrap* poly2 = new FragTrap("HeapFrag");
    poly1->attack("intruder 1");
    poly2->attack("intruder 2");
    delete poly1;   // should call ScavTrap::~ScavTrap then ClapTrap::~ClapTrap
    delete poly2;   // should call FragTrap::~FragTrap then ClapTrap::~ClapTrap

    print("\n--- energy depletion and edge cases ---");
    FragTrap drained("DrainedFrag");
    for (int i = 0; i < 105; ++i)
        drained.attack("dummy");      // deplete energy, observe guardrail messages

    print("\n--- damage and repair clamping ---");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.takeDamage(200);             // clamp to zero
    frag.beRepaired(5);               // check repair guard when at 0 or insufficient energy

    print("\n--- mix of types to show construction/destruction order ---");
    {
        ScavTrap s2("ScopedScav");
        FragTrap f2("ScopedFrag");
    } // scoped objects destroyed here: f2, then s2, demonstrating reverse order

    print("\n=== ex02: FragTrap tests end ===");
    return 0;
}
