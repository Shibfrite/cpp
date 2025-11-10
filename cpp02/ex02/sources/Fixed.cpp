#include"Fixed.hpp"
#include"support.hpp"

//constructors
Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(const int value) : _value(value << _frac_width)
{
}

Fixed::Fixed(float const value)
    : _value(static_cast<int>(roundf(value * (1 << _frac_width))))
{
}

//copy constructor
Fixed::Fixed(const Fixed& copy)
{
	_value = copy.getRawBits();
}

//operators
//copy
Fixed& Fixed::operator=(const Fixed& src)
{
	if (this != &src)
		_value = src.getRawBits();
	return (*this);
}

//comparaison
bool Fixed::operator>(Fixed const& other) const {
    return getRawBits() > other.getRawBits();
}
bool Fixed::operator<(Fixed const& other) const {
    return getRawBits() < other.getRawBits();
}
bool Fixed::operator>=(Fixed const& other) const {
    return getRawBits() >= other.getRawBits();
}
bool Fixed::operator<=(Fixed const& other) const {
    return getRawBits() <= other.getRawBits();
}
bool Fixed::operator==(Fixed const& other) const {
    return getRawBits() == other.getRawBits();
}
bool Fixed::operator!=(Fixed const& other) const {
    return getRawBits() != other.getRawBits();
}

//arithmetic
Fixed Fixed::operator+(Fixed const& other) const {
    Fixed res;
    res.setRawBits(this->getRawBits() + other.getRawBits());
    return res;
}

Fixed Fixed::operator-(Fixed const& other) const {
    Fixed res;
    res.setRawBits(this->getRawBits() - other.getRawBits());
    return res;
}

Fixed Fixed::operator*(Fixed const& other) const {
    int64_t prod = static_cast<int64_t>(this->getRawBits()) * other.getRawBits();
    Fixed res;
    res.setRawBits(static_cast<int>(prod >> _frac_width));
    return res;
}

Fixed Fixed::operator/(Fixed const& other) const {
    int64_t dividend = (static_cast<int64_t>(this->getRawBits()) << _frac_width);
    Fixed res;
    res.setRawBits(static_cast<int>(dividend / other.getRawBits()));
    return res;
}

//cremation
Fixed& Fixed::operator++() {
    ++_value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed old(*this);
    ++_value;
    return old;
}

Fixed& Fixed::operator--() {
    --_value;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed old(*this);
    --_value;
    return old;
}

//methods
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a.getRawBits() <= b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a.getRawBits() >= b.getRawBits()) ? a : b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
    return (a.getRawBits() <= b.getRawBits()) ? a : b;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
    return (a.getRawBits() >= b.getRawBits()) ? a : b;
}

//getter
int Fixed::getRawBits(void) const 
{
	return (_value);
}

//setter
void Fixed::setRawBits(int const raw)
{
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
}

//other
std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    os << f.toFloat();
    return os;
}
