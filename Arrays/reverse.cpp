#include<iostream>
#include "helpful.h"
using namespace std;

void reverse(int a[], int size){
    int i = 0, j = size - 1;
    while(i < j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int arr[] = {2, 4, 3, 10, 5, 7, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before reversing: ";
    printArray(arr, size);

    reverse(arr, size);

    cout << "After reversing: ";
    printArray(arr, size);
    return 0;
}