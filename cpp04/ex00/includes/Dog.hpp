//Header-protection
#pragma once

//Headers
#include"Animal.hpp"

//Defines
#define DOG_SOUND "Waf!"

//Class
class Dog : public Animal
{
	protected:
	public:
	//constructor
		Dog(void);
	//copy constructor
		Dog(const Dog& other);
	//copy assignement operator
		Dog& operator=(const Dog& other);
	//destructor
		~Dog(void);
	//methods
		void	makeSound(void) const;
};
