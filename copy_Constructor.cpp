#include <iostream>
using namespace std;

//copy constructor
class Number{
    int a;

    public:

    Number(){
        a = 0;
    }

    Number(int num){
        a = num;
    }

    //By default, a copy constructor is called automatically
    //we can create our own copy constructor -
    Number(Number &obj){
        cout << "Copy constructor called " << endl;
        a = obj.a;
    }

    void display(){
        cout << "The value of a is : " << a << endl;
    }
};

int main(){
    Number num1 , num2(10);
    num1.display();
    num2.display();

    Number num3(num1);
    //Number num3 = num2;
    num3.display();
}