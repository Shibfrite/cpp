#include"Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

const std::string	Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(const std::string new_type)
{
	_type = new_type;
}
