#include "DiamondTrap.hpp"
#include "support.hpp"

//constructor
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	print("DiamondTrap-" + name + " was created from default");
	_name = name;
	_health = 100;
	_energy = 100;
	_attack_damage = 30;
}

//copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	print("DiamondTrap-" + _name + " was created from copy");
	_name = other._name;
	_health = other._health;
	_energy = other._energy;
	_attack_damage = other._attack_damage;
}

//operator
//copy operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        _name = other._name;
        _health = other._health;
        _energy = other._energy;
		_attack_damage = other._attack_damage;
    }
    return (*this);
}

//destructor
DiamondTrap::~DiamondTrap() {
	print("DiamondTrap-" + _name + " just died.");
}

void	DiamondTrap::whoAmI(void) {
	print("DiamondTrap-" + _name + " is requesting a high five");
}
