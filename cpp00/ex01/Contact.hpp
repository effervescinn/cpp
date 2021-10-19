#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
public:
    Contact(void);
    ~Contact(void);
    std::string get_fName(void) const;
    void set_fName(std::string str);
    std::string get_lName(void) const;
    void set_lName(std::string str);
    std::string get_nName(void) const;
    void set_nName(std::string str);
    std::string get_pNumber(void) const;
    void set_pNumber(std::string str);
    std::string get_dSecret(void) const;
    void set_dSecret(std::string str);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

#endif
