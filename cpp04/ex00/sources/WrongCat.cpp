#include "WrongCat.hpp"
#include "support.hpp"

//constructor
WrongCat::WrongCat(void): WrongAnimal("WrongCat"){
	print("Default constructor. Class: WrongCat");
}

//copy constructor
WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other._type){
	print("Copy constructor. Class: WrongCat");
}

//operator
//copy operator
WrongCat& WrongCat::operator=(const WrongCat& other){
	if (this != &other) _type = other._type;
	print("Copy assignement operator. Class: WrongCat");
	return (*this);
}

//destructor
WrongCat::~WrongCat(void){
	print("Destructor. Class: WrongCat");
}

void	WrongCat::makeSound(void) const{
	WrongAnimal::makeSound();
}
