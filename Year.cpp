#include "Year.h"
#include <iostream>

std::string Year::getYear(int number) {

    std::cout << "Getting year: " << number << "\n";
    return ""; 
}

void Year::addYear(int number, std::string speciesName) {
    std::cout << "Adding year: " << number << " with species: " << speciesName << "\n";
}
