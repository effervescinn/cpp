#include "Zombie.hpp"

int main() {
    Zombie *zombies;
    zombies = zombieHorde(10, "Den");
    for (int i = 0; i < 10; i++)
        zombies[i].announce();
    delete [] zombies;
    return 0;
}