#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"
#include<iostream>
using namespace std;
class Bird:public Animal{
    private:
    float wingSpan;
    public:
    Bird();
    Bird(string name, int age, bool isHungry, float wingSpan);
    ~Bird();
    
};
#endif
