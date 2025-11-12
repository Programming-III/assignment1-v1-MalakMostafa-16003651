#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"
#include<iostream>
using namespace std;
class Enclosure{
    private:
    int capacity;
    int currentCount;
    Animal* animal;
    public:
    Enclosure();
    Enclosure(int capacity);
    void addAnimal(Animal* a);
    void displayAnimals();
    ~Enclosure();
    
};
#endif
