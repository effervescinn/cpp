#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

    public:
        Weapon(std::string type);
        Weapon(void);
        ~Weapon(void);
        std::string const &getType(void);
        void setType(std::string type);

    private:
        std::string _type;
};

#endif
