
#ifndef CONTROL_HPP
# define CONTROL_HPP
# include "phonebook.hpp"
# define MAXC 8 
class Control {
public:
	
	Control();
	//Control(const Control& orig);
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

