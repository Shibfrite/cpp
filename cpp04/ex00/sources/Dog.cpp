#include "Dog.hpp"
#include "support.hpp"

//constructor
Dog::Dog(void): Animal("Dog"){
	print("Default constructor. Class: Dog");
}

//copy constructor
Dog::Dog(const Dog& other): Animal(other){
	print("Copy constructor. Class: Dog");
}

//operator
//copy operator
Dog& Dog::operator=(const Dog& other){
	if (this != &other) _type = other._type;
	print("Copy assignment operator. Class: Dog");
	return (*this);
}

//destructor
Dog::~Dog(void){
	print("Destructor. Class: Dog");
}

void	Dog::makeSound(void) const{
	Animal::makeSound(DOG_SOUND);
}
