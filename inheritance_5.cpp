#include<iostream>
using namespace std;

class A
{
    public:
    void display(){
        cout << "From class A " << endl;
    }
};

class B
{
    public:
    void display(){
        cout << "From class B " << endl;
    }
};

class C : public A, public B
{
    public:
    void print()
    {
        A::display();
    }
};

int main(){
    C c1;
    // c1.print();
    c1.A::display();
}