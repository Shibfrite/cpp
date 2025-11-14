//Header-protection
#pragma once

//Header
#include <iostream>
#include "ClapTrap.hpp"

//Defines
#define SCAVTRAP_HP 100
#define SCAVTRAP_EP 50
#define SCAVTRAP_AD 20

//Class
class ScavTrap: public ClapTrap
{
	private:
	public:
	//constructor
		ScavTrap(const std::string& name);
	//copy constructor
		ScavTrap(const ScavTrap& other);
	//copy assignement operator
		ScavTrap& operator=(const ScavTrap& other);
	//destructor
		~ScavTrap();
	//methods
		void	attack(const std::string& target);
		void	guardGate();
};
