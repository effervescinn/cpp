#ifndef ARRAY_H
#define ARRAY_H

#include <exception>
#include <iostream>

template <typename T>
class Array
{
public:
	Array<T>() { this->arr = new T(); };
	Array<T>(unsigned int n)
	{
		this->n = n;
		this->arr = new T(n);
	}
	Array<T>(const Array<T> &src)
	{
		*this = src;
	}
	~Array<T>() { delete[] arr; }
	int size() { return this->n; };
	T &operator[](unsigned int n)
	{
		if (n >= this->n)
			throw std::exception();
		return arr[n];
	}
	Array& operator=(const Array& rhs)
	{
		this->n = rhs.n;
		if (this->arr)
			delete [] arr;
		this->arr = new T(n);
		for (int i = 0; i < n; i++)
			this->arr[i] = rhs.arr[i];
		return *this;
	}

private:
	unsigned n;
	T *arr;
};

#endif