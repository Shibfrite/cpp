#include "ScavTrap.hpp"
#include "support.hpp"

//constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	print("ScavTrap-" + name + " was created from default");
	_name = name;
	_health = 100;
	_energy = 50;
	_attack_damage = 20;
}

//copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	print("ScavTrap-" + _name + " was created from copy");
	_name = other._name;
	_health = other._health;
	_energy = other._energy;
	_attack_damage = other._attack_damage;
}

//operator
//copy operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        _name = other._name;
        _health = other._health;
        _energy = other._energy;
		_attack_damage = other._attack_damage;
    }
    return (*this);
}

//destructor
ScavTrap::~ScavTrap() {
	print("ScavTrap-" + _name + "just died.");
}

void ScavTrap::attack(const std::string& target) {
	if (!_energy)
	{
		print("ScavTrap-" + _name + " has no energy left");
		return ;
	}
	_energy--;
	print("ScavTrap-" + _name + " attacks " + target + ", causing " + to_str(_attack_damage) + " points of damage!");
}

void	ScavTrap::guardGate(void) {
	print("ScavTrap-" + _name + " is now guarding");
}
