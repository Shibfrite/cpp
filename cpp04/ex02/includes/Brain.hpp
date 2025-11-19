//Header-protection
#pragma once

//Headers
#include<iostream>
#include<string>

//Defines

//Class
class Brain
{
	private:
		std::string _ideas[100];
	public:
	//constructor
		Brain(void);
	//copy constructor
		Brain(const Brain& other);
	//copy assignement operator
		Brain& operator=(const Brain& other);
	//destructor
		~Brain(void);
	//methods
		std::string	getIdea(const int n) const;
		void		setIdea(const int n, const std::string& content);
};
