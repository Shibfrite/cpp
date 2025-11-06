/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurek <makurek@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:02:26 by makurek           #+#    #+#             */
/*   Updated: 2025/11/04 12:49:01 by makurek          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_CONTACTS 8
#include"contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
	public:
		int next_contact;
		void add(const Contact a);
		void addF(Contact a, std::string str);
		void search(void);
		void displayContacts(void);
};

#endif
