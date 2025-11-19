#include "Brain.hpp"
#include "support.hpp"

//constructor
Brain::Brain(void): _ideas(){
	print("Default constructor. Class: Brain");
}

//copy constructor
Brain::Brain(const Brain& other){
	for (int i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];
	print("Copy constructor. Class: Brain");
}

//operator
//copy operator
Brain& Brain::operator=(const Brain& other){
	if (this != &other)
		for (int i = 0; i < 100; ++i)
			_ideas[i] = other._ideas[i];
	print("Copy assignment constructor. Class: Brain");
	return (*this);
}

//destructor
Brain::~Brain(void){
	print("Destructor. Class: Brain");
}

std::string	Brain::getIdea(const int n) const{
	return (_ideas[n]);
}

void		Brain::setIdea(const int n, const std::string& content){
	_ideas[n] = content;
}
