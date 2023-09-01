#include "Canine.h"


Canine::Canine() {

}

Canine::Canine(string name): Pet(name) {
	
}


string Canine::getSpecies() {
	return "Canine";
}
