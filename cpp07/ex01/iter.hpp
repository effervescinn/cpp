#include <iostream>

void pow(int &elem)
{
	elem *= elem;
}

void iterChar(char &elem)
{
	elem += 1;
}

template < typename T>
void iter(T *arr, int len, void (*f)(T &elem))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}
