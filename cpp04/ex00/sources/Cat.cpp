#include "Cat.hpp"
#include "support.hpp"

//constructor
Cat::Cat(void): Animal("Cat"){
	print("Default constructor. Class: Cat");
}

//copy constructor
Cat::Cat(const Cat& other): Animal(other._type){
	print("Copy constructor. Class: Cat");
}

//operator
//copy operator
Cat& Cat::operator=(const Cat& other){
	if (this != &other) _type = other._type;
	print("Copy assignment operator. Class: Cat");
	return (*this);
}

//destructor
Cat::~Cat(void){
	print("Destructor. Class: Cat");
}

void	Cat::makeSound(void) const{
	Animal::makeSound(CAT_SOUND);
}
