#include <iostream>
using namespace std;

class A
{
    int a = 2;
    int b = 4;

public:
    int mul()
    {
        int c = a * b;
        return c;
    }
};

class B : private A{
    public:
    void display(){
        int result = mul();
        cout << "Multiplication of a and b is : " << result << endl;
    }
};

int main()
{
    B b1;
    b1.display();
}

/*
Public - When the member is public, it is accessible to all the function in the program
Private - When the member is private, it is accessible inside the class only
Protected - the member is accessible within the class aas well as the class immediately derieved from it
*/

/*
Base class visibilty                                         Derieved class visibility
                                                        public              private             protected
Private                                              Not inherited         Not inherited      Not inherited
protected                                              protected            private             protected
public                                                  public              private             protected

*/