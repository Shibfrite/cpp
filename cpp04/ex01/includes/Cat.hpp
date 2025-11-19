//Header-protection
#pragma once

//Headers
#include"Animal.hpp"
#include"Brain.hpp"

//Defines
#define CAT_SOUND "Maw."

//Class
class Cat : public Animal
{
	private:
		Brain *_brain;
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
		Brain	*getBrain(void) const;
};
