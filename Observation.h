

#ifndef _OBSERVATION_H
#define _OBSERVATION_H

#include <string> 
#include "Individual.h"
#include "Observer.h"
#include "Species.h"

class Observation {
public:

    void addObservation(std::string observationData);
private:

    Individual individual;
    int year;
    std::string date;
    Observer observer;
    Species species;
};

#endif 
