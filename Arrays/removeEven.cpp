#include<iostream>
#include "helpful.h"
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 3, 10, 5, 7, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int oddCount = 0;
    for (int i = 0; i < size; ++i){
        if(arr[i] % 2 != 0)
            oddCount++;
    }

    int oddArr[oddCount];
    int j = 0;
    for (int i = 0; i < size; ++i){
        if(arr[i] % 2 != 0){
            oddArr[j] = arr[i];
            j++;
        }
    }

    printArray(oddArr, oddCount);
}