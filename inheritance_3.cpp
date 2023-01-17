#include <iostream>
using namespace std;

/*
A -> B -> C ->d
MultiLevel inheritance, is a process of deriving a class from another derieved class



*/

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating " << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog can bark " << endl;
    }
};

class BabyDog : public Dog
{
public:
    void sleeps()
    {
        cout << "Baby dog sleeps " << endl;
    }
};

int main()
{
    BabyDog babyDog1;
    babyDog1.eat();
}