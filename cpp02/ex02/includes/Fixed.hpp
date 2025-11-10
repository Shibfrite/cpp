//header protection
#pragma once

//includes
#include<iostream>
#include<cmath>

//defines
#define DEFAULT_WIDTH 8

//class
class Fixed
{
	private:
		int	_value;
		static const int _frac_width = DEFAULT_WIDTH;
	public:
		//constructors
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		//copy constructor
		Fixed(const Fixed& copy);
		//operators
		//copy
		Fixed& operator=(const Fixed& other);
		//comparaison
		bool operator>(Fixed const& other) const;
		bool operator<(Fixed const& other) const;
		bool operator>=(Fixed const& other) const;
		bool operator<=(Fixed const& other) const;
		bool operator==(Fixed const& other) const;
		bool operator!=(Fixed const& other) const;
		//arithmetic
		Fixed operator+(Fixed const& other) const;
		Fixed operator-(Fixed const& other) const;
		Fixed operator*(Fixed const& other) const;
		Fixed operator/(Fixed const& other) const;
		//crementation
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		//methods
	    // min / max (static overloads)
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed const& min(Fixed const& a, Fixed const& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static Fixed const& max(Fixed const& a, Fixed const& b);
		//getter
		int getRawBits(void) const;
		//setter
		void setRawBits(int const raw);
		//convertor
		float	toFloat(void) const;
		int		toInt(void) const;
		//destructor
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);
