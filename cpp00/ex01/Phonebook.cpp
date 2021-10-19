#include "Phonebook.hpp"

std::string Contact::get_fName(void) const {
    return this->first_name;
}

void Contact::set_fName(std::string str) {
    this->first_name = str;
}

std::string Contact::get_lName(void) const {
    return this->last_name;
}

void Contact::set_lName(std::string str) {
    this->last_name = str;
}

std::string Contact::get_nName(void) const {
    return this->nickname;
}

void Contact::set_nName(std::string str) {
    this->nickname = str;
}

std::string Contact::get_pNumber(void) const {
    return this->phone_number;
}

void Contact::set_pNumber(std::string str) {
    this->phone_number = str;
}

std::string Contact::get_dSecret(void) const {
    return this->darkest_secret;
}

void Contact::set_dSecret(std::string str) {
    this->darkest_secret = str;
}

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

Phonebook::Phonebook(void)
{
    this->i = 0;
}

Phonebook::~Phonebook(void)
{
}

int Phonebook::get_index(void)
{
    return this->i;
}

void Phonebook::set_index(int num)
{
    this->i = num;
}