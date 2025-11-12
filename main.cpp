/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "animal.h"
#include "mammal.h"
#include "bird.h"
#include "reptile.h"
#include "enclosure.h"
#include "visitor.h"
using namespace std;
animal::animal(string name=" ",int age=0,bool isHungry=false){
    this->name=name;
    this->age=age;
    this->isHungry=isHungry; 
}
void animal::display(){
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"Is it hungry:"<<isHungry<<endl;
}
void animal::feed(){
        if(isHungry==true){
	cout<<"hungry"<<endl;
else 
	cout<<" not hungry"<<endl;
}
}
 string animal::getname(){
     return name;
 }
 int animal:: getage(){
     return age;
 }
 void animal::setname(string n){
     name=n;
 }
 void animal::setage(int a){
     age=a;
 }

Mammal::Mammal(string name,int age,bool isHungry, string furcolor):animal(name,age,isHungry){
    this->funcolor=funcolor;
}
string Mammal::getfuncolor(){
    return funcolor;
}
void Mammal::getfuncolor(string f){
    funcolor=f;
}
bird::bird(string name,int age,bool isHungry,float wingspan):animal(name,age,isHungry){
    this->wingspan=wingspan;
}
float bird:: getwingspan(){
    return wingspan;
}
void bird::setwingspan(float w ){
    wingspan=w;
}
reptile::reptile(string name,int age,bool isHungry,bool isVenomous):animal(name,age,isHungry){
    this->isVenomous=isVenomous;
}
enclosure::enclosure(int capacity,int currentcount){
    Animal *c=new Animal[currentcount];
    this->capacity=capacity;
    this->currentcount=currentcount;
}
void enclosure:: addAnimal(Animal*a){
    Animal b=new Animal(currentcount++){
        for(int i=0;i<currentcount;i++){
            b[i]=c(currentcount);
            b[i]+=a;
            c=b;
        }
    }
}
void enclosure::displayAnimals(){
    cout<<"Capacity"<<capacity<<endl;
    for(int i=0;i<currentcount;i++){
        cout<<c[i].getname()<<endl;
    }
}
visitor::visitor(string vname=" ",int tickets=0){
    this->vname=vname;
    this->tickets=tickets;
}
void visitor::displayInfo(){
    cont<<"Name of visitor:"<<visitor<<endl;
    cout<<"Tickets:"<<tickets<<endl;
};

int main()
{
  Mammal("lion",5,"Hungry");
  bird("parrort",2,"Not Hungry");
  reptile("snake",3,"venomous");
  

    return 0;
}
