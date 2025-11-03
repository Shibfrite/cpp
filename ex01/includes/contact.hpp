/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurek <makurek@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:02:05 by makurek           #+#    #+#             */
/*   Updated: 2025/11/03 15:30:13 by makurek          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		void	set(const std::string &Field1,
								const std::string &Field2,
								const std::string &Field3, 
								const std::string &Field4,
								const std::string &Field5);
		void	displayShort(void);
};

#endif
