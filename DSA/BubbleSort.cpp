#include <iostream>
using namespace std;

void print(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void bubbleSort(int a[], int n)
{
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++)
            if(a[j] < a[i]){
                //swap
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }
}

int main()
{

    int a[5] = {45, 1, 32, 12, 26};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Before sorting, array elements are - " << endl;
    print(a,n);
    bubbleSort(a, n);

    cout << "\nAfter sorting, array elements are - " << endl;
    print(a,n);
}