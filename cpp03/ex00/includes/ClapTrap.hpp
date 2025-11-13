#pragma once
#include<iostream>

class ClapTrap
{
	private:
		std::string _name;
		int	_health;
		int	_energy;
		static const int	_attack_damage = 0;
	public:
		//constructor
		ClapTrap(const std::string& name);
		//copy constructor
		ClapTrap(const ClapTrap& other);
		//copy assignement operator
		ClapTrap& operator=(const ClapTrap& other);
		//destructor
		~ClapTrap();
		//methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
