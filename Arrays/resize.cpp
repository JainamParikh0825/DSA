#include<iostream>
#include "helpful.h"
using namespace std;

void resize(int a[], int prevSize, int newSize){
    int newArr[newSize];
    for (int i = 0; i < prevSize; ++i){
        newArr[i] = a[i];
    }
    a = newArr;
}

int main(){
    int arr[] = {3, 4, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before resize: ";
    printArray(arr, 4);

    cout << "After resize: ";
    resize(arr, size, size * 2);

    printArray(arr, size * 2);

    return 0;
}