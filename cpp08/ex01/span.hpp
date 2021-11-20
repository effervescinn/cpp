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
	void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();

	void getNumbers();

private:
	unsigned int n;
	std::vector<int> arr;
};

#endif