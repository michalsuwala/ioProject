// Species.h

#ifndef _SPECIES_H
#define _SPECIES_H

#include <string> // for std::string

class Species {
public:
    // Function declarations
    std::string getSpecies(std::string name);
    void addSpecies(std::string name, std::string description);
private:
    // Member variables
    std::string name;
    std::string description;
};

#endif  // _SPECIES_H
