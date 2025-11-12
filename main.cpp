#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
#include <string>
using namespace std;
    Animal:: Animal(){
        name="";
        age=0;
        isHungry=false;
    }
    Animal:: Animal(string name,int age, bool isHungry){
        this->name=name;
        this->age=age;
        this->isHungry=isHungry;
    }
    
    void Animal:: display(){
        cout<<name<<"( "<< "age: "<<age;
        if(isHungry)
        cout<<"Hungry"<<")";
        else 
        cout<<"Not Hungry"<<")";
         cout<<")"<<endl;
    }
    
    void Animal:: feed(){
        if(isHungry)
        cout<<"Hungry"<<endl;
        else 
        cout<<"Not Hungry"<<endl;
    }
    string Animal::getName(){
        return name;
    }
    int Animal::getAge(){
        return age;
    }
    bool Animal::getHungry(){
        return isHungry;
    }
    Animal::~Animal(){}
    
    Mammal:: Mammal():Animal(){
        furColor="";
    }
    
    Mammal::Mammal(string name,int age,bool isHungry,string furColor):Animal(name, age,isHungry){
        this->furColor=furColor;}
    
    Mammal::~Mammal(){}
    
    Bird:: Bird():Animal(){ 
        wingSpan=0;}
    
     Bird:: Bird(string name,int age, bool isHungry,float wingSpan):Animal(name,age,isHungry)
     {this->wingSpan=wingSpan;}
     Bird::~Bird() {}
    Reptile:: Reptile():Animal(){isVenomous=false;}
    Reptile::Reptile(string name,int age, bool isHungry,bool isVenomous):Animal(name,age,isHungry){
        this->isVenomous=isVenomous;
    }
    void Reptile:: display(){
        cout<<getName()<<"("<<"Age: "<<getAge()<<",";
        if(isVenomous){
         cout<<"venomous ";}
        else{cout<<"not venomous ";} 
        if(getHungry())
        cout<<"Hungry ";
        else{ cout<<"Not Hungry ";}
        cout<<")"<<endl;
        
    }
    Reptile::~Reptile(){}
    Enclosure::Enclosure(){capacity=0; currentCount=0; animal=new Animal[capacity];}
    Enclosure:: Enclosure(int capacity){
        this->capacity=capacity; 
         currentCount=0;
         animal=new Animal[capacity];
    }
    void Enclosure::addAnimal(Animal* a){
        if(capacity>currentCount){
            animal[currentCount]=a;
            currentCount++;
        }
        else{
            cout<<"no space"<<endl;
        }
        
    }
    void Enclosure::displayAnimals(){
        for(int i=0;i<currentCount;i++)
         animal[i].display();
    }
    Enclosure::~Enclosure(){
        delete animal[];
    }
    Visitor::Visitor(){
        visitorName="";
        ticketsBought=0;
    }
   Visitor::Visitor(string visitorName, int ticketsBought){
       this->visitorName=visitorName;
       this->ticketsBought=ticketsBought;
   }
   void Visitor::displayInfo(){
       cout<<"visitor Info: "<<endl;
       cout<<"Name: "<< visitorName<<endl;
       cout<<"Tickets Bought: "<<ticketsBought<<endl;
   }
    Visitor:: ~Visitor(){}
    int main(){
        Mammal Lion=Mammal("Lion",5,true,"beige");
        Bird Parrot=Bird("Parrot",2,false,5.0);
        Reptile Snake=Reptile("Snake",3,true,true);
        Enclosure one=Enclosure(5);
        one.addAnimal(&Lion);
        one.addAnimal(&Parrot);
        one.addAnimal(&Snake);
        Visitor sarah=Visitor("Sarah aly",3);
        one.displayAnimals();
        sarah.displayInfo();
        return 0;
    }
