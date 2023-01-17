#include<iostream>
using namespace std;

//Creating/Declare a function
void myFucn(int randomNumber, string randomString = "Hello")
{
    //Defining the function
    cout << "Hello World " << randomNumber << " " << randomString << endl;
}

int myIntFunc(int x, int y){
    return y + x;
}

//Function Overloading

void firstFunc(){
    cout << "This is first func";
}

void firstFunc(int x){
    cout << "This is first function with one para";
}

// void firstFunc(double y){
//     cout << "Double is passed as para";
// }

int main()
{
    //Call the function
    // myFucn(1, "HI");
    // myFucn(3);
    // int var = myIntFunc(2,3);
    // cout << var;
    // cout << myIntFunc(4);

    firstFunc(2.1);
}




//Write a function that will take int x as input
// and it will return sqaure of x
//print that square in console