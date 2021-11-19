#ifndef EASYFIND_H
#define EASYFIND_H
#include <algorithm>
#include <iostream>

template < typename T>
typename T::iterator easyfind(T container, int elem)
{
    typename T::iterator found = std::find(container.begin(), container.end(), elem);
    if (found == container.end())
        throw std::exception();
	return found;
}

#endif
