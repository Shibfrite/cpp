//Header-protection
#pragma once

//Header
#include <iostream>
#include "ClapTrap.hpp"

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
