// Observer.h

#ifndef _OBSERVER_H
#define _OBSERVER_H

#include <string> // for std::string

class Observer {
public:
    // Function declarations
    std::string getObserver(int id);
    void addObserver(std::string name, int id);
private:
    // Member variables
    std::string name;
    int id;
};

#endif  // _OBSERVER_H
