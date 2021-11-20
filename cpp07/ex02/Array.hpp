#ifndef ARRAY_H
#define ARRAY_H

#include <exception>
#include <iostream>

template <typename T>
class Array
{
public:
	Array<T>()
	{
		this->arr = NULL;
		this->n = 0;
	};
	Array<T>(unsigned int n)
	{
		this->n = n;
		if (n == 0)
			this->arr = NULL;
		this->arr = new T[n];
	}
	Array<T>(const Array<T> &src)
	{
		this->n = src.n;
		this->arr = new T[n];
		for (unsigned int i = 0; i < this->n; i++)
			this->arr[i] = src.arr[i];
	}
	~Array<T>()
	{
		if (this->arr)
			delete[] this->arr;
	}
	int size() { return this->n; };
	T &operator[](unsigned int n)
	{
		if (n >= this->n)
			throw std::exception();
		return arr[n];
	}
	Array<T> &operator=(const Array<T> &rhs)
	{
		if (this == &rhs)
			return *this;
		if (this->arr)
			delete[] arr;
		this->n = rhs.n;
		this->arr = new T[this->n];
		for (unsigned int i = 0; i < this->n; i++)
		{
			std::cout << i << std::endl;
			this->arr[i] = rhs.arr[i];
		}
		return *this;
	}

private:
	unsigned int n;
	T *arr;
};

#endif