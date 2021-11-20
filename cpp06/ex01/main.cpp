#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data data("data");
	uintptr_t ptr;
	Data *dPtr = new Data("dPtr");
	ptr = serialize(&data);
	dPtr = deserialize(ptr);

	std::cout << "data name: " << data.name << std::endl;
	std::cout << "dPtr name: " << dPtr->name << std::endl;
	std::cout << "data address: " << &data << std::endl;
	std::cout << "ptr address: " << &ptr << std::endl;
	std::cout << "dPtr address: " << dPtr << std::endl;
	return 0;
}
