#include <iostream>
using namespace std;

class Complex;
class Calculator{
    //define the methods here to calc the sum of real and complex part of input number
    public:
    int sum_RealOutput(Complex, Complex);
    int sum_ComplexOutput(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    void setNumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void printNumber(){
        cout << "Your number is : " << a << endl;
    }   

    friend int Calculator::sum_RealOutput(Complex o1, Complex o2);
    friend int Calculator::sum_ComplexOutput(Complex o1, Complex o2);

};


int Calculator :: sum_RealOutput(Complex o1, Complex o2){
    return(o1.a + o2.a);
}

int Calculator :: sum_ComplexOutput(Complex o1, Complex o2){
    return(o1.b + o2.b);
}

int main()
{
    Complex c1,c2;
    c1.setNumber(1,2);
    c2.setNumber(2,3);
    c1.printNumber();

    Calculator calc;
    int ansReal = calc.sum_RealOutput(c1, c2);
    int ansComplex = calc.sum_ComplexOutput(c1, c2);
    cout <<"Sum of real part is : " << ansReal << " and sum of complex part is : " << ansComplex << "i" << endl; 
}