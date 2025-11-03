/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurek <makurek@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:03:59 by makurek           #+#    #+#             */
/*   Updated: 2025/11/03 17:51:21 by makurek          ###   ####lausanne.ch   */
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

static int isInputValid(std::string input)
{
	if (input.empty()) return (-1);
	return (input.size() == 1 && (input[0] >= '0' && input[0] <= '7'));
}

static size_t promptNumber()
{
	std::string input;
	int			is_valid = 0;

	while (!std::cin.eof() && is_valid < 1)
	{
		if (is_valid == 0)
			std::cout << "Invalid index.";
		std::cout << "Index: ";
		std::getline(std::cin, input);
		is_valid = isInputValid(input);
	}
	return ((size_t)(input[0] - '0'));
}

void PhoneBook::add(Contact a)
{
	a.set(prompt("First name"), prompt("Last name"), prompt("Nickname"),
			prompt("Phone number"), prompt("Darkest secret"));
	if (next_contact == MAX_CONTACTS) next_contact %= MAX_CONTACTS;
	contacts[next_contact - 1] = a;
}

void PhoneBook::search(void)
{
	contacts[promptNumber()].displayShort();
}
