#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

#ifndef animal_h_included
#define animal_h_included
#include <iostream>
using namespace std;
class animal{
    string name;
    int age;
    bool isHungry;
    public:
    animal(string name,int age,bool isHungry);
    void display();
    void feed();
    string getname();
    int getage();
    void setname(string n);
    void setage(int a);
    };
    #endif



#endif
