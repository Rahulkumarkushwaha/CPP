//Causes of error during function overloading

// #include <iostream>
// using namespace std;

// void func(int i){
//     cout << "Value of i is : " << i << endl;
// }

// void func(float j){
//     cout << "Value of j is : " << j << endl;

// }

// int main(){
//     func(2);
//     func(2.1f);
// }

//---------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void func(int i){
    cout << "Value of i is : " << i << endl;
}

void func(int j, int k = 10){
    cout << "Value of j is : " << j << endl;
    cout << "Value of k is : " << k << endl;

}

int main(){
    // func(100); will throe error
    func(1,2);
}