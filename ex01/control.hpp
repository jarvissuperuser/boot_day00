
#ifndef CONTROL_HPP
# define CONTROL_HPP
# include "phonebook.hpp"

class Control {
public:
	int total;
	const int max;
	Phonebook people[8]; 
	Control();
	//Control(const Control& orig);
	void setColumns();
	std::string addNewContact();
	std::string getPos(int);
	
private:
	std::string calColWidth(std::string);
	std::string adjustWidth(std::string);
};

#endif /* CONTROL_HPP */

