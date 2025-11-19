#include "Animal.hpp"
#include "support.hpp"

//constructor
Animal::Animal(void): _type("Animal"){
	print("Default constructor. Class: Animal");
}

Animal::Animal(const std::string& type): _type(type){
	print("Default constructor. Class: Animal");
}

//copy constructor
Animal::Animal(const Animal& other): _type(other._type){
	print("Copy constructor. Class: Animal");
}

//operator
//copy operator
Animal&	Animal::operator=(const Animal& other){
	if (this != &other) _type = other._type;
	print("Copy assignment operator. Class: Animal");
	return (*this);
}

//destructor
Animal::~Animal(void){
	print("Destructor. Class: Animal");
}

void	Animal::makeSound(void) const{
	print("[insert animal cell sound]");
}

std::string Animal::getType(void) const {
    return (_type);
}
