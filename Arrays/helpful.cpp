#include<iostream>
#include "helpful.h"
using namespace std;

void printArray(int a[], int size){
    for (int i = 0; i < size; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}