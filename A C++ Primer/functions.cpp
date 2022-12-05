#include<iostream>
using namespace std;

/* Function Declaration */
bool evenSum(int a[], int n);

int main(){
    /* Functions */
    int arr[] = {1, 2, 3, 4};

    /* Function Call */
    bool result = evenSum(arr, sizeof(arr)/sizeof(arr[0]));

    result ? cout << "The Sum of Array Elements is Even." : cout << "The Sum of Array Elements is Odd.";
    cout << endl;
    return 0;
}

/* Function Definition */
bool evenSum(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; ++i){
        sum += a[i];
    }

    return (sum % 2 == 0);
}