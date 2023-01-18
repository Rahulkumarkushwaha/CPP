#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;

    Employee(int id, string name){
        this->id = id;
        this->name = name;
    }

    void display(){
        cout << id << "and " << name << endl;
    }
};

int main()
{
    Employee e1 = Employee(10, "ABC");
    
    
}