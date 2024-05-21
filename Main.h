
#ifndef _MAIN_H
#define _MAIN_H

class Species;
class Observation;
class Year;

class Main {
public:
    Main() {}
    
    void search();
    void showPopulationChanges();
private:
    Species* species;
    Observation* observation;
    Year* year;
};

#endif  // _MAIN_H
