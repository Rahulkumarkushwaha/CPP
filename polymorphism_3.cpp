// Operator overloading

#include <iostream>
using namespace std;

// Check which oerators can be overloaded and which cannot

class Test
{
    int num;

    public:
    Test(){
        num = 10;
    }

    void operator++(){
        num = num + 2;
    }

    void display(){
        cout << "The count is : " << num << endl;
    }
};
int main()
{
    Test t;
    t.display();
    ++t;

    t.display();

    // int a = 10;
    // int b = 5;
    // cout << a + b << endl;

    // string c = "Hello";
    // string d = "World";
    // cout << c + d << endl;
}