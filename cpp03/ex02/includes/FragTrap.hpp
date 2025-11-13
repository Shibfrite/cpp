//Header-protection
#pragma once

//Header
#include "ClapTrap.hpp"

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
