// Year.cpp

#include "Year.h"
#include <iostream> // for cout

// Implementation of getYear function
std::string Year::getYear(int number) {
    // In a real application, you would fetch year details from a database or some other data source.
    // For now, let's just print a message.
    std::cout << "Getting year: " << number << "\n";
    return ""; // Placeholder return value
}

// Implementation of addYear function
void Year::addYear(int number, std::string speciesName) {
    // In a real application, you would add year details to a database or some other data storage mechanism.
    // For now, let's just print a message.
    std::cout << "Adding year: " << number << " with species: " << speciesName << "\n";
}
