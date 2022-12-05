#include<iostream>
using namespace std;

void argumentPassing(int x, int &y){
    // Passed by Value
    x++;

    // Passed by Reference
    y++;
    
    cout << "x = " << x << ", y = " << y << endl;
}

int main(){
    /* Argument Passing */
    int a = 5, b = 10;
    cout << "a = " << a << ", b = " << b << endl;

    argumentPassing(a, b);

    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}