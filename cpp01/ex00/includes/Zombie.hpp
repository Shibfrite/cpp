#pragma once
#include<iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string);
		~Zombie();
		void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
