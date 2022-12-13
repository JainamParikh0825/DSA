#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 3, 10, 5, 7, 2, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = INT32_MIN, secondMaxElement = INT32_MIN;
    for (int i = 0; i < size; ++i){
        if(arr[i] > maxElement){
            secondMaxElement = maxElement;
            maxElement = arr[i];
        } else if(arr[i] > secondMaxElement && arr[i] < maxElement){
            secondMaxElement = arr[i];
        }
    }

    cout << secondMaxElement << endl;
    return 0;
}