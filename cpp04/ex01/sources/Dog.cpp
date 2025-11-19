#include "Dog.hpp"
#include "support.hpp"

//constructor
Dog::Dog(void): Animal("Dog"), _brain(new Brain()){
	print("Default constructor. Class: Dog");
}

//copy constructor
Dog::Dog(const Dog& other): Animal(other._type), _brain(new Brain(*other._brain)){
	print("Copy constructor. Class: Dog");
}

//operator
//copy operator
Dog& Dog::operator=(const Dog& other){
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	print("Copy assignment operator. Class: Dog");
	return (*this);
}

//destructor
Dog::~Dog(void){
	delete _brain;
	print("Destructor. Class: Dog");
}

//methods
void	Dog::makeSound(void) const{
	Animal::makeSound(DOG_SOUND);
}

Brain	*Dog::getBrain(void) const{
	return (_brain);
}
