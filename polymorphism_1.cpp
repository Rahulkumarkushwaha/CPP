/*
Polymorphism
poly - many, morph - forms

e.g a person behaves differently according to different situation

compile time -> overloading
    - The overloaded functions are invoked by matching the type and number of argument. 
    - This info is available at the compile time and therefore compiler selects the appropriate function at the compile time.
    - achieved by function and operator overloading
    - It is also known as static binding or early binding


* Function overloading

Two or mmore functions having same name, but different parameters (different type of parameters or different number of parameters)

*/
//--------------------------------------------------------------------------------------------------------------

//eg of function overloading with different number of arguments in a method with same name
// #include <iostream>
// using namespace std;

// class functionOverloading{

//     public:
//     int add(int a, int b){
//         return a+b;
//     }

//     int add(int a, int b, int c){
//         return a+b+c;
//     }
// };

// int main(){
//     functionOverloading obj1;
//     cout << obj1.add(2,4, 4);
// }

//--------------------------------------------------------------------------------------------------------------

//eg of function overloading with different types of arguments in a method with same name

#include <iostream>
using namespace std;

int mul(int a, int b){
    return a * b;
}

float mul(double x, int y){
    return x * y;
}

int main(){
    int a = mul(2,3);
    cout << "int type output is : " << a << endl;

    float b = mul(2.1, 4);
    cout << "float type output is : " << b << endl;
}


