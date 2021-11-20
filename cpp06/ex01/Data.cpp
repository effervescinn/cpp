#include "Data.hpp"

Data::Data(std::string name) : name(name) {}

Data::Data(Data &src)
{
	*this = src;
}

Data &Data::operator=(const Data &rhs)
{
	this->name = rhs.name;
	return *this;
}
