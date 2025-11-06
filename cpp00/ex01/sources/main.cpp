#include<iostream>
#include<limits>
#include"contact.hpp"
#include"phonebook.hpp"
#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

int main() {
    std::string input;
    PhoneBook pb;
    Contact a;
	char i = '0';

	input = "";
    pb.next_contact = 0;
    while (input != EXIT && input != "E") {
        std::cout << "Phonebook: ";
        if (!std::getline(std::cin, input)) return 0;
        if (input == ADD || input == "A") pb.add(a);
		else if (input == "F") pb.addF(a, std::string(1, i++));
        else if (input == SEARCH || input == "S") pb.search();
		else if (!input.empty() && input != EXIT && input != "E") std::cout << "Valid commands: ADD, SEARCH, EXIT." << std::endl;
    }
    return 0;
}
