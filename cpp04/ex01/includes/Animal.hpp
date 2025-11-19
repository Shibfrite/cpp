//Header-protection
#pragma once

//Headers
#include<iostream>
#include<string>

//Class
class Animal
{
	protected:
		std::string _type;
	public:
	//constructor
		Animal(void);
		Animal(const std::string& type);
	//copy constructor
		Animal(const Animal& other);
	//copy assignement operator
		Animal& operator=(const Animal& other);
	//destructor
		virtual ~Animal(void);
	//methods
		 virtual void	makeSound(void) const;
		 void			makeSound(const std::string& sound) const;
		 std::string	getType(void) const;
};
