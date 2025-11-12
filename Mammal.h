#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here

#ifndef mammal_h_included
#define mammal_h_included
#include<iostream>
using namespace std;
class Mammal:public animal{
     string furcolor;
     public:
    Mammal(string name,int age,bool isHungry, string furcolor):animal(name,age,isHungry);
    string getfuncolor();
    void getfuncolor(string f);
    
};
#endif




#endif
