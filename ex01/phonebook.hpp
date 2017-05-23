#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
class Phonebook {
public:
    std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	Phonebook();
	Phonebook(const Phonebook& b);
	~Phonebook();
	Phonebook operator=(const Phonebook& b);
private:

};

#endif /* PHONEBOOK_HPP */

