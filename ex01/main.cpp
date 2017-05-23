/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 15:35:27 by tmugadza          #+#    #+#             */
/*   Updated: 2017/05/23 16:39:45 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"
#include "control.hpp"

int main(void){
	std::string input = "";
	Control	con;
	
	std::cout<<"Welcome to Phone Book\n";
	while(true){		
		std::cout<<"Commands:- ADD, SEARCH or EXIT\n";	
		std::getline(std::cin,input);
		input = con.toUpper(input);
		if (input.compare("SEARCH") == 0)
			con.setColumns();
		if (input.compare("ADD") == 0)
			std::cout<<con.addNewContact();
		if (input.compare("EXIT") == 0)
			break ;
	}
	return 0;
}
