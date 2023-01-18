#include <iostream>
using namespace std;

class Student{
    int id;
    static int count;

    public:
    void setData(){
        cout << "Enter your college id : " << endl;
        cin >> id; 
    }

    void getData(){
        cout << "ID of student is : " << id << " and this student count is : " << count << endl;
    }
    static void getCount(){
        cout << "Value of count is : " << count++ << endl;
    }

};

int Student::count;

int main(){

    Student s1;
    s1.setData();
    s1.getData();
    Student::getCount();

    Student s2;
    s2.setData();
    s2.getData();
    Student::getCount();


}