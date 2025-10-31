#include "PhoneBook.hpp"
#include <iostream>

static std::string prompt(const char* msg) {
    std::string s;
    do {
        std::cout << msg;
        std::getline(std::cin, s);
    } while (s.empty() && !std::cin.eof());
    return s;
}

int main() {
    PhoneBook pb;
    std::string cmd;
    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd)) break;
        if (cmd == "EXIT") break;
        else if (cmd == "ADD") {
            Contact c;
            c.set(prompt("First name: "), prompt("Last name: "),
                  prompt("Nickname: "), prompt("Phone number: "),
                  prompt("Darkest secret: "));
            pb.add(c);
        } else if (cmd == "SEARCH") {
            pb.search();
        }
    }
}
