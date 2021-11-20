#ifndef SPAN_H
#define SPAN_H
#include <exception>
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
public:
	Span(int N);
	~Span();
	void addNumber(int num);
	int shortestSpan();
	int longestSpan();

private:
	int n;
	std::vector<int> arr;
};

#endif