#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main()
{
    FlagTrap Makoto("Tsukimoto");

    Makoto.attack("Dragon");
    Makoto.beRepaired(10);
    Makoto.highFivesGuy();
    return 0;
}
