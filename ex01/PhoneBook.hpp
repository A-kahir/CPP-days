#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
    private:
        std::string cmd;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_nb;
        std::string darkest_secret;
    public:

        void set_first_name(std::string f_name);
        void set_last_name();
        void set_nickname();
        void set_phone_nb();
        void set_darkest_secret();

        void get_first_name();
        void get_last_name();
        void get_nickname();
        void get_phone_nb();
        void get_darkest_secret();
};

class Conatct
{
    private:
        PhoneBook contact[8];
        int index;
    public:
        PhoneBook();
        ~PhoneBook();
};