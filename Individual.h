// Individual.h

#ifndef _INDIVIDUAL_H
#define _INDIVIDUAL_H

#include <string> // for std::string
#include "Species.h"

class Individual {
public:
    // Function declarations
    std::string getIndividual(int id);
    void addIndividual(std::string speciesName, int id, std::string description);
private:
    // Member variables
    Species species;
    int id;
    std::string description;
};

#endif  // _INDIVIDUAL_H
