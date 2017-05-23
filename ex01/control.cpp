#include "control.hpp"

Control::Control() {
	this->total = 0;
	for (int a = 0;a < MAXC;a++){
		this->people[a].nick_name = "";
	}
};

std::string Control::toUpper(std::string str){
	std::string returned = "";
 	for (int a = 0; a < (int)str.size(); a++){
		returned += std::toupper(str[a]);
	}
	return (returned);
}

void Control::setColumns(){
	system("clear");
	std::cout<<"---------------------------------------------\n";
	std::cout<<"|  index   |first name| last name| nick name|\n";
	std::cout<<"---------------------------------------------\n";
	for (int a = 0; a < total; a++){
		std::cout<<calColWidth(std::to_string(a+1));
		std::cout<<calColWidth(people[a].first_name);
		std::cout<<calColWidth(people[a].last_name);
		std::cout<<calColWidth(people[a].nick_name);
		std::cout<<"|\n";
	}
	std::cout<<"---------------------------------------------\n";
};

std::string Control::addNewContact(){
	int pos = 1;
	std::string input;
	if (total < MAXC){
		this->setContact(total);
		total++;	
	}else{
		while (1){
			std::cout<<"Phone Book is full.\n Enter Contact index to replace:- ";
			std::getline(std::cin,input);
			pos = std::stoi(input);
			if (pos > 0 && pos < 9)
			{
				break;
			}
			else 
				std::cout<<"And that was not an index in the number...\n";
		}
		if (pos > 0)
			this->setContact(pos - 1);
	}
	return "Done\n";
};

Phonebook Control::getPos(int i){
	return this->people[i];
};

std::string Control::calColWidth(std::string var){
	int size;
	std::string result;
	
	size = (int) var.length();
	result += "|";
	if (size < 10)
	{
		result += this->adjustWidth(var).substr(0,11);
		
	}
	else if(size == 10)
	{
		result += var;
	}
	else 
	{
		result += var.substr(0,9) + ".";
	}
	return result;
};

std::string Control::adjustWidth(std::string var){
	int len;
	float adjust;
	std::string fin = "";
	
	len = (int) var.length();
	adjust = (10 - len)/2;
	for(int a = 0;a < adjust;a++)
		fin += " ";
	fin += var + fin;
	if (fin.length()<10)
		fin.append(" ");
	return fin;
};

void Control::setContact(int tot){
	std::cout<<"Please enter the contact's name...";
	std::getline(std::cin,this->people[tot].first_name);
	std::cout<<"Please enter the contact's nick name...";
	std::getline(std::cin,this->people[tot].nick_name);
	std::cout<<"Please enter the contact's last name...";
	std::getline(std::cin,this->people[tot].last_name);
	std::cout<<"Please enter the contact's login...";
	std::getline(std::cin,this->people[tot].login);
	std::cout<<"Please enter the contact's birthday...";
	std::getline(std::cin,this->people[tot].birthday_date);
	std::cout<<"Please enter the contact's darkest secret...";
	std::getline(std::cin,this->people[tot].darkest_secret);
	std::cout<<"Please enter the contact's email address...";
	std::getline(std::cin,this->people[tot].email_address);
	std::cout<<"Please enter the contact's Favorite meal...";
	std::getline(std::cin,this->people[tot].favorite_meal);
	std::cout<<"Please enter the contact's Phone number...";
	std::getline(std::cin,this->people[tot].phone_number);
	std::cout<<"Please enter the contact's postal address...";
	std::getline(std::cin,this->people[tot].postal_address);
	std::cout<<"Please enter the contact's underwear color...";
	std::getline(std::cin,this->people[tot].underwear_color);
};

