#ifndef VISITOR_H
#define VISITOR_H

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
    string getvname();
    int gettickets();
    void setname();
    void setticket();
};
#endif




