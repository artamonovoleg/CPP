#include "Contact.hpp"

const std::string Contact::field_names[FIELDS_AMOUNT] = {   
                                        "firstname",
                                        "lastname",
                                        "nickname",
                                        "login",
                                        "postal adress",
                                        "email adress",
                                        "phone number",
                                        "birthday date",
                                        "favourite meal",
                                        "underwear colour",
                                        "darkest secret"};

Contact::Contact()
{
    for(int i = 0; i < FIELDS_AMOUNT; i++)
    {
        std::cin >> data[i];
    }
};
