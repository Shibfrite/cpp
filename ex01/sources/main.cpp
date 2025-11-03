#include<iostream>
#include<limits>
#include"contact.hpp"
#include"phonebook.hpp"


int main() {
    std::string input;
    PhoneBook pb;
    Contact a;

    pb.next_contact = 1;
    while (input != "EXIT") {
        std::cout << "Phonebook: ";
        if (!std::getline(std::cin, input)) return 0;
        if (input == "ADD") pb.add(a);
        else if (input == "SEARCH") pb.search();
    }
    return 0;
}
