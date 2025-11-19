//Header-protection
#pragma once

//Headers
#include<iostream>
#include<string>

//Class
class WrongAnimal
{
	protected:
		std::string _type;
	public:
	//constructor
		WrongAnimal(void);
		WrongAnimal(const std::string& type);
	//copy constructor
		WrongAnimal(const WrongAnimal& other);
	//copy assignement operator
		WrongAnimal& operator=(const WrongAnimal& other);
	//destructor
		virtual ~WrongAnimal(void);
	//methods
		 virtual void	makeSound(void) const;
		 void			makeSound(const std::string& sound) const;
		 std::string	getType(void) const;
};
