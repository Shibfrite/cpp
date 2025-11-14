#include "DiamondTrap.hpp"
#include "support.hpp"

//constructor
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	_name = name;
	_health = FragTrap::_health;
	_energy = ScavTrap::_energy;
	_attack_damage = FragTrap::_attack_damage;
	print("DiamondTrap-" + name + " was created from default");
}

//copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	_name = other._name;
	_health = other._health;
	_energy = other._energy;
	_attack_damage = other._attack_damage;
	print("DiamondTrap-" + _name + " was created from copy");
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
	print("Heyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy!!");
	print("I am DiamondTrap-" + _name);
	print("also known as; ClapTrap_" + ClapTrap::_name);
}
