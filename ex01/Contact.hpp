#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_nb;
        std::string darkest_secret;
    public:
        Contact();
        int set_data();
        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_nb(void) const;
        std::string get_darkest_secret(void) const;
};

#endif