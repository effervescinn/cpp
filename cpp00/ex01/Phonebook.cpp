#include "Phonebook.hpp"

int main(void)
{
    Phonebook phonebook;
    int i = 0;
    std::string trunc;
    int index;

    std::cout << "Welcome to Phonebook!" << std::endl;

    while (1)
    {
        std::string input;

        std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
        std::cin >> input;
        if (!input.compare("ADD"))
        {
            if (i == 8)
                i = 0;
            std::cout << "Input first name" << std::endl;
            std::cin >> input;
            phonebook.member[i].set_fName(input);
            std::cout << "Input last name" << std::endl;
            std::cin >> input;
            phonebook.member[i].set_lName(input);
            std::cout << "Input nickname" << std::endl;
            std::cin >> input;
            phonebook.member[i].set_nName(input);
            std::cout << "Input phone number" << std::endl;
            std::cin >> input;
            phonebook.member[i].set_pNumber(input);
            std::cout << "Input darkest secret" << std::endl;
            std::cin >> input;
            phonebook.member[i].set_dSecret(input);   
            i++;
        }
        else if (!input.compare("SEARCH")) {
            std::cout << std::setw(26) << "PHONEBOOK" << std::endl;
            std::cout << std::setw(10) << "index" << "|";
            std::cout << std::setw(10) << "first name" << "|";
            std::cout << std::setw(10) << "last name" << "|";
            std::cout << std::setw(10) << "nickname" << "|";
            std::cout << std::endl;
            for (int j = 0; j < 8 && phonebook.member[j].get_fName().length(); j++) {
                std::cout << std::setw(10) << j + 1 << "|";
                if (phonebook.member[j].get_fName().length() > 10)
                {
                    trunc = phonebook.member[j].get_fName().substr(0, 9);
                    trunc += ".";
                    std::cout << std::setw(10) << trunc << "|";
                }
                else
                    std::cout << std::setw(10) << phonebook.member[j].get_fName() << "|";
                if (phonebook.member[j].get_lName().length() > 10)
                {
                    trunc = phonebook.member[j].get_lName().substr(0, 9);
                    trunc += ".";
                    std::cout << std::setw(10) << trunc << "|";
                }
                else
                    std::cout << std::setw(10) << phonebook.member[j].get_lName() << "|";
                if (phonebook.member[j].get_nName().length() > 10)
                {
                    trunc = phonebook.member[j].get_nName().substr(0, 9);
                    trunc += ".";
                    std::cout << std::setw(10) << trunc << "|";
                }
                else
                    std::cout << std::setw(10) << phonebook.member[j].get_nName() << "|";
                std::cout << std::endl;
            }
            std::cout << "Enter an index" << std::endl;
            std::cin >> index;
            if (index > i)
                std::cout << "No such contact" << std::endl;
            else {
            std::cout << "First name: " << phonebook.member[index - 1].get_fName() << std::endl;
            std::cout << "Last name: " << phonebook.member[index - 1].get_lName() << std::endl;
            std::cout << "Nickname: " << phonebook.member[index - 1].get_nName() << std::endl;
            std::cout << "Phone number: " << phonebook.member[index - 1].get_pNumber() << std::endl;
            std::cout << "Darkest secret: " << phonebook.member[index - 1].get_dSecret() << std::endl;
            }
        }
        else if (!input.compare("EXIT"))
        {
            return (1);
        }
        else
            std::cout << "Wrong command, try again" << std::endl;
    }
    return 0;
}
