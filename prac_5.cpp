#include <iostream>
using namespace std;

class Binary{
    string s;

    public:
    void read();
    void checkIfBinary();
    void convertBinary();
    void display();
};

    //Scope resolution operator
    void Binary::read(){
        cout << "Enter a binary number " << endl;
        cin >> s;
    }

    void Binary::checkIfBinary(){
        for(int i = 0; i < s.length(); i++){
            if(s.at(i) != '0' && s.at(i) != '1'){
                cout << "Incorrect binary format " << endl;
                exit(0);
            }
        }
    }

    void Binary::convertBinary(){
        for(int i = 0; i < s.length(); i++){
            if(s.at(i) == '0'){
                s.at(i) = '1';
            }
            else{
                s.at(i) = '0';
            }
        }
    }

    void Binary::display(){
        for(int i = 0; i < s.length(); i++){
            cout << s.at(i);
        }
    }

int main(){

    Binary b;
    b.read();
    b.checkIfBinary();
    b.convertBinary();
    b.display();
}