/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurek <makurek@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:02:26 by makurek           #+#    #+#             */
/*   Updated: 2025/11/03 15:37:41 by makurek          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_CONTACTS 8
#include"contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		int next_contact;
		void add(const Contact a);
		void search(void);
};

#endif
