#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

#ifndef bird_h_included
#define bird_h_included
#include<iostream>
using namespace std;
class bird:public animal{
    float wingspan;
    public:
    bird(string name,int age,bool isHungry,float wingspan):animal(name,age,isHungry);
};
#endif







#endif
