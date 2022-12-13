#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 4, 5, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minElement = INT32_MAX;
    for (int i = 0; i < size; ++i){
        minElement = min(minElement, arr[i]);
    }

    cout << minElement << endl;
    return 0;
}