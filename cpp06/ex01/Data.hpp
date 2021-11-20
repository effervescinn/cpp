#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data
{
public:
	Data(std::string name);
	Data(Data &src);
	~Data() {};
	std::string name;
	Data &operator=(const Data &rhs);
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
