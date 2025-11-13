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
		Fixed& operator=(const Fixed& other);
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
