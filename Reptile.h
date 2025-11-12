#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

#ifndef reptile_h_included
#define reptile_h_included
#include<iostream>
using namespace std;
class reptile:public animal{
    
    bool isVenomous;
    public:
    reptile(string name,int age,bool isHungry,bool isVenomous):animal(name,age,isHungry);
    
};
#endif








