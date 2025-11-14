//Header-protection
#pragma once

//Header
#include "ClapTrap.hpp"

//Defines
#define FRAGTRAP_HP 100
#define FRAGTRAP_EP 100
#define FRAGTRAP_AD 30

//Class
class FragTrap: public ClapTrap
{
	private:
	public:
	//constructor
		FragTrap(const std::string& name);
	//copy constructor
		FragTrap(const FragTrap& other);
	//copy assignement operator
		FragTrap& operator=(const FragTrap& other);
	//destructor
		~FragTrap(void);
	//methods
		void	highFivesGuys(void);
};
