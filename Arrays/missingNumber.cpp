#include <iostream>
#include "helpful.h"
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size + 1;

    int sumOfNaturalNumbers = (n * (n + 1)) / 2;

    int arrSum = 0;
    for (int i = 0; i < size; ++i){
        arrSum += arr[i];
    }

    cout << sumOfNaturalNumbers - arrSum << endl;

    return 0;
}