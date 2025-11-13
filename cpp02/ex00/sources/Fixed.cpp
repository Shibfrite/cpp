#include"Fixed.hpp"
#include"support.hpp"

Fixed::Fixed() : _value(0)
{
	print("Default Constructor called");
}

Fixed::Fixed(const Fixed& copy)
{
	print("Copy constructor called");
	_value = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& src)
{
	print("Copy assignment operator called");
	if (this != &src)
		_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	print("Destructor called");
}

int Fixed::getRawBits(void) const 
{
	print("getRawBits member function called");
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	print("setRawBits member function called");
	_value = raw;
}
