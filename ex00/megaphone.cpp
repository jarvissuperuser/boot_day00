/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:03:26 by tmugadza          #+#    #+#             */
/*   Updated: 2017/05/22 11:50:23 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
std::string toUpper(std::string str){
	std::string returned = "";
 	for (int a = 0; a < (int)str.size(); a++){
		returned += std::toupper(str[a]);
	}
	return (returned);
}
int		main(int ac, char *ag[]){
	for(int a = 1; a < ac; a++){		
		std::cout<<toUpper(ag[a]);
		std::cout<<" ";
	}
	std::cout<<std::endl;
	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
