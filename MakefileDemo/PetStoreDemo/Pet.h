#pragma once
#include "Creature.h"
#include <string>


using namespace std;


class Pet :
    public virtual Creature
{
private:
    string name;


public:
    /**
    *	Basic constuctor
    */
    Pet(void);


    /**
    *	Constructor that create a new Pet and assigns a name.
    *
    * @param name	A string representing the pet's name.
    */
    Pet(string name);
    

    /**
    *	Returns the name assigned to the Pet.
    *
    * @return name	A string representing the pet's name.
    */
    string getName();


    /**
    *	Sets the name of the pet.
    *
    * @param name	A string representing the pet's name.
    */
    void setName(string name);


    virtual string getSpecies();

    
};

