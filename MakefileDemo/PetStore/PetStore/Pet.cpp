#include "Pet.h"



Pet::Pet(void) {

}



Pet::Pet(string name) {
	this->name = name;
}



string Pet::getName() {
	return this->name;
}



void Pet::setName(string name) {
	this->name = name;
}


string Pet::getSpecies() {
	return "Pet";
}

