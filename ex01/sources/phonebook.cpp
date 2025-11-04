/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurek <makurek@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:03:59 by makurek           #+#    #+#             */
/*   Updated: 2025/11/04 12:59:30 by makurek          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"
#include<termios.h>
#include<unistd.h>
#include<cstdio>

static std::string prompt(const std::string &target)
{
	std::string input;

	while (!std::cin.eof() && input.empty())
	{
		std::cout << target << ": ";
		std::getline(std::cin, input);
	}
	return (input);
}

static int isInputValid(std::string input, Contact contacts[8])
{
	if (input.empty()) return (-1);
	int index = input[0] - '0';
	return ((input.size() == 1 && (index >= 0 && index <= 7)) && !contacts[index].isEmpty());
}

static size_t promptNumber(Contact contacts[8])
{
	std::string input;
	int			is_valid = -1;

	while (!std::cin.eof() && is_valid < 1)
	{
		if (is_valid == 0)
			std::cout << "Invalid index." << std::endl;
		std::cout << "Index: ";
		std::getline(std::cin, input);
		is_valid = isInputValid(input, contacts);
	}
	return ((size_t)(input[0] - '0'));
}

void PhoneBook::add(Contact a)
{
	a.set(prompt("First name"), prompt("Last name"), prompt("Nickname"),
			prompt("Phone number"), prompt("Darkest secret"));
	contacts[next_contact++] = a;
	next_contact %= MAX_CONTACTS;
}

void PhoneBook::addF(Contact a, std::string str)
{
	a.set(str,str,str,str,str);
	contacts[next_contact++] = a;
	next_contact %= MAX_CONTACTS;
}

void PhoneBook::displayContacts(void)
{
	std::cout	<< "┌───┬──────────┬──────────┬──────────┐" << std::endl;
	for (int i = 0; !contacts[i].isEmpty() && i < MAX_CONTACTS; ++i)
	{
		if (i != 0) std::cout	<< "├───┼──────────┼──────────┼──────────┤" << std::endl;
		std::cout << "│ " << i << " │";
		contacts[i].displayShort();
		std::cout   << std::endl;
	}
	std::cout	<< "└───┴──────────┴──────────┴──────────┘" << std::endl;

}

void PhoneBook::search(void)
{
	if (contacts[0].isEmpty())
	{
		std::cout << "|Phonebook-chan:" << std::endl;
		std::cout << "|\"Before searching fill me daddy~\"" << std::endl;
		return ;
	}
	displayContacts();
	contacts[promptNumber(contacts)].displayFull();
}
