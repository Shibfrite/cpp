#include "FragTrap.hpp"
#include "support.hpp"

//constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	print("FragTrap-" + name + " was created from default");
	_name = name;
	_health = 100;
	_energy = 100;
	_attack_damage = 30;
}

//copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	print("FragTrap-" + _name + " was created from copy");
	_name = other._name;
	_health = other._health;
	_energy = other._energy;
	_attack_damage = other._attack_damage;
}

//operator
//copy operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        _name = other._name;
        _health = other._health;
        _energy = other._energy;
		_attack_damage = other._attack_damage;
    }
    return (*this);
}

//destructor
FragTrap::~FragTrap() {
	print("FragTrap-" + _name + " just died.");
}

void	FragTrap::highFivesGuys(void) {
	print("FragTrap-" + _name + " is requesting a high five");
	print("Request denied");
}
