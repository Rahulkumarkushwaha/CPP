#include <iostream>
using namespace std;
// 1 + 2i
// 2 + 3i
// Complex number

class Complex
{
    int a, b;

public:
    void setNumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void printNumbers()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }

    friend Complex sumOfComplex(Complex x, Complex y);
};

Complex sumOfComplex(Complex x, Complex y)
{
    Complex z;
    z.setNumber((x.a + y.a), (x.b + y.b));
    return z;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 2);
    c1.printNumbers();

    c2.setNumber(2, 3);
    c2.printNumbers();

    sum = sumOfComplex(c1, c2);
    sum.printNumbers();
}
