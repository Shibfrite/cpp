/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurek <makurek@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:03:02 by makurek           #+#    #+#             */
/*   Updated: 2025/11/04 12:13:16 by makurek          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"
#include<iomanip>

void	Contact::set(const std::string &Field1,
						const std::string &Field2,
						const std::string &Field3, 
						const std::string &Field4,
						const std::string &Field5)
{
	firstName		= Field1;
	lastName		= Field2; 
	nickname		= Field3;
	phoneNumber		= Field4;
	darkestSecret	= Field5;
}

static void displayElement(std::string str)
{
	std::cout << std::setw(10) << str << "│";
}

static std::string format(std::string str)
{
	return (str.size() > 10? str.substr(0, 9) + '.': str);
}

void	Contact::displayShort(void)
{
	displayElement(format(firstName));
	displayElement(format(lastName));
	displayElement(format(nickname));
}

void	Contact::displayFull(void)
{
	std::cout	<< "│" << firstName << std::endl
				<< "│" << lastName << std::endl
				<< "│" << nickname << std::endl
				<< "│" << phoneNumber << std::endl
				<< "│" << darkestSecret << std::endl;
}

bool	Contact::isEmpty(void)
{
	return (firstName.empty());
}
