#include<iostream>
using namespace std;

struct car{
    int speed;
    string name;
};


int main()
{

    //Structures

    // struct{
    //     int a;
    //     int b;
    //     string c;
    //     double d;
    //     string myName;
    // } myStruct;

    // myStruct.myName = "Adhiraj";

    // cout << myStruct.myName << endl;

    // struct{
    //     string playerName;
    //     int playerHealth;
    //     string weapon;
    // } player1, player2;

    // player1.playerName = "Mark";
    // player1.playerHealth = 100;
    // player1.weapon = "Gun";

    // player2.playerName = "John";
    // player2.playerHealth = 200;
    // player2.weapon = "Knife";

    // cout << "Player 1  is : " << player1.playerName << " and player 2 is : " << player2.playerName << endl;
    // cout << "Player 1 is playing with : " << player1.weapon << " and player 2 is playing with : " << player2.weapon << endl;

    car car1;
    car car2;

    car1.name = "BMW";
    car2.name = "AUDI";

    cout << "Car 1 is : " << car1.name;
}