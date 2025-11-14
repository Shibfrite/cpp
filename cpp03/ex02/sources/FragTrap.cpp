#include "FragTrap.hpp"
#include "support.hpp"

//constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	_name = name;
	_health = 100;
	_energy = 100;
	_attack_damage = 30;
	print("FragTrap-" + name + " was created from default");
}

//copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	_name = other._name;
	_health = other._health;
	_energy = other._energy;
	_attack_damage = other._attack_damage;
	print("FragTrap-" + _name + " was created from copy");
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
