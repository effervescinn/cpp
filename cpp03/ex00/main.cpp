#include "ClapTrap.hpp"

int main()
{
    ClapTrap Piligrim("Scott");

    Piligrim.attack("Gideon");
    Piligrim.takeDamage(5);
    Piligrim.beRepaired(10);
    return 0;
}
