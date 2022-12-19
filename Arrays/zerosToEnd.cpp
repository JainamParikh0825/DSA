#include <iostream>
#include "helpful.h"
using namespace std;

int main(){
    int arr[] = {1, 2, 0, 3, 0, 4, 5, 6, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int j = 0;
    for (int i = 0; i < size; ++i){
        if(arr[i] != 0 && arr[j] == 0){
            swap(arr[i], arr[j]);
            j++;
        } else if(arr[j] != 0){
            j++;
        }
    }

    printArray(arr, size);
    return 0;
}