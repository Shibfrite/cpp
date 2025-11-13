//Header-protection
#pragma once

//Header
#include "ClapTrap.hpp"

//Class
class ScavTrap: virtual public ClapTrap
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
		virtual ~ScavTrap();
	//methods
		void	attack(const std::string& target);
		void	guardGate();
};
