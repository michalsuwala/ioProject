// Observation.h

#ifndef _OBSERVATION_H
#define _OBSERVATION_H

#include <string> // for std::string
#include "Individual.h"
#include "Observer.h"
#include "Species.h"

class Observation {
public:
    // Function declaration
    void addObservation(std::string observationData);
private:
    // Member variables
    Individual individual;
    int year;
    std::string date;
    Observer observer;
    Species species;
};

#endif  // _OBSERVATION_H
