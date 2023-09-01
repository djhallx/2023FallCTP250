#include "Feline.h"



Feline::Feline() {

}

Feline::Feline(string name) : Pet(name) {

}



string Feline::getSpecies() {
	return "Feline";
}