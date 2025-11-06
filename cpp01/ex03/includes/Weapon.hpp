#pragma once
#include<iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string);
		const std::string getType(void);
		void setType(const std::string new_type);
};
