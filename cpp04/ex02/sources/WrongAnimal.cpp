#include "WrongAnimal.hpp"
#include "support.hpp"

//constructor
WrongAnimal::WrongAnimal(void): _type("WrongAnimal"){
	print("Default constructor. Class: WrongAnimal");
}

WrongAnimal::WrongAnimal(const std::string& type): _type(type){
	print("Default constructor. Class: WrongAnimal");
}

//copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other): _type(other._type){
	print("Copy constructor. Class: WrongAnimal");
}

//operator
//copy operator
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other){
	if (this != &other) _type = other._type;
	print("Copy assignment operator. Class: WrongAnimal");
	return (*this);
}

//destructor
WrongAnimal::~WrongAnimal(void){
	print("Destructor. Class: WrongAnimal");
}

void	WrongAnimal::makeSound(void) const{
	print("[insert animal cell sound]");
}

std::string WrongAnimal::getType(void) const {
    return (_type);
}
