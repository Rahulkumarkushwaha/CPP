#include<iostream>
using namespace std;

int main()
{
    //Reference var
    // int myInt = 5;
    // int &ref = myInt;

    // cout << myInt << endl;
    // cout << ref << endl;
    // cout << &ref << endl;

    string myStr = "Hello";
    string *ptr = &myStr;

    cout << myStr << endl;
    cout << &myStr << endl;

    cout << *ptr << endl;

    *ptr = "HI";

    cout << *ptr << endl;
    cout  << myStr << endl;
}