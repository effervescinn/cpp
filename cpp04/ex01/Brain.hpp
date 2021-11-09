#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
public:
    Brain() {};
    Brain(Brain &src);
    ~Brain() {};
    std::string ideas[100];
    Brain &operator=(Brain const &rhs);
};

#endif