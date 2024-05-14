#ifndef _OBSERVER_H
#define _OBSERVER_H

#include <string>

class Observer {
public:
    std::string getObserver(int id);
    void addObserver(std::string name, int id);
private:
    std::string name;
    int id;
};

#endif  
