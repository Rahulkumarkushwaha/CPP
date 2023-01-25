/*
Templates

Helps us to write genereic programs, we can implement them in two ways -

FUnction template
Class templates

template <class T>
class myClass{
    T var;
    T myFunc(T int){
        ...
    };
};

*/

//Class template Example
#include <iostream>
using namespace std;

template <class T>
class Number{
    T num;

    public:
    Number(T n){
        num = n;
    }

    T getNum(){
        return num;
    }
};


int main(){
    //created and object of class Number with type int
    Number<int> numInt(10);

    Number<double> numDouble(10.5);

    cout << "Int number = " <<numInt.getNum() << endl;
    cout << "Double number = " <<numDouble.getNum() << endl;

}