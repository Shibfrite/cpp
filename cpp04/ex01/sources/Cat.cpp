#include "Cat.hpp"
#include "support.hpp"

//constructor
Cat::Cat(void): Animal("Cat"), _brain(new Brain()){
	print("Default constructor. Class: Cat");
}

//copy constructor
Cat::Cat(const Cat& other): Animal(other._type), _brain(new Brain(*other._brain)){
	print("Copy constructor. Class: Cat");
}

//operator
//copy operator
Cat& Cat::operator=(const Cat& other){
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	print("Copy assignment operator. Class: Cat");
	return (*this);
}

//destructor
Cat::~Cat(void){
	delete _brain;
	print("Destructor. Class: Cat");
}

void	Cat::makeSound(void) const{
	Animal::makeSound(CAT_SOUND);
}

Brain	*Cat::getBrain(void) const{
	return (_brain);
}
