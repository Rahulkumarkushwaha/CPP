#include <iostream>
using namespace std;
//Friend Function

class Y;  //forward declaration
class X{
    int data;

    public:
    void setValue(int value){
        data = value;
    }

    //This doesn't mean that add can be accessed from obj of X, it only means that add have special permission to access the private members of class X
    friend void add(X, Y);

};

class Y{
    int data;

    public:
    void setValue(int value){
        data = value;
    }
    friend void add(X, Y);
};


void add(X o1, Y o2){
    cout << "Adding the object value of X and Y : " << o1.data + o2.data << endl; 
}

int main(){
    X x1;
    x1.setValue(10);

    Y y1;
    y1.setValue(20);

    add(x1, y1);
}

/*
1. Friends functions usually doesn't lie in the scope of class
2. it can access the private and protected meber
3. friend function cannot be called by the object of class
4. usually they will contain objects as args
5. can be declared in the public or private section of the class
*/