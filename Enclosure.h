#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 
#ifndef enclosure_h_included
#define enclosure_h_included
#include<iostream>
using namespace std;
class enclosure{
    Animal* a;
    int capacity;
    int currentcount;
    public:
    void addAnimal(Animal*a);
    void displayAnimals();
    enclosure(int capacity,int currentcount);
};
#endif







#endif
