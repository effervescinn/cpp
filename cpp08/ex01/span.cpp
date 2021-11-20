#include "span.hpp"

Span::Span(int N)
{
	this->n = N;
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
	if (this->arr.size() >= this->n)
		throw std::exception();
	this->arr.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (end - start > this->n - this->arr.size())
		throw std::exception();
	std::vector<int>::iterator i = this->arr.begin();
	for (std::vector<int>::iterator j = start; j != end && i != this->arr.end(); j++)
	{
		this->arr.push_back(*j);
		i++;
	}
}

int Span::longestSpan()
{
	if ((this->arr.begin() == this->arr.end()) || this->n <= 1)
		throw std::exception();

	int diff = 0;

	for (std::vector<int>::iterator i = this->arr.begin(); i != this->arr.end(); i++)
	{
		for (std::vector<int>::iterator j = i; j != this->arr.end(); j++)
		{
			if (std::abs(*j - *i) > diff)
				diff = std::abs(*j - *i);
		}
	}
	return diff;
}

int Span::shortestSpan()
{
	if ((this->arr.begin() == this->arr.end()) || this->n <= 1)
		throw std::exception();

	int diff = this->longestSpan();

	for (std::vector<int>::iterator i = this->arr.begin(); i != (this->arr.end() - 1); i++)
	{
		for (std::vector<int>::iterator j = i + 1; j != this->arr.end(); j++)
		{
			if (std::abs(*j - *i) < diff)
				diff = std::abs(*j - *i);
		}
	}
	return diff;
}

void Span::getNumbers()
{
	for (std::vector<int>::iterator i = this->arr.begin(); i != this->arr.end(); i++)
		std::cout << *i << (i == this->arr.end() - 1 ? "\n" : ", ");
}
