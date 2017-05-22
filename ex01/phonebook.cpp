#include "phonebook.hpp"

Phonebook::Phonebook() {
	first_name = "";
	last_name = "";
	nick_name = "";
	login = "";
	postal_address = "";
	email_address = "";
	phone_number = "";
	birthday_date = "";
	first_name = "";
	favorite_meal = "";
	underwear_color = "";
	darkest_secret = "";
	return this;
};

Phonebook::Phonebook(const Phonebook& orig) {
	first_name = orig.first_name;
	last_name = orig.last_name;
	nick_name = orig.nick_name;
	login = orig.login;
	postal_address = orig.postal_address;
	email_address = orig.email_address;
	phone_number = orig.phone_number;
	birthday_date = orig.birthday_date;
	first_name = orig.first_name;
	favorite_meal = orig.favorite_meal;
	underwear_color = orig.underwear_color;
	darkest_secret = orig.darkest_secret;
	return this;
}

Phonebook::~Phonebook() {
}

