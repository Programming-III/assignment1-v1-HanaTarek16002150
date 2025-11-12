#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here

#ifndef visitor_h_included
#define visitor_h_included
#include<iostream>
using namespace std;
class visitor{
    string vname;
    int tickets;
    public:
    void displayInfo();
    visitor(string vname,int tickets);
};
#endif





#endif
