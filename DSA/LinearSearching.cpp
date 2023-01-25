#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int key){
    for(int i = 0; i < n; i++){
        //if ith element of array matches the key
        if(a[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){
    // int n;
    // cin >> n;
    // int a[n];

    // for(int i = 0; i<n ; i++){
    //     cin >> a[i];
    // }
    
    int a[5] = {45, 1, 32, 12, 26};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Enter the key " << endl;
    int key;
    cin >> key;

    int pos = linearSearch(a,n, key);
    if(pos == -1){
        cout << "Key not found, please try again " << endl;
    }
    else{
        cout << "Key found at " << pos << endl;
    }
}