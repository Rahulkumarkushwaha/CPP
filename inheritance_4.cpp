#include <iostream>
using namespace std;

/*
Multiple inheritance
When derieved class have multiple parents

C -> A, B
*/

class A
{
protected:
    int a;

public:
    void getInt_a(int n)
    {
        a = n;
    }
};

class B
{
protected:
    int b;

public:
    void getInt_b(int n)
    {
        b = n;
    }
};

class C : public A, public B
{
    public:
    void display(){
        cout << "Value of a  is : " << a << endl;
        cout << "Value of b  is : " << b << endl;
        cout << "Value of a + b  is : " << a + b << endl;


    }
};

int main()
{
    C c1;
    c1.getInt_a(2);
    c1.getInt_b(4);
    c1.display();
}
