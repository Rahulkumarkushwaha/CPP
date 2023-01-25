#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int key){

    int s = 0 ,e = n-1;
    while(s <= e){

        int mid = (s+e)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] > key){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }

    return -1;
}

int main(){
    
    int a[7] = {1,2,3,4,1,2,3};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Enter the key " << endl;
    int key;
    cin >> key;

    int pos = binarySearch(a,n, key);
    if(pos == -1){
        cout << "Key not found, please try again " << endl;
    }
    else{
        cout << "Key found at " << pos << endl;
    }
}