#include"Fixed.hpp"
#include"support.hpp"

//constructors
Fixed::Fixed() : _value(0)
{
	print("Default Constructor called");
}

Fixed::Fixed(const int value) : _value(value << _frac_width)
{
	print("Int Constructor called");
}

Fixed::Fixed(const float value) : _value(static_cast<int>(value * (1 <<  _frac_width)))
{
	print("Float Constructor called");
}

//copy constructor
Fixed::Fixed(const Fixed& copy)
{
	print("Copy constructor called");
	_value = copy.getRawBits();
}

//operators
Fixed& Fixed::operator=(const Fixed& src)
{
	print("Copy assignment operator called");
	if (this != &src)
		_value = src.getRawBits();
	return (*this);
}

//getter
int Fixed::getRawBits(void) const 
{
	print("getRawBits member function called");
	return (_value);
}

//setter
void Fixed::setRawBits(int const raw)
{
	print("setRawBits member function called");
	_value = raw;
}

//convertor
float   Fixed::toFloat(void) const
{
	return (_value / static_cast<float>(1 << _frac_width));
}

int     Fixed::toInt(void) const
{
	return (_value >> _frac_width);
}

//destructor
Fixed::~Fixed()
{
	print("Destructor called");
}

//other
std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    os << f.toFloat();
    return os;
}
