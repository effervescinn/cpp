#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

std::string Contact::get_fName(void) const {
    return this->first_name;
}

void Contact::set_fName(std::string str) {
    this->first_name = str;
    return;
}

std::string Contact::get_lName(void) const {
    return this->last_name;
}

void Contact::set_lName(std::string str) {
    this->last_name = str;
    return;
}

std::string Contact::get_nName(void) const {
    return this->nickname;
}

void Contact::set_nName(std::string str) {
    this->nickname = str;
    return;
}

std::string Contact::get_pNumber(void) const {
    return this->phone_number;
}

void Contact::set_pNumber(std::string str) {
    this->phone_number = str;
    return;
}

std::string Contact::get_dSecret(void) const {
    return this->darkest_secret;
}

void Contact::set_dSecret(std::string str) {
    this->darkest_secret = str;
    return;
}

Contact::Contact(void)
{
    std::cout << "contact is created" << std::endl;
    return;
}

Contact::~Contact(void)
{
    std::cout << "contact is destroyed" << std::endl;
    return;
}

Phonebook::Phonebook(void)
{
    std::cout << "Phonebook is created" << std::endl;
    return;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Phonebook is destroyed" << std::endl;
    return;
}