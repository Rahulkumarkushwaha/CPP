#include <iostream>
using namespace std;

//Hybrid Inheritance
//It is a combination of more than one type of inheritance

class A
{
    protected:
    int a;

    public:
    void get_a(){
        cout << "Enter the value of a : " << endl;
        cin >> a;
    }
};

class B : public A
{
    protected:
    int b;

    public:
    void get_b(){
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
};

class C
{
    protected:
    int c;

    public:
    void get_c(){
        cout << "Enter the value of c : " << endl;
        cin >> c;
    }
};

class D : public B, public C
{
    public:
    void mul(){
        get_a();
        get_b();
        get_c();

        cout << "Mult of a, b,c gives : " << a * b * c << endl;
    }
};

int main(){
    D d1;
    d1.mul();
}