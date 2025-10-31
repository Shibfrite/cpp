#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		void set(const std::string& fn, const std::string& ln,
				 const std::string& nn, const std::string& pn,
				 const std::string& ds);
		void displayShort(int index) const;
		void displayFull() const;
		bool isEmpty() const;
};

#endif
