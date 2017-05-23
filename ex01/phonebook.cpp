/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:38:25 by tmugadza          #+#    #+#             */
/*   Updated: 2017/05/23 16:38:29 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook() {
}

Phonebook::Phonebook(const Phonebook& b) {
	this->birthday_date = b.birthday_date;
	this->darkest_secret = b.darkest_secret;
	this->darkest_secret = b.darkest_secret;
	this->favorite_meal = b.favorite_meal;
	this->first_name = b.first_name;
	this->last_name = b.last_name;
	this->login = b.login;
	this->nick_name = b.nick_name;
	this->phone_number = b.phone_number;
	this->postal_address = b.postal_address;
	this->underwear_color = b.underwear_color;
}

Phonebook::~Phonebook() {
}

Phonebook Phonebook::operator =(const Phonebook& b){
	Phonebook pb;
	pb.birthday_date = b.birthday_date;
	pb.darkest_secret = b.darkest_secret;
	pb.darkest_secret = b.darkest_secret;
	pb.favorite_meal = b.favorite_meal;
	pb.first_name = b.first_name;
	pb.last_name = b.last_name;
	pb.login = b.login;
	pb.nick_name = b.nick_name;
	pb.phone_number = b.phone_number;
	pb.postal_address = b.postal_address;
	pb.underwear_color = b.underwear_color;
	return pb;
}
