#include "easyfind.hpp"
#include <list>

int main()
{
    std::list<int> testList;

    testList.push_back(1);
    testList.push_back(8);
    testList.push_back(5);
    testList.push_back(17);
    testList.push_back(98);

    try
    {
        std::cout << *easyfind(testList, 65) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "No such value in container\n";
    }
    
    return 0;
}
