#pragma once
#include<iostream>

#define DEFAULT_WIDTH 8

class Fixed
{
	private:
		int	_value;
		static const int _frac_width = DEFAULT_WIDTH;
	public:
		//constructor
		Fixed();
		//copy constructor
		Fixed(const Fixed& other);
		//copy assignement operator
		Fixed& operator=(const Fixed& other);
		//destructor
		~Fixed();
		//getter
		int getRawBits(void) const;
		//setter
		void setRawBits(int const raw);
};
