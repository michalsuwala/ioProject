

#include "Observer.h"
#include <iostream> 


std::string Observer::getObserver(int id) {
   
    std::cout << "Getting observer with ID: " << id << "\n";
    return ""; 
}


void Observer::addObserver(std::string name, int id) {

    std::cout << "Adding observer: " << name << " with ID: " << id << "\n";
}
