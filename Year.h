// Year.h

#ifndef _YEAR_H
#define _YEAR_H

#include <string> // for std::string
#include <vector> // for std::vector
#include "Observation.h"
#include "Species.h"

class Year {
public:
    // Function declarations
    std::string getYear(int number);
    void addYear(int number, std::string speciesName);
private:
    // Member variables
    int number;
    std::vector<Observation> observations;
    Species species;
};

#endif  // _YEAR_H
