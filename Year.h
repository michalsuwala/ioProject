// Year.h

#ifndef _YEAR_H
#define _YEAR_H

#include <string> 
#include <vector>
#include "Observation.h"
#include "Species.h"

class Year {
public:
    std::string getYear(int number);
    void addYear(int number, std::string speciesName);
private:
    int number;
    std::vector<Observation> observations;
    Species species;
};

#endif 