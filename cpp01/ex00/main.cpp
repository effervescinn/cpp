#include "Zombie.hpp"

int main() {
    Zombie* Phil;
    Phil = newZombie("Phil");
    Phil->announce();
    delete Phil;
    randomChump("Zack");
    Zombie Tom = Zombie("Tom");
    Tom.announce();
    return 0;
}