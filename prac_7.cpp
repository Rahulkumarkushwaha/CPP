#include <iostream>
using namespace std;

class A
{
    int privateInt;

    public:
    A(){
        privateInt = 10;
    }

    friend class B;
};

class B{
    void display(A &ref){
        ref.privateInt;
    }
};

int main()
{
}