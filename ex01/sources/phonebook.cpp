#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

PhoneBook::PhoneBook() : count(0), next(0) {}

void PhoneBook::add(const Contact& c) {
    contacts[next] = c;
    next = (next + 1) % 8;
    if (count < 8) count++;
}

void PhoneBook::search() const {
    if (count == 0) {
        std::cout << "PhoneBook empty\n";
        return;
    }
    for (int i = 0; i < count; i++)
        contacts[i].displayShort(i);
    std::cout << "Enter index: ";
    int idx;
    if (!(std::cin >> idx)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (idx < 0 || idx >= count) {
        std::cout << "Invalid index\n";
        return;
    }
    contacts[idx].displayFull();
}
