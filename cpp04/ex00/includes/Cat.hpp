//Header-protection
#pragma once

//Headers
#include"Animal.hpp"

//Defines
#define CAT_SOUND "Maw."

//Class
class Cat : public Animal
{
	protected:
	public:
	//constructor
		Cat(void);
	//copy constructor
		Cat(const Cat& other);
	//copy assignement operator
		Cat& operator=(const Cat& other);
	//destructor
		~Cat(void);
	//methods
		void	makeSound(void) const;
};
