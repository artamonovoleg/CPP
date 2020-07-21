#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#define FIELDS_AMOUNT 11

class Contact 
{
    public:
        Contact();
        static const std::string field_names [FIELDS_AMOUNT];
        std::string data [FIELDS_AMOUNT];
};

#endif