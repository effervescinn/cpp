#include "Brain.hpp"

Brain &Brain::operator=(Brain const &rhs)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}

Brain::Brain(Brain &src)
{
    *this = src;
}
