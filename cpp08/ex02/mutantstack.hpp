#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {};
	MutantStack(MutantStack &src) : std::stack<T>(src) {}
	~MutantStack() {};
	MutantStack &operator=(const MutantStack &rhs) {std::stack<T>::operator = (rhs);}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (std::stack<T>::c.begin()); };
	iterator end() { return (std::stack<T>::c.end()); };
};

#endif