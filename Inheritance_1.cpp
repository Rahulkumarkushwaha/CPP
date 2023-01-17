#include <iostream>
using namespace std;

/*
Inheritance - 

Types - 
Single Inheritance
Multilevel
Hierarchical 
Multiple inheritance
Hybrid

in inheritance, we have a Base class[parent class] and derieved class[child class]

Syntax
class derieved_class_name : visibility-mode base_class_name{
    
    public, private and protected
    by defaulr the visibility is private
}
*/

//Single level inheritance
//in this the derievd class is inherited from only one base class

class Animal{
    public:
    void walk(){
        cout << "Animal is walking " << endl;
    }
};

class Dog : public Animal
{
    public:
    void bark(){
        cout << "Bark " << endl;
    }
};

int main(){
    Dog dog1;
    dog1.walk();
    dog1.bark();
}