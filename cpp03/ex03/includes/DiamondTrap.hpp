//Header-protection
#pragma once

//Header
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//Class
class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;
		using	FragTrap::_health;
		using	FragTrap::_attack_damage;
		using	ScavTrap::_energy;
	public:
	//constructor
		DiamondTrap(const std::string& name);
	//copy constructor
		DiamondTrap(const DiamondTrap& other);
	//copy assignement operator
		DiamondTrap& operator=(const DiamondTrap& other);
	//destructor
		virtual ~DiamondTrap(void);
	//methods
		using	ScavTrap::attack;
		void	whoAmI(void);
};
