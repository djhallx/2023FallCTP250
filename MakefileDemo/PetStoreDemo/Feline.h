#pragma once
#include "Pet.h"


class Feline :
    public Pet
{
private:


public:
    Feline();

    Feline(string name);

    string getSpecies();
};

