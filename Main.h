// Main.h

#ifndef _MAIN_H
#define _MAIN_H

// Forward declarations for other classes
class Species;
class Observation;
class Year;

class Main {
public:
    // Default constructor
    Main() {}
    
    // Function declarations
    void search();
    void showPopulationChanges();
private:
    // Instances of other classes
    Species* species;
    Observation* observation;
    Year* year;
};

#endif  // _MAIN_H
