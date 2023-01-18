#include <iostream>
using namespace std;

class Person{

public:
    int count = 1;
    Person(){
        cout << count << endl;
        // cout << "Constructor is executed" << endl;
    }

//Destructors
    // also have same name as class name beginning with ~
    // you can only have one destructor
    // cannot overload destructor
    //like constructor, it doesnt require any return type and parameter
    ~Person(){
        // cout << "Destructor is executed" << endl;
    }

};

int main(){
    Person p1, p2, p3, p4;
    // Person *p5 = new Person;

    // delete p5;
}