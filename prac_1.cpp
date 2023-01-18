#include <iostream>
using namespace std;

class Student{
    //In this i will define the attributes and behaviours

    //publiv private and protected are access modifiers
    //by default, variables and methods in a class are private
    private:
    int password = 1234;
    int age = 1000;

    public: 
    int rollNumber;
    string myName;

    void myMethod(int x){
        cout << "My Method " << x << endl;
    }

    //Getter
    int getPassword(){
        return password;
    }

    //Setter
    void setPassword(int input){
        password = input;
    }


    int getAge(){
        return age;
    }
    void setAge(int input){
        if(age < 0){
            return;
        }
        age = input;
    }
};

int main()
{
    //object -> Attributes (varibles) and Behaviours(Methods)

    //Person - Name, age, height     ||||     Walking() Running()

    //Class is like a blueprint or template

    //Access modifiers -> private (can only be accessed inside a class)
    // public (can be accessed outside the class)                      protected

    //Creating object statically
    Student s1;
    s1.myName = "Test";
    // s1.myMethod(4);
    s1.rollNumber = 1;
    cout << "My old Password is : " << s1.getPassword() << endl;
    s1.setPassword(234);
    cout << "My new  Password is : " << s1.getPassword() << endl;

    // cout << "Student 1 name is : " << s1.myName << endl;

    Student s2;
    s2.myName = "Hello";
    s2.setAge(2);
    cout << s2.getAge();

    // s2.myMethod(2);
    // cout << "Student 2 name is : " << s2.myName << endl;

    //creating object dynamically
    Student *s3 = new Student;

    s3->myName = "ONE";
    // cout << "Student 3 name is " << s3->myName << endl;

}