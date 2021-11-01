#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain has been created!" << std::endl;
}

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

Brain::~Brain()
{
    std::cout << "Brain has been deleted!" << std::endl;
}
