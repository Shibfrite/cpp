#include "ClapTrap.hpp"
#include "support.hpp"

//constructor
ClapTrap::ClapTrap(const std::string& name) : _name(name), _health(CLAPTRAP_HP), _energy(CLAPTRAP_EP), _attack_damage(CLAPTRAP_AD) {
	print("ClapTrap-" + name + " was created");
}

//copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _health(other._health),	_energy(other._energy), _attack_damage(other._attack_damage) {
}

//operator
//copy operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _health = other._health;
        _energy = other._energy;
    }
    return *this;
}

//destructor
ClapTrap::~ClapTrap() {
	print("ClapTrap-" + _name + " just died.");
}

void ClapTrap::attack(const std::string& target) {
	if (!_energy)
	{
		print("ClapTrap-" + _name + " has no energy left");
		return ;
	}
	if (!_health)
	{
		print("ClapTrap-" + _name + "is already disassembled");
		return ;
	}
	_energy--;
	print("ClapTrap-" + _name + " attacks " + target + ", causing " + to_str(_attack_damage) + " points of damage!");
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!_health)
	{
		print("ClapTrap-" + _name + " is already disassembled");
		return ;
	}
	print("ClapTrap-" + _name + " loses " + to_str(amount) + " points of health!");
	_health = (amount > static_cast<unsigned int>(_health))? 0 : _health - amount;
	if (!_health)
		print("ClapTrap-" + _name + " just got disassembled");
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!_energy)
	{
		print("ClapTrap-" + _name + " has no energy left");
		return ;
	}
	_energy--;
	if (!_health)
		print("ClapTrap-" + _name + " just resurrected!");
	_health += amount;
	print("ClapTrap-" + _name + " gets repaired by " + to_str(amount) + " points of health!");
}
