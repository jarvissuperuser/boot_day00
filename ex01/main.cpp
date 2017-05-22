/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 15:35:27 by tmugadza          #+#    #+#             */
/*   Updated: 2017/05/22 15:35:32 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"

int main(void){
	std::string input = "";
	while(true){
		std::cout<<"Welcome to Phone Book\n";
		std::cout<<"Commands:- ADD, SEARCH or EXIT\n";
		std::cin>>input;
		getchar();
		if (input.compare("EXIT") == 0)
			break ;
	}
	return 0;
}
