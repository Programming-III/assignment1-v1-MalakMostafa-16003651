#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;
class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    public:
    Animal();
    Animal(string name, int age, bool isHungry);
    void display();
    void feed();
    string getName();
    int getAge();
    bool getHungry();
    ~Animal();
};


#endif
