//Header-protection
#pragma once

//Headers
#include"WrongAnimal.hpp"

//Class
class WrongCat : public WrongAnimal
{
	protected:
	public:
	//constructor
		WrongCat(void);
	//copy constructor
		WrongCat(const WrongCat& other);
	//copy assignement operator
		WrongCat& operator=(const WrongCat& other);
	//destructor
		~WrongCat(void);
	//methods
		void	makeSound(void) const;
};
