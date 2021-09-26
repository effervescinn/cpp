#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {
    public:

        HumanB(std::string name);
        HumanB(void);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon &weapon);

    private:

        Weapon *weapon;
        std::string _name;
};

#endif
