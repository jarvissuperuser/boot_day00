
#include <stdlib.h>
#include "control.hpp"

const int Control::max = 8;

Control::Control() {
	for (int a = 0;a < this->max;a++){
		this->people[a] = NULL;
	}
}

void Control::setColumns(){
	std::cout<<"_____________________________________________";
	std::cout<<"|  index   |first name| last name| nick name|";
	std::cout<<"---------------------------------------------";
}

std::string Control::addNewContact(){
	
}

std::string Control::getPos(int){
}

std::string Control::calColWidth(std::string){
	
}

std::string Control::adjustWidth(std::string){
	
}

