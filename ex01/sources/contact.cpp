/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurek <makurek@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:03:02 by makurek           #+#    #+#             */
/*   Updated: 2025/11/03 15:25:46 by makurek          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

void	Contact::set(const std::string &Field1,
						const std::string &Field2,
						const std::string &Field3, 
						const std::string &Field4,
						const std::string &Field5)
{
	FirstName		= Field1;
	LastName		= Field2; 
	Nickname		= Field3;
	PhoneNumber		= Field4;
	DarkestSecret	= Field5;
}

void	Contact::displayShort(void)
{
	std::cout << FirstName << std::endl;
	std::cout << LastName << std::endl;
	std::cout << Nickname << std::endl;
	std::cout << FirstName << std::endl;
	std::cout << FirstName << std::endl;
}
