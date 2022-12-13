#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    // declaring array
    int a[5];

    // declaring and initializing array
    int b[3] = {1, 7, 3};

    // Adding array elements
    a[0] = 10;
    a[1] = 3;
    a[2] = 99;
    a[3] = 45;
    a[4] = 56;

    // updating array elements
    a[2] = 91;

    // assigning beyond index
    // a[5] = 11; // run-time error - comment out this line

    // printing array elements
    printArray(a, 5);
    return 0;
}