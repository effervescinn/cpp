#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Yutaka("Hoshino");

    Yutaka.whoAmI();
    Yutaka.attack("Sakuma");
    Yutaka.guardGate();
    Yutaka.highFivesGuy();
    return 0;
}
