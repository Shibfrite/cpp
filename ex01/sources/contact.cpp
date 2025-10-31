#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::set(const std::string& fn, const std::string& ln,
                  const std::string& nn, const std::string& pn,
                  const std::string& ds) {
    firstName = fn; lastName = ln; nickname = nn;
    phoneNumber = pn; darkestSecret = ds;
}

static std::string format(const std::string& s) {
    return (s.size() > 10?s.substr(0, 9) + ".":s);
}

void Contact::displayShort(int index) const {
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << format(firstName) << "|"
              << std::setw(10) << format(lastName)  << "|"
              << std::setw(10) << format(nickname)  << std::endl;
}

void Contact::displayFull() const {
    std::cout << "First name: "    << firstName    << std::endl;
    std::cout << "Last name: "     << lastName     << std::endl;
    std::cout << "Nickname: "      << nickname     << std::endl;
    std::cout << "Phone number: "  << phoneNumber  << std::endl;
    std::cout << "Darkest secret: "<< darkestSecret<< std::endl;
}

bool Contact::isEmpty() const {
    return firstName.empty();
}
