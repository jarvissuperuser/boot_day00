/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:38:10 by tmugadza          #+#    #+#             */
/*   Updated: 2017/05/23 16:38:14 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROL_HPP
# define CONTROL_HPP
# include "phonebook.hpp"
# define MAXC 8 
class Control {
public:
	
	Control();
	void setColumns();
	std::string addNewContact();
	Phonebook getPos(int);
	std::string toUpper(std::string);
private:
	Phonebook people[8]; 
	int total;
	void setContact(int);
	std::string calColWidth(std::string);
	std::string adjustWidth(std::string);
	
};

#endif /* CONTROL_HPP */

