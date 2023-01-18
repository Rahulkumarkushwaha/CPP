#include <iostream>
using namespace std;

class Person{
    int a;
    int b;

    //Default constructor
    //Have same name as class
    //No parameters
    //no return type
    public:
    Person(){
        cout << "This is output from constructor " << endl;
    }

    Person(string name){
        cout << "The name is : " << name << endl;
    }

    Person(string name, int age){
        cout << "Name is :" << name << "Age is : " << age << endl;
    }

    void display(){
        cout << "this is display function " << endl;
    }

};

// class Maths{
//     public:
//     int add(int a, int b){
//         return (a + b);
//     }
// };

int main(){
    Person p1("Hello", 2);
    //p1.Person()
    p1.display();

}