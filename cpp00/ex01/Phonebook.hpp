#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include "Phonebook.hpp"

class Phonebook
{
public:
    Phonebook(void);
    ~Phonebook(void);
    Contact member[8];
    void set_index(int num);
    int get_index(void);

private:
    int i;
};

void check_exit();
void add_contact(Phonebook *phonebook, std::string input);
void show_contacts(Phonebook *phonebook);
void search_contact(Phonebook *phonebook);

#endif
