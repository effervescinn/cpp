
#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {
    public:

        HumanA(std::string name, Weapon &weapon);
        void attack(void);

    private:

        Weapon &weapon;
        std::string _name;
};

#endif
