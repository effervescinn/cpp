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

int Span::longestSpan()
{
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
