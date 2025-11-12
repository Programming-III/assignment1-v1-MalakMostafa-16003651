#ifndef VISITOR_H
#define VISITOR_H
#include<iostream>
using namespace std;
class Visitor{
    private:
    string visitorName;
    int ticketsBought;
    public:
    Visitor();
    Visitor(string visitorName, int ticketsBought);
    void displayInfo();
    ~Visitor();
};
#endif
