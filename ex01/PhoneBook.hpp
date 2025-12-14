#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int index;
    public:
        PhoneBook();
        int index_contact(void);
        int add_new(void);
        int search();
        int get_index(void) const;
        void advan_index(void);
};

#endif